#include<stdio.h>
#include<stdlib.h> /*insere a fun��o "pause" no programa*/

int main(void)
{
float n; /*vari�vel destinada ao n�mero decimal fracion�rio que ser� inserido*/
float r[30];
int i=0;
int a;
printf ("\n ALGORITMO MULTIPLICACAO SUCESSIVA:\n\n\n");
printf ("Insira um numero decimal fracionario qualquer (incluindo o 0 e ponto) que voce  gostaria de transformar em binario:\n");
scanf("%f", &n); 
while (n>0)  /*condi��o para obtermos o n�mero de multiplica��es a serem realizadas*/
{
r[i]= n*2; /*fun��o semelhante a "Rj:=piso(m*2)//r", ou seja, identifica o "piso" das multpilica��es*/
if (r[i]<1) /*registra o piso da multiplica��o como O quando o produto � menor que 0*/
{
r[i]=0;          
}
if (r[i]>=1)/*registra o piso da multiplica��o como 1 quando o produto � maior igual a 1*/
{
r[i]=1;          
}
n=n*2-r[i]; /*fun��o semelhante a "m:=2*m-Rj", ou seja, registra os produtos que ser�o multiplicados sucessivamentes*/
i=i+1; /*comando de repeti��o que localiza os restos das multiplica��es no vetor "r"*/
}
a=i;
printf("\n\n");
printf("\n\nO numero decimal fracionario na forma binaria eh:   ");
printf ("0.");
for (i=0;i<a;i++)
{
printf ("%0.f",r[i]);
}
printf ("\n\n");
system ("pause");
}
