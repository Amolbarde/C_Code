#include<stdio.h>
int main()
{
    int n, original,rev=0,reminder;
    printf("Enter an integer:");
    scanf("%d",&n);
    original= n;
    while (n!=0)
    {
        reminder  = n%10;
        rev = rev*10+reminder;
        n/=10;
    }

    if(original == rev)
    {
        printf("%d is palindrome",original);
    }
    else
    {
        printf("%d is  Not palindrome",original);
    }
    
}