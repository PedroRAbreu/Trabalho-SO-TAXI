cmake_minimum_required(VERSION 4.0)
project(Trabalho_SO_TAXI C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Trabalho_SO_TAXI
        Cliente.c
        Cliente.h
        Controlador.c
        Controlador.h
        main.c
        makefile.c
        Veiculo.c
        Veiculo.h)
