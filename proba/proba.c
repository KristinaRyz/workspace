/*
 * proba.c
 *
 *  Created on: 17.11.2016
 *      Author: Кристина Рыжикова
 */
#include <stdio.h>

void printStars_6();

int main(){
    printStars_6();
    printf("\n");

    return 0;
}
void printStars_6(){
    int i,j;
    for(j=0;j<7;j++){//draw rows 1

        for(i = 0;i < 7;i++){//inner loop

            if(j<i)//i == 0 || j == 0 ||i ==6 || j == 6||i==j||i+j==6||(j<i && i+j >6)||(j>i && j+i<6))
            printf("* ");
            else
                printf("  ");
            }


            printf("\n");
        }
}
