
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//3) Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos caracteres ela possui.

#include <stdio.h>
#include <stdlib.h>

void main(){

	char v[200];
    	int qte = 0;

    	printf("Entre com a string: ");

    	fgets(v, sizeof(v), stdin);

    	for (int i = 0; v[i] != '\0'; i++) {
        
        	qte++;
    	}
    	
    	printf("A string possui %d caracteres.\n", qte - 1); //retiro o caracter que a string sempre carrega, lembrando que ela também contabiliza espaços como caracteres
    
}

