/*
 * home_work_9.1.c
 *
 *  Created on: 11.11.2016
 *      Author: Кристина Рыжикова
 */
#include<stdio.h>

int numberSum(int number);
int XpowerY(int x, int y);
int factorial(int number);
void print_stars(int stars, int inRow);

int main(){

	//	print_stars(16,4);
	//	print_stars(12,6);

	//	int res=factorial(10);
	//	printf("res = %d\n", res);

	//	int res = XpowerY(5,6);
	//	printf("res = %d\n",res);

	//	int res = numberSum(5);
	//	printf("res = %d\n",res);


	return 0;
}
int numberSum(int number){

	int sum = 0;
	for(; number > 0; number--){
		sum = sum + number;

	}
	return sum;
}
//////////////////////////////////////////////////////////////////////////////
int XpowerY(int x, int y){
	int res = 1;
	for(;y > 0;y--){
		res = res * x;

	}
	return res;
}
/////////////////////////////////////////////////////////////////////////////
int factorial(int number){
	int res=1;
	for(;number > 0; number--){
		res = res*number;

	}
	return res;
}
/////////////////////////////////////////////////////////////////////////////
void print_stars(int stars, int inRow){

	for(int counter = 0; stars > 0; counter++){

		if(counter == inRow){
			printf("\n");
			counter = 0;
		}
		printf("*");
		stars--;
	}

	printf("\n");
}
//////////////////////////////////////////////////////////////////////////////
