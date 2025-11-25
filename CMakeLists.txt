cmake_minimum_required(VERSION 3.26)
project(Trabalho_SO_TAXI C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Trabalho_SO_TAXI
        Cliente.c
        Controlador.c
        utils.h
        main.c
        makefile
        Veiculo.c
)
