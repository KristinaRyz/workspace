/*
 * HW_4.c
 *
 *  Created on: 23.10.2016
 *      Author: Кристина Рыжикова
 */

#include <stdio.h>
int twoValues(int a, int b);


int main(){
	int x = twoValues(10,5);
	printf("x = %d \n", x);
return 0;
}

int twoValues(int a, int b){
	if(b==0){
	return 0;
	}
	return a/b;
}
