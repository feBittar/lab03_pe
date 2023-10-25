// FELIPE BITTAR MARTINIANO
// 11202130044

#include <stdio.h>
#include <string.h>

typedef struct
{
    int *elementos[1000];
    int tamanho;
} Conjunto;

Conjunto *conjunto(int v[])
{
    Conjunto *conjunto = malloc(sizeof(Conjunto));
    for (int i = 0; v[i] != -333; i++)
    {
        conjunto->tamanho += 1;
        conjunto->elementos[i] = v[i];
    }
    return conjunto;
}
// a 12
// b 123

Conjunto *conjunto_uniao(Conjunto *A, Conjunto *B)
{
    int i = 0;
    Conjunto *novoConj = malloc(sizeof(Conjunto));

    for (i; i < A->tamanho; i++)
        novoConj->elementos[i] = A->elementos[i];

    novoConj->tamanho = i;

    for (int j = 0; j < B->tamanho; j++)
    {
        int k;
        for (k = 0; k < novoConj->tamanho; k++)
        {
            if (B->elementos[j] == novoConj->elementos[k])
            {
                break;
            }
        }
        if (k == novoConj->tamanho)
        {
            novoConj->elementos[novoConj->tamanho++] = B->elementos[j];
        }
    }

    return novoConj;
}

void lerVetor(int v[])
{
    int k = 0, i = 0;
    printf("Digite os valores do vetor. Quando desejar finalizar o vetor, digite -333\n");
    while (k != -333)
    {
        printf("%s %d %s", "Digite o", i + 1, "valor do vetor: ");
        scanf("%d", &v[i]);

        if (v[i] == -333)
            k = -333;
        i++;
    }
}

int main()
{
    int vetA[1000], vetB[1000], i = 0;
    lerVetor(vetA);
    lerVetor(vetB);

    Conjunto *A = conjunto(vetA);
    Conjunto *B = conjunto(vetB);

    Conjunto *uniao = conjunto_uniao(A, B);
    printf("Uniao: {");
    while (i < uniao->tamanho)
    {
        
        printf("%d%s",uniao->elementos[i], ";");
        i++;
    }
    printf("}");
    return 0;
}