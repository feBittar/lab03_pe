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

        printf("Digite a data de nascimento do aluno (DD MM AAAA): ");
        scanf("%d %d %d", &novoAluno->nascimento.dia, &novoAluno->nascimento.mes, &novoAluno->nascimento.ano);

        cadastro->num_alunos++;
    }
    else
        printf("so sao aceitos 100 cadastros de alunos");
}
int searchWord(char str[], char word[])
{
    int i = 0, j = 0;
    for (i = 0; i < strlen(str); i++)
    {
        for (j = 0; j < strlen(word); j++)
        {
            if (str[i + j] != word[j])
                break;
        }
        if (word[j] == '\n')
            return 1;
    }
    return 0;
}
void buscarAlunoNome()
{
}

int main()
{
    Cadastro cadastro;
    cadastro.num_alunos = 0;
}