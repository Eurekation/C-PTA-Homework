#include<stdio.h>
int main()
{
    int a,c;
    char b;
    scanf("%d %c %d",&a,&b,&c);
    if(b=='+')
    {
        printf("%d",a+c);
    }
    else if(b=='-')
    {
        printf("%d",a-c);
    }
    else if(b=='*')
    {
        printf("%d",a*c);
    }
    else if(b=='/')
    {
        if(c==0)
        {
            printf("ERROR");
        }
        else
        {
            printf("%d",a/c);
        }
    }
    else if(b=='%')
    {
        if(c==0)
        {
            printf("ERROR");
        }
        else
        {
            printf("%d",a%c);
        }
    }
    else
    {
        printf("ERROR");
    }
    return 0;
}