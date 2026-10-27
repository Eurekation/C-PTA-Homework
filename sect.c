#include<stdio.h>
int main()
{
    int x,year,month;
    scanf("%d",&x);
    //情况一：6位数
    if(x>100000)
    {
        year=x/100;
        month=x%100;
        printf("%d-%02d\n",year,month);
    }
        //情况二：4位数，且为2000以前出生；分离前二位与后二位，并补齐年份前两位19
    else if((x<100000)&&(x>2200))
    {
        year=x/100;
        month=x%100;
        printf("19%d-%02d\n",year,month);
    }
        //情况三：4位数，且为2010以后出生；分离前二位与后二位，并补齐年份前两位20,
    else if(x>1000&&x<=2200)
    {
        year=x/100;
        month=x%100;
        printf("20%d-%02d\n",year,month);
        
    }
    //2000～2010,0510:2005-10
    else if(x<1000)
        {
        year=x/100;
        month=x%100;
        printf("200%d-%02d\n",year,month);
        }
    return 0;
}