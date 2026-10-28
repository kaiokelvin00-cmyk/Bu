/*
 * Atividade: Aplicação prática dos algoritmos Bubble Sort e Quick Sort
 * Situação escolhida: organização de despesas pessoais.
 *
 * O programa apresenta 10 despesas, mostra a lista original e ordena
 * cópias dos mesmos registros em ordem crescente de valor usando
 * Bubble Sort e Quick Sort, permitindo comparar os resultados.
 */

#include <stdio.h>
#include <string.h>

#define TOTAL_DESPESAS 10
#define TAM_NOME 40

typedef struct {
    char descricao[TAM_NOME];
    float valor;
} Despesa;

/* Exibe uma lista de despesas com seus valores. */
void mostrarDespesas(const Despesa despesas[], int tamanho) {
    printf("\n%-4s %-30s %12s\n", "Nº", "DESPESA", "VALOR (R$)");
    printf("----------------------------------------------------\n");

    for (int i = 0; i < tamanho; i++) {
        printf("%-4d %-30s R$ %9.2f\n",
               i + 1, despesas[i].descricao, despesas[i].valor);
    }
}

/*
 * Bubble Sort:
 * Compara elementos vizinhos e troca-os quando estão fora de ordem.
 * A cada passagem, o maior valor ainda não ordenado "borbulha"
 * até o final da parte não organizada do vetor.
 */
void bubbleSort(Despesa despesas[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int houveTroca = 0;

        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (despesas[j].valor > despesas[j + 1].valor) {
                Despesa temporaria = despesas[j];
                despesas[j] = despesas[j + 1];
                despesas[j + 1] = temporaria;
                houveTroca = 1;
            }
        }

        /* Se nenhuma troca ocorreu, os dados já estão ordenados. */
        if (!houveTroca) {
            break;
        }
    }
}

/*
 * Particionamento do Quick Sort:
 * Usa o último elemento como pivô e posiciona à sua esquerda
 * os valores menores ou iguais ao pivô; os maiores ficam à direita.
 * Retorna a posição final do pivô.
 */
int particionar(Despesa despesas[], int inicio, int fim) {
    float pivo = despesas[fim].valor;
    int indiceMenores = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (despesas[j].valor <= pivo) {
            indiceMenores++;

            Despesa temporaria = despesas[indiceMenores];
            despesas[indiceMenores] = despesas[j];
            despesas[j] = temporaria;
        }
    }

    Despesa temporaria = despesas[indiceMenores + 1];
    despesas[indiceMenores + 1] = despesas[fim];
    despesas[fim] = temporaria;

    return indiceMenores + 1;
}

/*
 * Quick Sort:
 * Ordena uma parte do vetor, posicionando o pivô corretamente.
 * Depois, chama a si mesmo para ordenar as partes à esquerda
 * e à direita do pivô, até que não haja partes para dividir.
 */
void quickSort(Despesa despesas[], int inicio, int fim) {
    if (inicio < fim) {
        int posicaoPivo = particionar(despesas, inicio, fim);

        quickSort(despesas, inicio, posicaoPivo - 1);
        quickSort(despesas, posicaoPivo + 1, fim);
    }
}

/* Copia os registros para que cada algoritmo receba os mesmos dados. */
void copiarDespesas(const Despesa origem[], Despesa destino[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        destino[i] = origem[i];
    }
}

int main(void) {
    const Despesa originais[TOTAL_DESPESAS] = {
        {"Aluguel", 1200.00f},
        {"Supermercado", 385.70f},
        {"Internet", 99.90f},
        {"Transporte", 160.00f},
        {"Energia eletrica", 218.45f},
        {"Agua", 74.30f},
        {"Celular", 59.99f},
        {"Farmacia", 132.80f},
        {"Lazer", 245.00f},
        {"Academia", 89.90f}
    };

    Despesa listaBubble[TOTAL_DESPESAS];
    Despesa listaQuick[TOTAL_DESPESAS];

    printf("===============================================\n");
    printf("   ORGANIZADOR DE DESPESAS PESSOAIS\n");
    printf("   Ordenacao por Bubble Sort e Quick Sort\n");
    printf("===============================================\n");

    printf("\nDESPESAS ANTES DA ORDENACAO:");
    mostrarDespesas(originais, TOTAL_DESPESAS);

    copiarDespesas(originais, listaBubble, TOTAL_DESPESAS);
    bubbleSort(listaBubble, TOTAL_DESPESAS);

    printf("\nRESULTADO DO BUBBLE SORT (menor para maior):");
    mostrarDespesas(listaBubble, TOTAL_DESPESAS);

    copiarDespesas(originais, listaQuick, TOTAL_DESPESAS);
    quickSort(listaQuick, 0, TOTAL_DESPESAS - 1);

    printf("\nRESULTADO DO QUICK SORT (menor para maior):");
    mostrarDespesas(listaQuick, TOTAL_DESPESAS);

    printf("\nConclusao: os dois algoritmos organizaram as mesmas despesas");
    printf("\nem ordem crescente de valor.\n");

    return 0;
}
