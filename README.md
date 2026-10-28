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

## Como garantir uma comparação justa
Os dois algoritmos recebem cópias independentes da mesma lista original. Assim, nenhum deles começa com os dados já ordenados pelo outro.

## Dados de exemplo
Os registros são fictícios e servem apenas para demonstrar a aplicação. Os valores são ordenados em ordem crescente de preço.

## Atividades extras: GitHub

1. Crie uma conta ou entre em [GitHub](https://github.com/).
2. Crie um repositório público chamado `atividade-bubble-quick-sort`.
3. Envie `main.c` e `README.md` ao repositório. Você pode usar a opção **Add file > Upload files**.
4. Para demonstrar a evolução com commits, faça alterações pequenas e significativas e registre cada etapa com uma mensagem clara, por exemplo:
   - `Adiciona registros de despesas`
   - `Implementa Bubble Sort`
   - `Implementa Quick Sort`
   - `Documenta execução no README`
5. Para fazer commits e push pelo terminal, depois de configurar o Git e criar o repositório remoto, use:
```bash
git init
git add main.c README.md
git commit -m "Adiciona aplicação de ordenação de despesas"
git branch -M main
git remote add origin https://github.com/SEU-USUARIO/atividade-bubble-quick-sort.git
git push -u origin main
```
Substitua `SEU-USUARIO` pelo seu nome de usuário e use a URL real do repositório criado. Se fizer tudo pelo site, o GitHub registra commits de envio, mas o histórico de desenvolvimento fica mais bem demonstrado com commits separados durante o trabalho.

## Atividade extra: execução online
Como este projeto é um programa de terminal em C, não há uma interface web para hospedar como um site estático. Para disponibilizar uma execução funcional, use um compilador online que execute C, como [OnlineGDB](https://www.onlinegdb.com/online_c_compiler) ou [Programiz](https://www.programiz.com/c-programming/online-compiler/). Cole o código de `main.c`, execute e compartilhe o link gerado pela própria plataforma, caso ela ofereça essa opção. Verifique o link em uma janela anônima antes de entregá-lo.

## Entrega
- `main.c`: código-fonte da aplicação.
- `README.md`: explicação do problema, execução e algoritmos.
- Link do repositório GitHub, após criá-lo.
- Link de execução online, se a plataforma gerar um link compartilhável.

**Importante:** os links de GitHub e execução precisam ser criados na sua própria conta. Este pacote prepara os arquivos, mas não publica automaticamente nos seus serviços.
