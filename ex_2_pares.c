#include <stdio.h>
int main()
{
    int n, i;
    printf("Digite um numero: ");
    scanf("%d", &n);

    //Imprimir somente os nums pares até n
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i);
        }
    }
}