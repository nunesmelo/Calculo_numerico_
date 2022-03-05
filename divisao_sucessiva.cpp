#include<stdio.h>
#include<stdlib.h> /*insere a função "pause" no programa*/

int main(void)
{
int n; /*variável destinada ao número inteiro decimal que será inserido*/
int r[30];
int i=0;
int a;
printf ("\n ALGORITMO DIVISAO SUCESSIVA:\n\n\n");
printf ("Insira um numero inteiro decimal qualquer que voce gostaria de transformar em binario:\n");
scanf("%d", &n); 
while (n>0)  /*condição para obtermos o número de divisões a serem realizadas*/
{
r[i]=n%2; /*função semelhante a "Rj:=qmod2//r", ou seja, identifica os restos das divisões*/
n=n/2; /*função semelhante a "q:=piso(q/2)", ou seja, identifica os quocientes que serão divididos sucessivamentes*/
i=i+1; /*comando de repetição que localiza os restos das divisões no vetor "r"*/
}
a=i;
printf("\n\n");
printf("\n\nO numero decimal na forma binaria eh:   ");
for (i=a-1; i>=0; i--) /*comando de repetição semelhante a "R(j-1)...R(0)" que irá mostrar o resultado do programa*/
{
printf("%d", r[i]);    
}
printf("\n\n");
system ("pause");
}
