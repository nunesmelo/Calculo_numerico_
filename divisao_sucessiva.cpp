#include<stdio.h>
#include<stdlib.h> /*insere a fun��o "pause" no programa*/

int main(void)
{
int n; /*vari�vel destinada ao n�mero inteiro decimal que ser� inserido*/
int r[30];
int i=0;
int a;
printf ("\n ALGORITMO DIVISAO SUCESSIVA:\n\n\n");
printf ("Insira um numero inteiro decimal qualquer que voce gostaria de transformar em binario:\n");
scanf("%d", &n); 
while (n>0)  /*condi��o para obtermos o n�mero de divis�es a serem realizadas*/
{
r[i]=n%2; /*fun��o semelhante a "Rj:=qmod2//r", ou seja, identifica os restos das divis�es*/
n=n/2; /*fun��o semelhante a "q:=piso(q/2)", ou seja, identifica os quocientes que ser�o divididos sucessivamentes*/
i=i+1; /*comando de repeti��o que localiza os restos das divis�es no vetor "r"*/
}
a=i;
printf("\n\n");
printf("\n\nO numero decimal na forma binaria eh:   ");
for (i=a-1; i>=0; i--) /*comando de repeti��o semelhante a "R(j-1)...R(0)" que ir� mostrar o resultado do programa*/
{
printf("%d", r[i]);    
}
printf("\n\n");
system ("pause");
}
