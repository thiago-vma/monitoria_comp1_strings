
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//2) Faça um programa que leia uma string e imprima as quatro primeiras letras dela.

#include <stdio.h>
#include <stdlib.h>

void main(){

	   char v[200], c;

    	printf("Entre com a string: ");

    	for (int i = 0; i < 200; i++) {
        
        	c = getchar();
        
        	if (c == '\n') {
            
            		v[i] = '\0'; // coloco o caracter nulo no final da string
            		break;
        	}
        	
        	v[i] = c;
    	}

    	printf("As quatro primeiras letras são: ");
    
    	for (int i = 0; i < 4 && v[i] != '\0'; i++) { //preciso garantir as duas possibilidades
        
        	printf("%c", v[i]);
    	}
    	
    	printf("\n");

}

