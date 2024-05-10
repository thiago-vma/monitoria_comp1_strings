
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//14) O código de César é uma das técnicas de criptografia mais simples e conhecidas. É um tipo de substituição no qual cada letra do texto é substituída por outra, que se apresenta n posições após ela no alfabeto. Por exemplo, com uma troca de três posições, a letra A seria substituída por D, B se tornaria E e assim por diante. Escreva um programa que faça uso desse código de César para três posições. Entre com uma string e imprima a string codificada. Exemplo:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char cript[500], letra;
	
    	printf("Entre com a string codificada: ");
    	fgets(cript, sizeof(cript), stdin);

    	for(int i = 0; cript[i] != '\0'; i++) { //função para deslocar 3 posições
        
        	letra = cript[i];
        	if ((letra >= 'a' && letra <= 'z')) { // teste pra saber se é minúscula
            
            		cript[i] = ((letra - 'a' - 3 + 26) % 26) + 'a'; // deslocamento de três posições
        	
        	} else if ((letra >= 'A' && letra <= 'Z')) { // teste para saber se é maiúscula
            
            		cript[i] = ((letra - 'A' - 3 + 26) % 26) + 'A'; //
        	}
    	}

    	printf("String decodificada: %s\n", cript);

}

