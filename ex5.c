
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//5) Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma variável. Em seguida, imprima a string invertida.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    	char v[200];
    	int tamanho;

    	printf("Entre com a string: ");

    	fgets(v, sizeof(v), stdin);

     	tamanho = strlen(v);

    	for (int i = 0, j = tamanho - 1; i < j; i++, j--) { //Aqui eu inverto os caracteres opostos por meio de uma variável auxiliar temporária
        
        	char aux = v[i];
        	v[i] = v[j];
        	v[j] = aux;
    	}

    // Imprime a string invertida
    printf("A string invertida é: %s\n", v);

}

