#include <stdio.h>
#include <stdlib.h>
#define SIZE 256

int main()
{

    FILE*arquivo;
    int s[SIZE];
    int contA = 0;
    int contB = 0;  
    int c,j;

    for( j = 0 ; j < SIZE ; j++ ) {
        s[j] = 0;
    }
    arquivo = fopen("fatorial.c","r");
    c = getc(arquivo);
    while (!feof(arquivo) ) {


        // TODO: ler de arquivo!
        contA['A']++;
       	contB['B']++;

        //

        }

        printf("%8s%13s\n", "Elemento", "Valor");

        for( j = 0 ; j < SIZE ; j++ ) {
            if (s[j] != 0)
                printf("%8d%4c%5x%13d\n", contA,contB, s[j]);



        }
        fclose(arquivo);
    }
    printf("total A:%d total B:%d",contA,contB);

    return 0;
}
