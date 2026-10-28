# Organizador de Despesas Pessoais

## Objetivo
Aplicar e comparar os algoritmos de ordenação Bubble Sort e Quick Sort em uma situação cotidiana, utilizando a linguagem C.

## Situação-problema
Quem controla as próprias despesas pode precisar descobrir rapidamente quais gastos são menores e quais pesam mais no orçamento. O programa utiliza 10 despesas fictícias e as organiza pelo valor, do menor para o maior.

## Funcionalidades
- Exibe os 10 registros antes da ordenação.
- Ordena uma cópia dos dados com Bubble Sort.
- Ordena outra cópia dos mesmos dados com Quick Sort.
- Mostra os dois resultados para facilitar a comparação.
- Inclui comentários no código explicando o funcionamento dos algoritmos.

## Requisitos
- Compilador C, como GCC.
- Terminal ou prompt de comando.

## Como compilar e executar

### Linux
```bash
gcc main.c -o despesas
./despesas
```

### Windows (GCC/MinGW)
```bash
gcc main.c -o despesas.exe
despesas.exe
```

Também é possível compilar em ambientes online que aceitem C, como OnlineGDB ou Programiz Online Compiler, colando o conteúdo de `main.c`.

## Como os algoritmos funcionam

### Bubble Sort
Compara valores vizinhos. Quando dois valores estão na ordem errada, troca suas posições. Ao repetir as passagens, os maiores valores vão para o final do vetor. O programa encerra antecipadamente se uma passagem não fizer nenhuma troca. O custo de tempo no pior caso é O(n²).

### Quick Sort
Escolhe um pivô, neste caso o último valor da parte analisada, e particiona o vetor: valores menores ou iguais ao pivô ficam à esquerda e os maiores ficam à direita. Em seguida, aplica recursivamente o mesmo processo nas duas partes. Seu desempenho médio é O(n log n), embora o pior caso seja O(n²).

