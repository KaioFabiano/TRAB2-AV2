#include <stdio.h>

/* 
    - Trabalho 2 de Programacao de Computadores I - Retangulo
    - Curso de Sistemas de Informacao
    
    - Aluno: Kaio Fabiano  -  Matricula: 0050012859
    
    - Professor: Alex Salgado
*/


int main()
{
    
    int simbolo, altura, largura, i, j;
    char nome[20], continuar;
    
    do
    {
        printf("Informe o seu nome: ");
        scanf("%s", nome);
    
    
        printf("\nSimbolo do pixel (1 para %c, 2 para %c, 3 para %c): ", 42, 64, 43);
        scanf("%d", &simbolo);
        
        while(simbolo<1 || simbolo>3)
        {
            printf("\nDesculpe...Escolha um simbolo valido (1 para %c, 2 para %c, 3 para %c): ", 42, 64, 43);
            scanf("%d", &simbolo);
        }
    
    
        printf("\nTamanho da LARGURA (lembrando, deve ser maior que 2): ");
        scanf("%d",&largura);
        
        while(largura<3)
        {
            printf("\nDesculpe...Para desenhar o retangulo a LARGURA deve ser maior que 2. Tente novamente: ");
            scanf("%d",&largura);
        }
        
        
        printf("\nTamanho da ALTURA do seu Retangulo (lembrando, deve ser maior que 2: ");
        scanf("%d",&altura);
        
        while(altura<3)
        {
            printf("\nDesculpe...Para desenhar o retangulo a LARGURA deve ser maior que 2. Tente novamente:\n");
            scanf("%d",&altura);
        }


        printf("\n\nOla, meu nome eh %s e o retangulo ficou assim:\n\n", nome);
        for (i=1; i<=altura; i++)
        {
            for(j=1; j<=largura; j++)
            {
                if (i>1 && j>1 && j<largura && i<altura)
                {
                    printf(" ");
                }
                
                else
                {
                    if (simbolo == 1)
                    {    
                        printf("%c",42);
                    }
                        
                    if (simbolo == 2)
                    {    
                        printf("%c",64);
                    }
                        
                    if (simbolo == 3)
                    {    
                        printf("%c",43);
                    }
                }
            }
        printf("\n");
        }
        
        printf("\nDeseja continuar (s/n)? ");
        scanf(" %c", &continuar);
    }
    while(continuar != 'n');
    return 0;
}