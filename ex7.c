
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//7) Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    	char v[200];
    	int tamanho, palindromo;

    	printf("Entre com a string: ");

    	fgets(v, sizeof(v), stdin);

        tamanho = strlen(v);
    	
    	if (v[tamanho - 1] == '\n') { //processo para retirar o caracter
        
        	v[tamanho - 1] = '\0';
        	tamanho--;
    	}

    	palindromo = 1;
    
    	for (int i = 0; i < tamanho / 2; i++) {
        	
        	if (v[i] != v[tamanho - i - 1]) {
            	palindromo = 0;
            	break;
        	
        	}
    	}

    	if (palindromo) {
        
        	printf("A string é um palíndromo.\n");
    	} else {
        
        	printf("A string não é um palíndromo.\n");
    	}

}

