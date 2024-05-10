
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//4) Faça um programa que leia uma string e a imprima de trás para a frente.

#include <stdio.h>
#include <stdlib.h>

void main(){
	
	char v[200];
	int tamanho = 0;

    	printf("Entre com a string: ");

	fgets(v, sizeof(v), stdin);

    	while (v[tamanho] != '\0') { //aqui eu encontro qual é o tamanho da string fornecida pelo usuário
        
        	tamanho++;
    	}

    	printf("Invertendo a string temos: ");
    
    	for (int i = tamanho - 1; i >= 0; i--) { //uso o tamanho obtido menos 1 pois queremos eliminar o caracter nulo que a string carrega
        
        	printf("%c", v[i]);
    	}
    	
    	printf("\n");

}

