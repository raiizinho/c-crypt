#include "c-crypt.h"

void crypt(char *text, int key, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (*(text + 1) == '\0')
        {
            *(text + i) += key;
            break;
        }
        else
        {
            *(text + i) += key;
        }
    }
}
void unCrypt(char *text, int key, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (*(text + 1) == '\0')
        {
            *(text + i) -= key;
            break;
        }
        else
        {
            *(text + i) -= key;
        }
    }
}