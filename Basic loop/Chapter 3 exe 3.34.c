#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0;i<=10;i+=1){
    printf("*\n");
        for(int j=1;j<=i;j+=1){printf("*",j);}
    }

    return 0;
}
