
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//15) Escreva um programa que leia duas strings e as imprima em ordem alfabética, a ordem em que elas apareceriam em um dicionário.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

	char v1[200], v2[200];
	int tamanho_v1, tamanho_v2, comp;

    	printf("Entre com a primeira string: ");
    	fgets(v1, sizeof(v1), stdin);
    	printf("Entre com a segunda string: ");
    	fgets(v2, sizeof(v2), stdin);

    	tamanho_v1 = strlen(v1);
    	if (v1[tamanho_v1 - 1] == '\n') {
        
        	v1[tamanho_v1 - 1] = '\0';
    	}
    	tamanho_v2 = strlen(v2);
    	if (v2[tamanho_v2 - 1] == '\n') {
        
        	v2[tamanho_v2 - 1] = '\0';
    	}

    	comp = strcmp(v1, v2); //fazendo a comparação das strings

    	if (comp < 0) {
        
        	printf("Strings arranjadas em ordem: %s, %s\n", v1, v2);
        	
    	} else if (comp > 0) {
        
        	printf("Strings arranjadas em ordem: %s, %s\n", v2, v1);
    
    	} else {
        
        	printf("As strings são iguais.\n");
    	}
}


