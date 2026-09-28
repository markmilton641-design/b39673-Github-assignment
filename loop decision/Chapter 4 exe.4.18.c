#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=0;
    for(int i=1;i<=5;i+=1){
            printf("\nEnter your number:");
            scanf("%d",&number);
                if(number<=30){printf("Acceptable range\n");
                }

                    else{ printf("Unacceptable range\n");
                        break;
                }

                for(int j=1;j<=number;j+=1){
                        printf("*");

        }

        }




    return 0;
}
