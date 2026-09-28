#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int c=30;c<=50;c+=1){
        printf("Enter temperature(Celsius):");
        scanf("%d",&c);
        float F=(9/5)*c+32;
        printf("Your temperature of %d in Celsius in Fahrenheit is %.3f\n",c,F);
    }
    return 0;
}
