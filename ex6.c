
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//6) Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere. Ao final, imprima a nova string e o número de vogais que ela possui.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

	char v[200], nova_v;
	int tamanho, n_vogais = 0;
   
    	printf("Entre com a string: ");

    	fgets(v, sizeof(v), stdin);

    	printf("Qual caracter deseja que substituas as vogais ?: ");
    	scanf("%c", &nova_v);
    	getchar();

     	tamanho = strlen(v);

    	for (int i = 0; i < tamanho; i++) {
        
        	char c = v[i];
        
        	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
        	
            		v[i] = nova_v;
            		n_vogais++;
        	}
    	}	

   
    printf("A nova string é: %s, e o número de vogais era: %d\n", v, n_vogais);

}

