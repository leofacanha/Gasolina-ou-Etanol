#include <stdio.h>
#include <stdlib.h>

int Calculo(float vGas, float vEta);

int main()
{
    printf("### GASOLINA OU ETANOL, QUAL COMPENSA ABASTECER? ### \n");

    float precoGasolina, precoEtanol;

    printf("Qual o prece atual da Gasolina? \n");
    scanf("%f", &precoGasolina);

    printf("Qual o prece atual do Etanol? \n");
    scanf("%f", &precoEtanol);

    int resultado = Calculo(precoGasolina, precoEtanol);

    if (resultado == 0)
    {
        printf("Compensa abastecer com Gasolina. \n");
    }
    else if (resultado == 1)
    {
        printf("Compensa abastecer com Etanol. \n");
    }

    else (resultado == 2);
    {
        printf("O preco de ambos os combutiveis estao equivalentes");
    }

    system("pause");

    return 0;
}

int Calculo(float vGas, float vEta)
{
    //Preço Gasolina * 0.7 = Preço Maximo do Alcool

    if((vGas * 0.70) < vEta )
    {
        //printf("Compensa abastecer com Gasolina. \n");
        return 0;
    }
    else if ((vGas *0.70) > vEta)
    {
        //printf("Compensa abastecer com Etanol. \n");
        return 1;
    }

    else if ((vGas * 0.70) == vEta)
    {
        //printf("Os valores estao equivalentes");
        return 2;
    }

    else
    {
        return 3;
    }

}
