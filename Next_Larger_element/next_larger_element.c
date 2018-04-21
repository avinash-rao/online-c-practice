#include<stdio.h>
#include<conio.h>

int next_larger(int[],int,int);

void main()
{
    int testcases;
    printf("Enter No. of testcases: ");
    scanf("%d",&testcases);
    
    while(testcases--)
    {
        int n;
        printf("Enter size of array: ");
        scanf("%d",&n);
        
        int a[n],i;
        printf("Enter array elements\n");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            printf("%d ",next_larger(a,i,n));
        printf("\n");
    }
}

int next_larger(int a[],int i,int n)
{
    int j;
    for(j=i+1;j<n;j++)
    {
        if(a[j]>a[i])
            return a[j];
    }
    return -1;
}