//Cap. 3: 
#include <stdio.h>

/*int main()
{
    //Ler num invertido
    int num, invert = 0, ultimo;

    printf("Digite um num de mais de 1 digito: ");
    scanf("%d", &num);

    //Necessario pegar o ultimo digito e excluir e enviar para os invertidos ate zerar. E aí o ultimo vai ser o primeiro e assim por diante

    while(num > 0){
        ultimo = num % 10; //para descobrir quem é o ultimo
        invert = invert * 10 + ultimo;
        num = num / 10; //se for 1234/10 = 123 - o 4 já some
    }
    printf("%d", invert);


}*/

/*
//Verificar se uma pessoa é maior
int main()
{ 
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Maior de idade");
    }
    else{
        printf("Menor de idade");
    }
}*/

/*
//Entre dois nums e ver qual o maior
int main()
{
    int a, b, c;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    printf("Digite outro numero: ");
    scanf("%d", &c);

    if (a > b && a > c){
        printf("O num %d e o maior", a);
    }
    else if (b > a && b > c){
        printf("O num %d e o maior", b);
    }
    else{
        printf("O num %d e o maior", c);
    }
}*/

/*
//Ler numeros e determinar quantos sao iguais
int main()
{
    int n1, n2, n3;
    printf("Primeiro num: ");
    scanf("%d", &n1);
    printf("Segundo num: ");
    scanf("%d", &n2);
    printf("Terceiro num: ");
    scanf("%d", &n3);

    if (n1 == n2 && n2 == n3){
        printf("Os 3 nums sao iguais");
    }
    else if (n1 == n2 || n1 == n3 || n2 == n3){
        printf("Pelo menos um par e igual");
    }
    else{
        printf("Os 3 nums sao diferentes");
    }
}*/

//Uso do case
/*int main()
{
    int num, opcao;
    char op;

    do{
        printf("Digite um num: ");
        scanf("%d", &num);

        printf("Pretende identificar se o num e: \n");
        printf("1. Par ou impar\n");
        printf("2. Positivo, negativo ou 0\n");
        printf("3. Bissexto\n");
        scanf("%d", &opcao);
        switch(opcao){//o switch avalia a opcao escolhida pelo usuario
            case (1):
                if (num % 2 == 0)
                    printf("Num e par");
                else 
                    printf("Num e impar");
                break;
            case (2):
                if (num < 0)
                    printf("Num e negativo");
                else if (num == 0)
                    printf("Num e igual a 0");
                else
                    printf("Num e positivo");
                break;
            case (3):
                if (num % 4 == 0 && num % 100 != 0)
                    printf("Num e bissexto");
                else
                    printf("Num nao e bissexto");
                break;
        }
        printf("\nQuer parar? ");
        scanf("%s", &op);
    
    } while (op == 'n');

    
}*/

// Exercícios do cap. 1

// 1. Ler num inteiro diferente de 0 e dizer se é + ou -
/*int main()
{
    int num;

    printf("Digite um num: ");
    scanf("%d", &num);

    if (num == 0)
        printf("Deve ser diferente de 0");
    else if (num > 0)
        printf("Positivo");

    else 
        printf("Negativo");
}*/

// 2. Simulador de calculadora
/*int main()
{
    int n1, n2;
    float result;
    char op, continua;

    do{
        printf("Primeiro num: ");
        scanf("%d", &n1);
        printf("Segundo num: ");
        scanf("%d", &n2);

        printf("Escolha operacao: +, -, * ou /: ");
        scanf(" %c", &op); //necessario por esse espaço antes por causa do buffer de entrada. Basicamente quando entro com o segundo num e aperto enter, ele guarda o enter como
                        // caracter, e coloca ele como resposta do op. Qndo adiciono esse espaço, ele diz pro comput ignorar o enter e esperar a resp do usuario.
        switch(op){
            case '+':// o case so aceita aspas simples pq na sua essencia ele so aceita um caractere
                result = n1 + n2;
                printf("%d + %d = %.2f", n1, n2, result);
                break;
            case '-':
                result = n1 - n2;
                printf("%d - %d = %.2f", n1, n2, result);
                break;
            case '*':
                result = n1 * n2;
                printf("%d * %d = %.2f", n1, n2, result);
                break;
            case '/':
                result = n1 / n2;
                printf("%d / %d = %.2f", n1, n2, result);
                break;
        }
        printf("\nContinua? ");
        scanf(" %c", &continua);
    
    } while(continua == 's' || continua == 'S');
}*/

// 3. Gabarito
/*int main()
{
    char q1, q2, q3, g1, g2, g3;
    int result = 0, i;

    printf("Q1: ");
    scanf("%c", &q1);

    printf("Q2: ");
    scanf(" %c", &q2);

    printf("Q3: ");
    scanf(" %c", &q3);
//Gabarito
    printf("G1: ");
    scanf(" %c", &g1);

    printf("G2: ");
    scanf(" %c", &g2);

    printf("G3: ");
    scanf(" %c", &g3);

    if (q1 == g1)
        result += 1;
    if (q2 == g2)
        result += 1;
    if (q3 == g3)
        result += 1;
    printf("%d", result);
}*/

// 4. Triângulo
// Para ser triang. a soma de 2 lados não pode ser menor que o terceiro lado. Tipos: Equilátero: 3 lados =, Isósceles: 2 lados = e Escaleno: 3 lados diferentes.

/*int main()
{
    int l1, l2, l3;

    printf("Lado 1: ");
    scanf("%d", &l1);
    printf("Lado 2: ");
    scanf("%d", &l2);
    printf("Lado 3: ");
    scanf("%d", &l3);

    if (l1 + l2 < l3 || l1 + l3 < l2 || l2 + l3 < l1)
        printf("Pelas medidas passadas, nao e possivel formar um triangulo");
    else if (l1 == l2 && l1 == l3 )
        printf("Triangulo Equilatero, pq os 3 lados sao =");
    else if (l1 == l2 || l1 == l3 || l2 == l3)
        printf("Triangulo Isosceles, pq 2 lados sao =");
    else
        printf("Triangulo Escaleno, pq os 3 lados sao !=");

}*/

// 5. Ano Bissexto
// Pra ser bissexto deve ser divisivel por 400 ou divisivel por 4 e nao divisivel por 100
/*int main()
{
    int ano;

    printf("Ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0)
        printf("Ano de %d e bissexto", ano);
    else if (ano % 4 == 0 && ano % 100 != 0)
        printf("Ano de %d e bissexto", ano);
    else 
        printf("Ano de %d nao e bissexto", ano);
}*/

