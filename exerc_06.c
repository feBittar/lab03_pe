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
    for (int i = 0; i < v[0]; i++)
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
int conjunto_pertence(int a, Conjunto *A)
{
    int i = 0;
    for (i; i < A->tamanho; i++)
    {
        if (a == A->elementos[i])
            return 1;
    }
    if (i == A->tamanho)
        return 0;
}

void lerVetor(int v[])
{
    int i = 1;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &v[0]);

    while (i <= v[0])
    {
        printf("%s %d %s", "Digite o", i, "valor do vetor: ");
        scanf("%d", &v[i]);
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

        printf("%d%s", uniao->elementos[i], ";");
        i++;
    }
    printf("}");
    return 0;
}