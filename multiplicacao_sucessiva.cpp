#include<stdio.h>
#include<stdlib.h> /*insere a função "pause" no programa*/

int main(void)
{
float n; /*variável destinada ao número decimal fracionário que será inserido*/
float r[30];
int i=0;
int a;
printf ("\n ALGORITMO MULTIPLICACAO SUCESSIVA:\n\n\n");
printf ("Insira um numero decimal fracionario qualquer (incluindo o 0 e ponto) que voce  gostaria de transformar em binario:\n");
scanf("%f", &n); 
while (n>0)  /*condição para obtermos o número de multiplicações a serem realizadas*/
{
r[i]= n*2; /*função semelhante a "Rj:=piso(m*2)//r", ou seja, identifica o "piso" das multpilicações*/
if (r[i]<1) /*registra o piso da multiplicação como O quando o produto é menor que 0*/
{
r[i]=0;          
}
if (r[i]>=1)/*registra o piso da multiplicação como 1 quando o produto é maior igual a 1*/
{
r[i]=1;          
}
n=n*2-r[i]; /*função semelhante a "m:=2*m-Rj", ou seja, registra os produtos que serão multiplicados sucessivamentes*/
i=i+1; /*comando de repetição que localiza os restos das multiplicações no vetor "r"*/
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
