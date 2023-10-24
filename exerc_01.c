// FELIPE BITTAR MARTINIANO
// 11202130044

#include <stdio.h>
#include <string.h>

void separaFrase(char frase[], char novaFrase[], char c)
{

    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == c)
        {
            novaFrase[i] = '\0';
            break;
        }
        novaFrase[i] = frase[i];
    }
}

int main()
{
    char frase[1000], c, novaFrase[1000];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin); 
    printf("%s", "Digite um caractere: ");
    scanf(" %c", &c);

    separaFrase(frase, novaFrase, c);
    printf("%s", novaFrase);

    return 0;
}