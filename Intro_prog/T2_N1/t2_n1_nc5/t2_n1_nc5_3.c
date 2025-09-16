#include <stdio.h>

int main() {
    int idade;
    float altura;
    char opcao;
    char nome[50];
    printf("Qual a idade? ");
    scanf("%d", &idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    getchar();

    printf("Digite o seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(cidade, "\n")] = '\0';

    printf("Você concorda com os termos? (S/N) ");
    scanf(" %c", &opcao);

    printf("Seu nome é: %s\n", nome);
    printf("A idade é: %d\n", idade);
    printf("A altura é: %.2f\n", altura);
    printf("Concordou com os termos: %c\n", opcao);
}