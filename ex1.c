
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//1) Faça um programa que leia uma string e a imprima na tela.

#include <stdio.h>
#include <stdlib.h>

void main(){

	char v[200];

    	printf("Entre com a string desejada: ");

    	fgets(v, sizeof(v), stdin); //necessário uso dessa função para poder imprimir o que vem depois do "espaço" digitado pelo usuário

    	printf("A string é: %s\n", v);

}

