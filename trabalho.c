#include <stdio.h>

#define TAM 4

void lerNotas(float notas[]);
float calcularSoma(float notas[]);
float calcularMedia(float soma);
float calcularAproveitamento(float soma);
float maiorNota(float notas[]);
void mostrarResultados(float soma, float media, float aproveitamento, float maior);

int main() {
    float notas[TAM];
    float soma, media, aproveitamento, maior;

    lerNotas(notas);

    soma = calcularSoma(notas);
    media = calcularMedia(soma);
    aproveitamento = calcularAproveitamento(soma);
    maior = maiorNota(notas);

    mostrarResultados(soma, media, aproveitamento, maior);

    return 0;
}


void lerNotas(float notas[]) {
    int i;
    for (i = 0; i < TAM; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

// Procedimento para mostrar os resultados
void mostrarResultados(float soma, float media, float aproveitamento, float maior) {
    printf("\nSoma das notas: %.2f", soma);
    printf("\nMedia: %.2f", media);
    printf("\nAproveitamento: %.2f%%", aproveitamento);
    printf("\nMaior nota: %.2f", maior);
}


float calcularSoma(float notas[]) {
    float soma = 0;
    int i;

    for (i = 0; i < TAM; i++) {
        soma += notas[i];
    }

    return soma;
}

// Função que calcula a média
float calcularMedia(float soma) {
    return soma / TAM;
}

// Função que calcula o aproveitamento em porcentagem
float calcularAproveitamento(float soma) {
    return (soma / 40) * 100;
}

// Função que retorna a maior nota
float maiorNota(float notas[]) {
    float maior = notas[0];
    int i;

    for (i = 1; i < TAM; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }

    return maior;
}
