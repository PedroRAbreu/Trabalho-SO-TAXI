//
// Created by leops on 24/11/2025.
//

#ifndef TRABALHO_SO_TAXI_UTILS_H
#define TRABALHO_SO_TAXI_UTILS_H

/*
 * Este header vai servir para colocar-mos as estruturas e os includes.
 * Depois e so chamar nos ficheiros.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <pthread.h>

#define MAX_UTILIZADORES 30
#define MAX_VEICULOS 10
#define TAM_STR 100

#define SERVER_FIFO "/temp/fifo_serv"
#define CLIENT_FIFO "/temp/fifo_cli_%d"

typedef struct {
    pid_t pid_cli;
    char nome[TAM_STR];
    char comando[TAM_STR];
    //para o agendamento:
    int hora;
    char origem[TAM_STR];
    char destino[TAM_STR];
    int distancia;
    //para o cancelamento:
    int id_servico;
}PEDIDO_CLI;

typedef struct {
    int tipo;
    char msg[TAM_STR];

    //int pid_veiculo;
    //int id_servico;

}RESPOSTA; //do controlador


#endif //TRABALHO_SO_TAXI_UTILS_H
