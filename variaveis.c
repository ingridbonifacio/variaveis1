#include<stdio.h>

main(){

    //primeiro passo - declaração de variaveis 
    char nome[50];
    int idade;
    char matricula[15];
    char endereco[40];
    char curso[50];
    int periodo;
    char disciplinas[100];
    float mensalidade;

    //segundo passo - entrada de dados

    printf("Nome: \n");
    fgets(nome, 50, stdin);

    printf("Idade: \n");
    scanf("%d", &idade);
    fflush(stdin);
   
    printf("Matricula: \n");
    fgets(matricula, 15, stdin);

    printf("Endereco: \n");
    fgets(endereco, 40, stdin);

    printf("Curso: \n");
    fgets(curso, 50, stdin);

    printf("Periodo: \n");
    scanf("%d", &periodo);
    fflush(stdin);

    printf("Disciplina: \n");
    fgets(disciplinas, 100, stdin);

    printf("Mensalidade: \n");
    scanf("%f", &mensalidade);


}
