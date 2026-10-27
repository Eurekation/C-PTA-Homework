#include<stdio.h>
int main()
{
    int hour,minute;
    scanf("%d:%d",&hour,&minute);
    if (hour<12)
    {
        printf("%d:%d AM",hour,minute);
    }
    else if(hour==12)
    {
        printf("12:%d PM",minute);
    }
        else if(hour==0)
    {
        printf("0:0 AM");
    }
    else 
    {
        printf("%d:%d PM",hour-12,minute);
    }
    return 0;
}