#include<stdio.h>

int main(){
    printf("Qual o seu nome!\n");
    char nome[100];
    fgets(nome, 100, stdin);
    printf("Ola %s", nome);
    printf("Tudo bem com vc?\n");
    return 0;
}