//take the radius and cal area of circle


#include<stdio.h>

int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the radius of Circle\n");
    scanf("%d",&fRadius);

    fArea = 3.14f * fRadius * fRadius;
    
    printf("Area of the Circle is : %f\n", fArea);

    return 0;
}