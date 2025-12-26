#include <stdio.h>

void moverTorre (int casas){

    if (casas > 0)
    {
        printf("Direita!\n");
            moverTorre(casas - 1);
    }
    
}
void moverBispo (int casas){

    if(casas > 0){
        printf("Cima, Direita!\n");
            moverBispo(casas - 1);
    }
}

void moverRainha(int casas){

    if(casas > 0){
        printf("Esquerda!\n");
            moverRainha(casas - 1);
}}


int main() {
    
        //Declarando e iniciando as variaveis com valor 0
    int c = 0;

    printf("Torre moveu-se para:\n");
    moverTorre(5);

        printf("--------------\n");

    printf("Bispo moveu-se para:\n");
    moverBispo(5);

        printf("--------------\n");

    printf("Rainha moveu-se para:\n");
    moverRainha(8);

        printf("--------------\n");


         //Laço de repetição simulando a movimentação do Cavalo
    printf("Cavalo se moveu para:\n");
    for (c; c < 1; c++)
    {
        while (c < 2)
        {
            printf("Baixo!\n");
            c++;
        }
        
        printf("Esquerda!\n");
    }
    
    
    return 0;
}