CC=gcc

all: controlador cliente veiculo

controlador: controlador.c utils.h
		$(CC) controlador.c -o controlador -pthread

cliente: cliente.c utils.h
		$(CC) cliente.c -o cliente

veiculo: veiculo.c utils.h
	    $(CC) veiculo.c -o veiculo

clean: rm *.o controlador cliente veiculo fifo*
