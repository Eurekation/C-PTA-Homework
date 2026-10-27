#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,perimeter,area;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        perimeter=a+b+c;
        area=sqrt(perimeter/2 * (perimeter/2 - a) * (perimeter/2 - b) * (perimeter/2 - c));
        printf("area = %.2f; perimeter = %.2f",area,perimeter);
    }
    else
    {
        printf("These sides do not correspond to a valid triangle");
    }
    return 0;
}