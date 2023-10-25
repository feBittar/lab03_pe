// FELIPE BITTAR MARTINIANO
// 11202130044

#include <stdio.h>
#include <string.h>

void reformarP(char str[])
{
    int i = 0, tam = strlen(str);

    while (i < tam)
    {
        if (str[i] == ' ' && i % 80 == 0) // se for espaço, i é multiplo de 80, coloca um \n no lugar do espaço  
            str[i] = '\n';
        else if (str[i] != ' ' && i % 80 == 0) // se não for espaço, mas é multiplo de 80, volta na linha ate achar um espaço e coloca um \n
        {
            int j = i;
            while (j > 0 && str[j] != ' ')
                j--;
            if (str[j] == ' ')
                str[j] = '\n';
        }
        i += 1;
    }
}

int main()
{
    char str[1000];

    printf("Digite uma frase: \n");
    fgets(str, 1000, stdin);

    reformarP(str);
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }
    printf("%c %s", '\n', str);

    return 0;
}
