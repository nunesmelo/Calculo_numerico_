#include<stdio.h>
#include<stdlib.h> /*insere a fun��o "pause" no programa*/
#include<string.h> /*insere a fun��o "strlen" no programa*/
#include<math.h>  /*insere a fun��o "pow"(pot�ncia) no programa*/
int main(void)
{
char numero[20]; 
int tamanho;
int num[20];
int i;
int valor=0;

printf ("\n ALGORITMO FORCA BRUTA:\n\n\n");
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
for (i=0;i<tamanho;i++) /*esse "for" � o la�o que produz o algoritmo for�a bruta*/
{
valor=valor+num[i]*pow(2,tamanho-i-1); /*os comandos do algoritmo for�a bruta foram ligeiramente modificados para se adpatar a esta linguagem*/
}
printf("\n\nO numero binario na forma decimal eh:   %d\n\n", valor);
system ("pause");
}




