#include<stdio.h>

void digits(int n)
{
    int x;
    int arr[3];
    for(int i=0;n>0;i++)
    {
        x=n%10;
        n=n/10;
        arr[i]=x;
    }
    for(int i=2;i>=0;i--)
    {
        printf("%i\n",arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%i",&n);
    digits(n);
return 0;
}
