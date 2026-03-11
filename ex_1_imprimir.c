#include <stdio.h>
//Imprimir todos os nums de 1 até n
int main()
{
    int n, i;
    printf("Digite um numero: ");
    scanf("%d", &n);
    //printf("O numero digitado foi: %d",n);

    for (i = 1; i <= n; i++)
    {
        printf("%d \n", i);
    }

}