#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float s,area_oftriangle;
    printf("entr a and b and c:");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    printf("the s is %f",s);
    area_oftriangle=sqrt((s*(s-a)*(s-b)*(s-c)));
    printf("/narea of triangle is%f/n",area_oftriangle);
}
