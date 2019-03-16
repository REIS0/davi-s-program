#include <stdio.h>
#include <stdlib.h>

int main(void) {

    system("clear");
    printf("------------------------------");
    printf("\n");
    printf("DAVI TEXT GENERATOR");
    printf("\n");
    printf("------------------------------");
    printf("\n");

    char fracassado[100];
    char coisa[100];

    printf("O que voce acha fracassado? ");
    scanf("%[^\n]s", fracassado);
    getchar();
    printf("O que essa coisa e? ");
    scanf("%[^\n]s", coisa);
    printf("\n");

    printf("\nEu acho o %s uma %s muito fracassado\n", fracassado, coisa);
    printf("\nno fundo ela so quer ajudar todo mundo e pipipi popopo\n");
    printf("\nmas TODA acao dela consegue fuder com tudo mais do que ja tava.\n\n");

    return 0;
}