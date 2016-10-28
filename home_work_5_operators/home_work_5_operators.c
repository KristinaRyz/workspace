/*
 * home_work_5_operators.c
 *
 *  Created on: 27.10.2016
 *      Author: Кристина Рыжикова
 */
#include <stdio.h>
void isPositive(int a);
float salary(float hours, float wage, float bonus, float tax);

int main(){

	isPositive(-588);

	float res = salary(180,28,30,200);
	printf("res = %.2f \n",res);

	return 0;
}

void isPositive(int a){
	(a>=0)?printf("positive \n"):printf("negative \n");
}

float salary(float hours, float wage, float bonus, float tax){
	return ((hours*wage)+((bonus*30)/100))-tax;
}
