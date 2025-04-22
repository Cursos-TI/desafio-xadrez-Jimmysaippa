#include <stdio.h>
#include <time.h>
#include <stdlib.h>
   int main()  {

    int opcao, i, casa; // variaveis
    int movimentocompleto;
    char letra;


    printf("\n *** Jogo de Xadrez para Iniciante *** \n");
    printf("Neste jogo você ira movimentar as peças a Torre, o Bispo e a Rainha! \n");
    printf("Cada peça pode se movimentar um determinado numero de casas!\n");
    printf("Vamos jogar?\n");

    do
    {    
    
    printf("\n");  // opção de entrada
    printf("Menu:\n");
    printf("1. Mova a Torre\n");
    printf("2. Mova o Bispo\n");
    printf("3. Mova a Rainha\n");
    printf("4. Mova com o Cavalo\n");
    printf("5. Sair\n");
    printf("\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao)
    {
    case 1:
         printf("Você escolheu a Torre!...\n");
         printf("Digite a quantas casas deseja andar com a Torre \n");
         scanf("%d", &casa);

        int i = 0;
        while (i <= casa )  /* condição repedição while/*/
        {
            printf("Direita\n ");
            i++;
        }
        break;

    case 2:
        printf("Você escolheu o Bispo. \n");
        printf("Digite quantas casas quer andar como o Bispo \n"); // usuario escolher a quantidade de casas dejesa andar
        scanf("%d", &casa);
        int b = 0;
        do  // condição repetição do while
        {
            printf("Diagonal cima Direita \n");
            b++; // incremento variavel
        } while (b < casa );
        
        break;

    case 3:
        printf("Você escolheu a rainha\n");
        printf("Digite a quantidade de casas dejesa andar:");
        scanf("%d", &casa);

        for ( i = 0; i < casa; i++)  // icremento variavel e confição repetição for
        {
            printf("Esquerda\n");
        
        }
        
        break;

        
    case 4:
        printf("Você escolher o Cavalo \n");
        printf("Digite a quantidade de casa deseja andar:");
        scanf("%d", &casa);
             
            for (movimentocompleto = 1; movimentocompleto <= 1; movimentocompleto++)
            {
                for ( i = 0; i < casa; i++)
                {
                    printf("Cima \n");
                        
                }
                printf("Direita\n");          
            }

           
        break;

    case 5:
        printf("Saindo do Jogo ....\n");
        break;
    
    default:
        printf("Opção invalida!! \n");
        break;
    }

} while ( opcao != 5); // condição de repedicao do while

return 0;

}
