# ♟️ Movimentos de Xadrez: Recursividade em C

> Algoritmo que simula a lógica de movimentação de peças de xadrez, comparando abordagens Recursivas vs. Iterativas.

## 💻 Sobre o Projeto
Este código demonstra duas formas fundamentais de repetição na programação:
1.  **Recursividade:** Utilizada nas peças lineares (Torre, Bispo, Rainha), onde a função chama a si mesma até que o número de casas seja zero.
2.  **Iteração (Loops):** Utilizada no Cavalo, empregando laços `for` e `while` aninhados para simular o movimento complexo em "L".

## ⚙️ Destaques do Código
* **Funções Recursivas:** Implementação limpa de stacks de chamada (`moverTorre(casas - 1)`).
* **Controle de Fluxo:** Uso de condicionais para parar a recursão (Caso Base).
* **Loops Aninhados:** Lógica mista para movimentos não-lineares (Cavalo).

## 🚀 Como Executar
1. Compile: `gcc xadrez.c -o xadrez`
2. Execute: `./xadrez`

## 🧩 Exemplo de Lógica (Recursão)
Abaixo, a função que move a Rainha chamando a si mesma:

```c
void moverRainha(int casas){
    if(casas > 0){
        printf("Esquerda!\n");
        moverRainha(casas - 1); // Chamada recursiva
    }
}
