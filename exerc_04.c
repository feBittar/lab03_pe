// FELIPE BITTAR MARTINIANO
// 11202130044

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[1000];
    char palavra[100];
    printf("Digite uma frase: ");
    fgets(frase, 1000, stdin);
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);

    
    printf("%s", palavra);
    printf("%s", frase);





    return 0;
}