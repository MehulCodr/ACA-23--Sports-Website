include <stdio.h>

int fib(int n){
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else 
    return (fib(n-1) + fib(n-2));
}
int main()
{
    int a;
    printf("Enter to how many fib series u want\n");
    scanf("%d",&a);
    for (int i = 1; i < a; i++)
    {
        printf("%d \n",fib(i));
    }
    
    
    return 0;
}
