#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days;
    printf("\n==========12 DAYS OF CHRISTMAS==========\n");
    printf("1.First\n2.Second\n3.Third\n4.Fourth\n5.Fifth\n6.Sixth\n7.Seventh\n8.Eighth\n9.Ninth\n10.Tenth\n11.Eleventh\n12.Twelventh\n");
    printf("Enter the day:");
    scanf("%d",&days);
   switch(days){
    case 12:
        printf("12th day\n");
    case 11:
        printf("11th day\n");
    case 10:
        printf("10th day\n");
    case 9:
        printf("9th day\n");
    case 8:
        printf("8th day\n");
    case 7:
        printf("7th day\n");
    case 6:
        printf("6th day\n");
    case 5:
        printf("5th day\n");
    case 4:
        printf("4th day\n");
    case 3:
        printf("3rd day\n");
    case 2:
        printf("2nd day\n");
    case 1:
        printf("1st day\n");
        break;
   }




    return 0;
}
