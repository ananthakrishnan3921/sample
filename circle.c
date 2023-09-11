//write a program to find the area and perimeter of a circle
#include<stdio.h>
int main()
{
float area,perimeter,r;
printf("Enter the radius of the circle:");
scanf("%f",&r);
area=3.14*r*r;
perimeter=2*3.14*r;
printf("the area and perimeter of the circle is %f and %f",area,perimeter);
return 0;
}
