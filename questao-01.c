#include <stdio.h>
void  main()
/*Faça um programa que leia a altura de 10 pessoas e calcule e mostre quantas destas
pessoas possui altura maior que 1.80m.*/
{
    int i, pessoas;
    float altura;

    pessoas = 0;
    for (i=1; i<=10; i++){
        printf("Infoeme a altura: ");
        scanf("%f", &altura);

        if (altura> 1.80)
           pessoas++;    
    }
    printf("\nA quantidade de pessoas com mais de 1.80 de altura e: %d", pessoas);
}