#include<stdio.h>
#include<stdlib.h> /*insere a fun��o "pause" no programa*/
#include<string.h> /*insere a fun��o "strlen" no programa*/
int main(void)
{
char numero[20]; 
int tamanho;
int num[20];
int i;
int valor;

printf ("\n ALGORITMO BRIOT RUFFINI PARA INTEIROS:\n\n\n");
printf ("Insira um numero binario inteiro qualquer que voce gostaria de transformar em decimal:\n");
gets(numero); /*possibilita ao usu�rio inserir uma string de caracteres*/
tamanho=strlen(numero); /*essa fun��o conta quantos caracteres foram inseridos pelo usu�rio*/
for(i=0;i<tamanho;i++) /*esse "for" faz com que o caractere 1 (49) seja transformado em n�mero 1 e o caractere zero (48) em numero 0*/
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
valor=num[0];/*comando equivalente a "valor:= Dn"*/
for (i=0;i<tamanho-1;i++) /*esse "for" � o la�o que produz o algoritmo briot ruffini para inteiros*/
{
valor=num[i+1]+2*valor; /*os comandos do algoritmo briot ruffini foram ligeiramente modificados para se adpatar a esta linguagem*/
}
printf("\n\nO numero binario na forma decimal eh:   %d\n\n", valor);
system ("pause");
}



