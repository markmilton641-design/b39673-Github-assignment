#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,k;
    printf("Enter your X value:");
    scanf("%d",&x);
    printf("Enter your Y value:");
    scanf("%d",&y);
    printf("Enter your Z value:");
    scanf("%d",&z);
    k=x*y*z;
    printf("The product is %d",k);
    return 0;
}
