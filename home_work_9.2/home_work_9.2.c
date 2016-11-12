/*
 * home_work_9.2.c
 *
 *  Created on: 11.11.2016
 *      Author: Кристина Рыжикова
 */
#include <stdio.h>
int digitsCount(int number);
int main(){

	int	number = digitsCount(0);
		printf("number = %d\n", number);
	return 0;
}
int digitsCount(int number){
	int counter = 0;
	do {number = number / 10;
	counter ++;
	}while (number!=0);
	return counter;

}



