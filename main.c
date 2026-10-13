#include <stdio.h>
#include <string.h>
#include "c-crypt.h"

int main () {
    char keym[10];
    int key = 0;
    char text[51];
    printf("Olá, este é um programa de criptografia simples.\n");
    printf("Digite a chave de criptografia: ");
    fgets(keym, (sizeof(keym)), stdin);
    
    keym[strcspn(keym, "\n")] = '\0';
    
    for (int i = 0; i < 10; i++)
    {
        if (keym[i+1] == '\0') {
            key += keym[i];
            break;
        } else {
            key += keym[i];
        }
    }
    
    printf("Digite o texto para criptfografar: ");
    fgets(text, (sizeof(text)), stdin);
    text[strcspn(text, "\n")] = '\0';
    
    crypt(text, key, 51);
    printf("%s \n", text);
    unCrypt(text, key, 51);
    printf("%s \n", text);

    return 0;
}