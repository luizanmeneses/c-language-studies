#include <stdio.h>
/*Implemente o cálculo do fatorial de um numero usando loop*/

int main()
{
    int num, i;
    int fatorial = 1;//Devemos começar com 1 porque se não colocar nada ele vai considerar como 0 e não dá pro neutro ser 0 na mult só na soma porque tudo vai sempre dar 0
    printf("Digite um num: ");
    scanf("%d", &num);

    
    for (i = num; i >= 1; i-=1){ //tinha colocado final como i = 0 mas deve ser i>=1 porque o = é de atribuição, entao o compilador entende como atribuir 0 a i e como 0
                                // é falso, o loop não executa, se zero o i a condição nem é satisfeita
        fatorial = fatorial * i; //eu diminuo sempre do i, ele começa como o num e vai diminuindo de 1 em 1 em cada loop
        printf("%d \n", fatorial);  
    }

    
}