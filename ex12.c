
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//12) Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

	char nome[200];
    	float v_total, v_desconto, v_vista;

    	printf("Entre com o nome da mercadoria: ");
    	scanf("%[^\n]%*c", nome); // Ele fica lendo a string até achar a quebra de linha

    	printf("Entre com o valor total da mercadoria: R$ ");
    	scanf("%f", &v_total);

    	v_desconto = v_total * 0.10;
    	v_vista = 0.9 * v_total;

    	printf("Nome da mercadoria: %s\n", nome);
    	printf("Valor total: R$ %.2f\n", v_total);
    	printf("Desconto: R$ %.2f\n", v_desconto);
    	printf("Valor à vista: R$ %.2f\n", v_vista);

}

