#include<stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a positive Integer: ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    //if count is 0, no number is divided
    if(n>1 && count==0)
    {
        printf("%d is Prime",n);
    }
    else{
        printf("%d is Not Prime",n);
    }
}