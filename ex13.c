
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//13) Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j da string S.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char S[100];
    	int i, j, tamanho_S;

    	printf("Entre com a string: ");
    	fgets(S, sizeof(S), stdin);

    	tamanho_S = strlen(S);
    	
    	if (S[tamanho_S - 1] == '\n') {
        	
        	S[tamanho_S - 1] = '\0';
        	tamanho_S--;
    	}

    	printf("Entre com o primeiro valor positivo (deve ser menor que o segundo, e o 0 conta: ");
    	scanf("%d", &i);
    	printf("Entre com o segundo valor positivo: ");
    	scanf("%d", &j);

    	if (i > j || i < 0 || j < 0) { //aqui faço uma verificação para saber se o usuário entrou com números válidos
        
        	printf("Valores inválidos.\n");
        	return 1;
    	}

    	printf("Segmento da string S contida entre os valores dados: ");
    	
    	for (int k = i; k <= j; k++) {
        	
        	printf("%c", S[k]);
    	}
    
    	printf("\n");
    
    return 0;

}
