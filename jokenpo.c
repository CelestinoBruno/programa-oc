#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int jogador, computador;
    srand(time(0));

    printf("[JOGO DO JOKENPÔ]\n");
    printf("\nEscolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tedra\n");
    printf("\nEscolha: ");
    scanf("%d", &jogador);
    computador = rand() % 3 + 1;

    switch (jogador)
    {
    case 1:
      printf("Jogador: Pedra - ");
    break;

    case 2:
      printf("Jogador: Papel - ");
    break;

    case 3:
    printf("Jogador: Tesoura - ");
    break;

    
    default:
    printf("Oção inválida\n");
    break;
    }


    switch (computador)
    {
    case 1:
      printf("Computador: Pedra\n");
    break;

    case 2:
      printf("Computador: Papel\n");
    break;

    case 3:
    printf("Computador: Tesoura\n");
    break;
    }

    if(computador == jogador){
        printf("***Empate***\n");
    }
    else if ((jogador == 1) && (computador == 3 ) || 
             (jogador == 2) && (computador == 1 ) ||
             (jogador == 3) && (computador == 2 ) )
    {
        printf("***Você ganhou***\n");
    }
       else{
        printf("***Você perdeu !!!***");
       }
    


    return 0;
}
