#include<stdio.h>
int main( void)
{
    int a,b;
    double c;
    scanf("%d %d",&a,&b);
    if(b==0)
    {
        printf("%d/%d=Error\n",a,b);
    }
    else if(b<0)
    {
        c=(double)a/(double)b;
        printf("%d/(%d)=%.2f\n",a,b,c);
    }
    else
    {
        c=(double)a/(double)b;
        printf("%d/%d=%.2f\n",a,b,c);
    }
    return 0;
}