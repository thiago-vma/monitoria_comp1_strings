
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//10) Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    	char v1[200];
    	int tamanho_v1;

    	printf("Entre com a string: ");
    	fgets(v1, sizeof(v1), stdin);

    	tamanho_v1 = strlen(v1);
    	
    	if (v1[tamanho_v1 - 1] == '\n') {
        
        	v1[tamanho_v1 - 1] = '\0';
        	tamanho_v1--;
    	}

    	for (int i = 0; i < tamanho_v1; i++) {
        
        	if (v1[i] >= 'a' && v1[i] <= 'z') {
            	v1[i] -= 32; // usando a dica que o exercício deu
        	
        	}
    	}

    	printf("A string fica: %s\n", v1);

}

