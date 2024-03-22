#include<stdio.h>
#include<string.h>

int main(){
    printf("Qual o seu nome!\n");
    char nome[100];
    fgets(nome, 100, stdin);
    nome[strlen(nome)-1] = '\0'; // Remove o \n do final da string (fgets inclui o \n no final da string)
    printf("Ola %s", nome);
    return 0;
}