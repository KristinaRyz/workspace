/*
 * class_work_9.1(09.11.16).c
 *
 *  Created on: 09/11/2016
 *      Author: Gran1
 */
#include<stdio.h>

int main(){
	int a = 5;

	do{
		printf("a=%d\n", a);
		a--;
	}	while(a > 0);

	return 0;
}

///////////////////////////////////////////////

int numberSum(int number){
	int sum = 0;
	do{
		sum = sum + number;
				number--;
	}while(number > 0);
	return sum;
}
////////////////////////////////////////////////////

int factorial(int number){
	int res = 1;
	do{
		res = res*number;
		number--;
	}while(number > 0);
	return res;
}
