#include<stdio.h>
int main()
{
    int input,units,tens,hundreds;
    scanf("%d",&input);
    units=input%10;
    tens=input/10%10;
    hundreds=input/100;
    printf("%d\n",units*100+tens*10+hundreds);
    return 0;
}