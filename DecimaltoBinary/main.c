#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n,dec,bin[100],i;

    printf("Enter a decimal number: ");
    scanf("%d",&dec);

    n=dec;
    for(i=0;n>0;i++)
    {
        bin[i]=n%2;
        n=n/2;
    }
    for(i=i-1;i>=0;i--)
        printf("%d",bin[i]);
        
    getch();
    return 1;
}
