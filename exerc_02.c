// FELIPE BITTAR MARTINIANO
// 11202130044

#include <stdio.h>
#include <string.h>

int contaSequencia(char bin[])
{
    int contador = 0, aux = 0;
    for (int i = 0; i < strlen(bin); i++)
    {
        if (bin[i] == '0')
        {
            aux += 1;
            // printf("zero ");
        }
        else
        {
            if (aux > contador)
                contador = aux;
            aux = 0;
            // printf("nao ");
        }
    }
    return contador;
}

int main()
{
    char bin[1000];
    printf("Digite um numero binario: ");
    fgets(bin, 1000, stdin);


    int res = contaSequencia(bin);
    printf("%d", res);
    return 0;
}