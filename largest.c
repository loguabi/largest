#include<stdio.h>
#include<conio.h>
void main()
{
double a,b,c;
printf("Enter three number:");
scanf("lf %lf %lf",&a,&b,&c);
if(a>=b && a>=c)
printf("%.2f is the largest number",a);
if(b>=a && b>=c)
printf("%.2f is the largest number",b);
if(c>=a && c>=b)
printf("%.2f is the largest number",c);
getch();
}
