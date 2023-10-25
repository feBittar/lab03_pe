// FELIPE BITTAR MARTINIANO
// 11202130044

#include <stdio.h>
#include <string.h>

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

int main()
{
    char str[1000];
    char word[100];
    printf("Digite uma frase: ");
    fgets(str, 1000, stdin);
    printf("Digite uma palavra: ");
    fgets(word, 100, stdin);

    if (searchWord(str, word))
        printf("sim");
    else
        printf("nao");
    return 0;
}