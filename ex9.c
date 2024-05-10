
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//9) Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando quantas vezes a segunda string lida está contida dentro da primeira.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	
	char v1[200], v2[200];
	int tamanho_v1, tamanho_v2, quant;

    	printf("Entre com a primeira string: ");
    	fgets(v1, sizeof(v1), stdin);

    	printf("Entre com a segunda string: ");
    	fgets(v2, sizeof(v2), stdin);

    	tamanho_v1 = strlen(v1);
    	
    	if (v1[tamanho_v1 - 1] == '\n') {
        	
        	v1[tamanho_v1 - 1] = '\0';
        	tamanho_v1--;
    	}

    	tamanho_v2 = strlen(v2);
    	
    	if (v2[tamanho_v2 - 1] == '\n') {
        
        	v2[tamanho_v2 - 1] = '\0';
        	tamanho_v2--;
    	}

    	quant = 0;
    	
    	for (int i = 0; i <= tamanho_v1 - tamanho_v2; i++) {
        
        	if (strncmp(&v1[i], v2, tamanho_v2) == 0) {
            	quant++;
        	
        	}
    	}

    	printf("A segunda string está contida na primeira %d vezes.\n", quant);

}

