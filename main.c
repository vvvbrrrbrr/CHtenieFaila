#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 256

int main()
{
    FILE* f = fopen("y.txt", "r");
    if(f==NULL) return 1;
    char *stroka;
    stroka = (char*) malloc(n*sizeof(char));
    stroka[0]='\0';
    int j=0;
    do
    {
        stroka[j] = fgetc(f);
        printf("%s|\n", stroka);
        j++;
        if (feof(f))
            break ;
    }
    while(1);
    stroka[j]='\0';
    printf("stroka iz faila:\n%s|", stroka);

    return 0;
}
