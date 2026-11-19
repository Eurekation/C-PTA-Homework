#include<stdio.h>
int main(void)
{
int M,N,count,prime,x,sum=0,num=0;
scanf("%d %d",&M,&N);
for(x=M;x<=N;x++)
{
    count=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    if(count==2)
        {
            prime=x;
            num++;
            sum=sum+x;
        }
}
    printf("%d %d",num,sum);
return 0;
}
