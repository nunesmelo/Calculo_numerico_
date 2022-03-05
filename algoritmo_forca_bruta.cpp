#include<stdio.h>
#include<stdlib.h> /*insere a função "pause" no programa*/
#include<string.h> /*insere a função "strlen" no programa*/
#include<math.h>  /*insere a função "pow"(potência) no programa*/
int main(void)
{
char numero[20]; 
int tamanho;
int num[20];
int i;
int valor=0;

printf ("\n ALGORITMO FORCA BRUTA:\n\n\n");
printf ("Insira um numero binario inteiro qualquer que voce gostaria de transformar em decimal:\n");
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
for (i=0;i<tamanho;i++) /*esse "for" é o laço que produz o algoritmo força bruta*/
{
valor=valor+num[i]*pow(2,tamanho-i-1); /*os comandos do algoritmo força bruta foram ligeiramente modificados para se adpatar a esta linguagem*/
}
printf("\n\nO numero binario na forma decimal eh:   %d\n\n", valor);
system ("pause");
}




