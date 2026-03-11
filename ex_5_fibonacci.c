//Implemente a sequência de Fibonacci até N termos (forma iterativa).
#include <stdio.h>

int main()
{
    int n, i, penultimo = 0, ultimo= 1, fn; // 0, 1 sabemos que a sequencia começa assim, onde o 0 é o penúltimo e o 1 o último

    printf("Digite um num: ");
    scanf("%d", &n);

   for (i = 2; i <= n; i++){
    fn = ultimo + penultimo; // o Fibonacci sempre vai ser a soma do ultimo com o penultimo
    ultimo = penultimo; // esses nums vao mudar conforme o loop, e o que era penultimo vira ultimo agora
    penultimo = fn; // e o penultimo passa a ser o num descoberto antes
    printf("%d\n", fn);
   }
}