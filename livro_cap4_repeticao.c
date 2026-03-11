#include <stdio.h>

// While - media de um valor obtido atraves de outros passados
/*int main()
{
    int cont = 0, soma = 0, valor;
    float media;

    while (cont < 3){
        printf("Entre com um valor: ");
        scanf("%d", &valor);

        soma = soma + valor;
        cont = cont + 1;
    }
    media = soma / cont;
    printf("O valor de %d dividido por %d e igual a %.2f", soma, cont, media);
}*/

// Calcular a multiplicacao de 2 nums sem usar *
/*int main()
{
    int n1 = 5, n2 = 7, mult = 0, cont = 0;

    while (cont < n1){
        mult = mult + n2;
        cont = cont + 1;
    }
    printf("O valor de %d x %d = %d", n1, n2, mult);
}*/

// Fatorial
// Ler num inteiro positivo e calcular seu fatorial. n! = n * (n-1) * (n-2) se n > 0, mas se n = 0 então n! = 1.
/*int main()
{
    int n, fat = 1, i, cont;

    printf("Numero para calcular fatorial: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Nao e possivel fazer fatorial de nums negativos!");
    else if (n == 0)
        printf("O n! de 0 e = 1.");
    else
        //Só com While
        cont = n;
        while (cont > 1){
            fat = fat * cont;
            cont = cont - 1;
        }
        printf("%d", fat);

        // com for
        for (i = n; i > 1; i-=1){ // atentar a esse igual do i. O = é uma atribuição, o computador atribui o valor que citei a var i. Já o == é uma comparação, basicamente 
                                // pergunta se o valor que está em i é igual ao que citei.
            fat = fat * i;
        }
        printf("%d", fat);      
}*/


//Soma de impares
/*int main()
{
    int num, soma_impar = 0, qtd_impar = 0, cont = 1;
    
    while (cont <= 5){
        printf("Digite o %d numero: ", cont);
        scanf(" %d", &num);

        cont += 1;

        if (num % 2 != 0)
            qtd_impar += 1;
            soma_impar = soma_impar + num;
    }
    printf("\nA quantidade de numeros impar foi: %d\nE a soma destes: %d", qtd_impar, soma_impar);

}*/

// Outra forma:
/*int main()
{
    int inferior, superior, num, soma;

    printf("Limite Inferior: ");
    scanf("%d", &inferior);

    printf("Limite Superior: ");
    scanf("%d", &superior);
    if (superior > inferior){
        num = inferior;

        while (num <= superior){
            if (num % 2 == 1)
                soma = soma + num;
            num = num + 1;
        }
        printf("Somatorio: %d", soma);
    }
    else //aqui posso deixar sem chaves pq só quero que leia a linha abaixo dele, se tivesse mais comandos, teria que colocá-los dentro de chaves.
        printf("Limite inferior deve ser menor que o superior");

}*/

// Somar todos:
/*int main()
{
    int inferior, superior, num, soma = 0;

    printf("Limite Inferior: ");
    scanf("%d", &inferior);

    printf("Limite Superior: ");
    scanf("%d", &superior);
    if (superior > inferior){
        num = inferior;

        while (num <= superior){
            soma = soma + num;
            num = num + 1;
        }
        printf("Somatorio: %d", soma);
    }
    else //aqui posso deixar sem chaves pq só quero que leia a linha abaixo dele, se tivesse mais comandos, teria que colocá-los dentro de chaves.
        printf("Limite inferior deve ser menor que o superior");

}*/

// Outras variacoes:
/*int main()
{
    int inferior = 0, superior, num, soma = 0;
//Ler um num e se for impar, colocar como inferior, se for par, continuar a pedir
    while (inferior == 0){
        printf("Insira um valor: ");
        scanf("%d", &num);
        if (num % 2 != 0)
            inferior = num;
    }

    printf("Limite Superior: ");
    scanf("%d", &superior);
    if (superior > inferior){
        num = inferior;

        while (num <= superior){
            soma = soma + num;
        //Colocar pra aumentar de 2 em 2 pra que já fique tudo como impar.
            num = num + 2;
        }
        printf("Somatorio: %d", soma);
    }
    else 
        printf("Limite inferior deve ser menor que o superior");

}*/

//Num primo - seguindo o algoritmo do livro p/ entender
//Infos importantes: Primo - divisivel apenas por si e por 1 - pares apenas o 2, o resto é impar - é mais fácil ser div por um num menor, entao começamos de baixo pra cima -
//nenhum num pode ser div por outro num maior que sua metade
/*int main()
{
    int num, divisor;
    bool divisivel; // vars bools uteis para determinar a saida ou nao de laços

    printf("Digite um numero: ");
    scanf("%d", &num);

    divisivel = false;
    if (num % 2 == 0 && num > 2){
        divisivel = true;
    else
        divisor = 3;
    }

    while (divisivel && divisor > 1){
        if (num % divisor == 0)
            divisivel = true;
        else
            divisor = divisor - 1;

    }
    if ()
//NÃO ENTENDO.

}*/

// Média das turmas de uma escola

int main(){
    int num_turmas, num_alunos, cont_t = 0, cont_a = 0;
    float nota, soma = 0, media_t = 0;

    printf("\nNumero de turmas: ");
    scanf("%d", &num_turmas);

    while (cont_t < num_turmas){
        printf("Quantos alunos da turma %d: ", cont_t + 1);
        scanf("%d", &num_alunos);
        
        cont_a = 0;
        soma = 0;

        while (cont_a < num_alunos){
            printf("Nota aluno %d: ", cont_a + 1);
            scanf("%f", &nota);
            soma = soma + nota;
            cont_a += 1;
        }
        printf("Soma total turma %d: %.2f\n", cont_t + 1, soma);
        media_t = soma / num_alunos;
        printf("A media da turma %d: %.2f\n", cont_t + 1, media_t);

        cont_t += 1;
    }
    
}

