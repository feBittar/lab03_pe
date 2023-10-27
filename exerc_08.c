// FELIPE BITTAR MARTINIANO
// 11202130044

#include <stdio.h>
#include <string.h>
#
typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    int ra;
    char nome[30];
    Data nascimento;
} Aluno;

typedef struct
{
    Aluno alunos[100];
    int num_alunos;
} Cadastro;

void cadastrar(Cadastro *cadastro)
{
    if (cadastro->num_alunos <= 100)
    {
        Aluno *novoAluno = &cadastro->alunos[cadastro->num_alunos];

        printf("Digite o nome do aluno: ");
        fgets(novoAluno->nome, 30, stdin);

        printf("Digite o RA do aluno: ");
        scanf("%d", &novoAluno->ra);
        getchar();

        printf("Digite a data de nascimento do aluno (DD MM AAAA): ");
        scanf("%d %d %d", &novoAluno->nascimento.dia, &novoAluno->nascimento.mes, &novoAluno->nascimento.ano);
        getchar();

        cadastro->num_alunos++;
    }
    else
        printf("so sao aceitos 100 cadastros de alunos");
}

void buscarNome(Cadastro *cadastro, char *nome)
{
    int i, j, k;
    for (i = 0; i < cadastro->num_alunos; i++)
    {
        for (j = 0; cadastro->alunos[i].nome[j] != '\0'; j++)
        {
            if (cadastro->alunos[i].nome[j] == nome[0])
            {
                for (k = 1; nome[k] != '\0'; k++)
                {
                    if (cadastro->alunos[i].nome[j + k] != nome[k])
                        break;
                }
                if (nome[k] == '\0')
                {
                    printf("Nome: %s, RA: %d\n", cadastro->alunos[i].nome, cadastro->alunos[i].ra);
                    break;
                }
            }
        }
    }
}
void buscarNasc(Cadastro *cadastro, Data inicio, Data fim)
{
    for (int i = 0; i < cadastro->num_alunos; i++)
    {
        Data nasc = cadastro->alunos[i].nascimento;
        if ((nasc.ano > inicio.ano || (nasc.ano == inicio.ano && nasc.mes > inicio.mes) ||
             (nasc.ano == inicio.ano && nasc.mes == inicio.mes && nasc.dia >= inicio.dia)) &&
            (nasc.ano < fim.ano || (nasc.ano == fim.ano && nasc.mes < fim.mes) ||
             (nasc.ano == fim.ano && nasc.mes == fim.mes && nasc.dia <= fim.dia)))
        {

            printf("%s (RA: %d, Nascimento: %d/%d/%d)\n", cadastro->alunos[i].nome, cadastro->alunos[i].ra, nasc.dia, nasc.mes, nasc.ano);
        }
    }
}

int main()
{
    // TESTE

    // Cadastro cadastro;
    // cadastro.num_alunos = 0;
    // cadastrar(&cadastro);
    // cadastrar(&cadastro);
    // cadastrar(&cadastro);

    // char nome[30];
    // printf("Digite o nome do aluno para busca: ");
    // scanf("%s", nome);
    // buscarNome(&cadastro, nome);
    // Data inicio = {1, 1, 2000};
    // Data fim = {31, 12, 2005};

    // printf("Busca por Data de Nascimento:\n");
    // buscarNasc(&cadastro, inicio, fim);
}