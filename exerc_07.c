// FELIPE BITTAR MARTINIANO
// 11202130044

#include <stdio.h>
#include <string.h>

typedef struct
{
    int elementos[1000][1000];
    int *size;
} Matriz;

Matriz *matriz_le(int n)
{
    Matriz *matriz = malloc(sizeof(Matriz));
    matriz->size = n;

    for (int f = 0; f < n; f++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("Digite a casa %d%s%d: ", f, " | ", i);
            scanf("%d", &matriz->elementos[f][i]);
        }
    }

    return matriz;
}

Matriz *matriz_multiplica(Matriz *A, Matriz *B)
{
    Matriz *C = malloc(sizeof(Matriz));
    C->size = A->size;

    for (int i = 0; i < A->size; i++)
    {
        for (int j = 0; j < A->size; j++)
        {
            C->elementos[i][j] = 0;
            for (int k = 0; k < A->size; k++)
            {
                C->elementos[i][j] += (A->elementos[i][k]) * (B->elementos[k][j]);
            }
        }
    }

    return C;
}

void matriz_imprime(Matriz *matriz)
{
    for (int f = 0; f < matriz->size; f++)
    {
        for (int i = 0; i < matriz->size; i++)
        {
            printf("%d%s", matriz->elementos[f][i], " ");
        }
        printf("\n");
    }
}

// TESTE

// int main()
// {

//     int n;
//     printf("Digite o n para a matriz quadratica: ");
//     scanf("%d", &n);
//     Matriz *A = matriz_le(n);
//     Matriz *B = matriz_le(n);

//     Matriz *C = matriz_multiplica(A, B);

//     printf("Matriz multiplicacao:\n");
//     matriz_imprime(C);
//     free(A);
//     free(B);
//     free(C);

//     return 0;
// }