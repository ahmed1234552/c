#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("please enter the money in USD \n");
    float x; float z;
    scanf("%f",&x);
    printf("please enter one dollar in EGP \n");
    scanf("%f",&z);
float c;
c=x*z;
    printf("money in EGP = %.2f",c);
    return 0;
}
