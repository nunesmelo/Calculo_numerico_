#include<stdio.h>
#include<stdlib.h> /*insere a função "pause" no programa*/
#include<string.h> /*insere a função "strlen" no programa*/
int main(void)
{
char numero[20]; 
int tamanho;
int num[20];
int i;
float valor;

printf ("\n ALGORITMO BRIOT RUFFINI PARA FRACOES:\n\n\n");
printf ("Insira um numero binario fracionario qualquer (incluindo o 0 e ponto) que voce gostaria de transformar em decimal:\n");
gets(numero); /*possibilita ao usuário inserir uma string de caracteres*/
tamanho=strlen(numero); /*essa função conta quantos caracteres foram inseridos pelo usuário*/
for(i=0;i<tamanho;i++) /*esse "for" faz com que o caractere 1 (49) seja transformado em número 1 e o caractere zero (48) em numero 0*/
      {
      if (numero[i]==49)
      {
      num[i]=1;
      }
      if (numero[i]==48)
      {
      num[i]=0;
      }
      }
valor=num[tamanho-1];/*comando equivalente a "valor:= Dn"*/
for (i=tamanho-2;i>1;i--) /*esse "for" é o laço que produz o algoritmo briot ruffini para frações*/
{
valor=num[i]+valor/2; /*os comandos do algoritmo briot ruffini foram ligeiramente modificados para se adpatar a esta linguagem*/
}
valor=valor/2;
printf("\n\nO numero binario na forma decimal eh:  %f\n\n", valor);
system ("pause");
}
