// FELIPE BITTAR MARTINIANO
// 11202130044

#include <stdio.h>
#include <string.h>

void invertCase(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        int ascii = (int)str[i];
        if (ascii >= 65 && ascii <= 90)
        {
            ascii += 32;
            str[i] = (char)ascii;
        }
        else if (ascii >= 97 && ascii <= 122)
        {
            ascii -= 32;
            str[i] = (char)ascii;
        }
    }
}

int main()
{
    char str[1000];

    printf("Digite uma frase ou palavra: ");
    fgets(str, 1000, stdin);

    invertCase(str);

    printf("%s", str);
    return 0;
}