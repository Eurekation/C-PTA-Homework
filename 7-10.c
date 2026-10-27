#include<stdio.h>
int main()
{int a,b,c,d;
 scanf("%d %d",&a,&b);

//a/100 hour c
 //a%100 min d
 //b min 
 //c*60+d+b= total min
 //total min/60,hour,total min%?=min?


 
 printf("%d%02d",(a/100*60+b+a%100)/60,(a/100*60+b+a%100)%60);
 
    return 0;
}