#include<stdio.h>

int no_of_divisors(long);
void insertion_sort(int[],int);
int isprime(int);
void insert_prime(long);

int prime[200];
int top=0;

void main()
{
    int tc;
    printf("Enter no. of testcases: ");
    scanf("%d",&tc);
    while(tc--)
    {
        int a[15],i,j=0,counter,divisors;
        long n;
        /*n is for storing input
          a[] is for array of exponents
          j is maintaining index of a from 0 to ... 
          counter is a temporary variable for storing exponent
        */
          
        printf("\nEnter the positive integer: ");
        scanf("%ld",&n);
        divisors=no_of_divisors(n);
        
        insert_prime(n);            //inserts all the prime numbers upto n in prime[]
        
        for(i=0;i<top;i++)          //to check for divisor from the prime array
        {
            if(n%prime[i]==0)       //if n is divisible by prime[i] number then
            {
                counter=0;
                while(n%prime[i]==0)
                {
                    n=n/prime[i];
                    counter++;
                }
                a[j]=counter;
                j++;
            }
        }
//        if(n!=1)            //if n is divisible by some other number in prime array
//        {
//            a[j]=1;         //when n is divisible by itself, its exponent is one
//            j++;
//        }
        insertion_sort(a,j);
        for(i=0;i<j;i++)
            printf("%d ",a[i]);
        printf("\nNo. of divisors=%d\n",divisors);
    }
}

void insertion_sort(int a[],int n)
{
    int pass,k,j;
    for(pass=1;pass<n;pass++)
    {
        k=a[pass];
        for(j=pass-1;j>=0&&k<a[j];j--)
            a[j+1]=a[j];
        a[j+1]=k;
    }
}

int no_of_divisors(long n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    return c;
}

void insert_prime(long n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        if(isprime(i));
            prime[top++]=i;
    }
}

int isprime(int p)
{
    int i;
    for(i=2;i<p;i++)
    {
        if(p%i==0)
            return 0;
    }
    return 1;
}