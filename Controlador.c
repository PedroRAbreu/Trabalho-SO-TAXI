//
// Created by pedro on 11/17/25.
//

#include "utils.h"

typedef struct {
    int id;
    char nome[TAM_STR];
    int hora_agendada;
    char origem[TAM_STR];
    char destino[TAM_STR];
    int distancia;
    int estado; //se esta pendente, em curso ou concluido (1,2,3)
    pid_t pid_veiculo;
}SERVICO;

typedef struct {
    int id_veiculo;
    pid_t pid;
    int ocupado;
    int pipe;
}VEICULO;

//TINHA COLOCADO ESTAS ESTRUTURAS NO UTILS.H MAS ACHO QUE SO O CONTROLADOR DEVE TER ACESSO A ELAS
//"SEPARACAO DE RESPONSABILIDADES"

typedef struct{
    int continua;
    int tempo;

    //....
}TDATA;