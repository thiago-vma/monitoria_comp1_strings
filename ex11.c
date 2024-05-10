
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//11) Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em minúscula. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.

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
        
        	if (v1[i] >= 'A' && v1[i] <= 'Z') {
            
            		v1[i] += 32; // usando aquela mesma dica para converter o caracter
        	}
    	}

    	printf("A string fica: %s\n", v1);
    
}

