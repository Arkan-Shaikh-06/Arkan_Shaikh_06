#include <stdio.h>
int main()
{
float length, bredth, area;
printf("Enter the length of the rectangle");
scanf("%f", &length);
printf("Enter the bredth of the rectangle");
scanf("%f", &bredth);
area= length * bredth;
printf("Area of the rectangle = %.2f/n",area);
return 0;
}
