#include<stdio.h>

int main(){
    printf("Qual o seu nome!\n");
    char nome[100];
    fgets(nome, 100, stdin);
    printf("Ola %s", nome);
    return 0;
}