// Programa que determine se um num é primo

#include <stdio.h>
int main()
{
    int num, i;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Numero nao e primo"); //porque sabemos que 0, 1 e negativos nao sao
    }
    else
    {
        for (i = 2; i * i <= num; i++) //todo num é divisível por 1 então por isso partimos do 2
        // se o resto de um num dividido por qualquer i for 0 então não é primo
        // i * i <= num -> quer dizer que testamos enquanto o i for menor que a raíz do num e assim nao precisamos usar a funcao sqrt()
        {
            if (num % 1 == 0){
                printf("Num e primo");
                break;
            }
        }
    }
}