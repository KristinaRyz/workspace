/*
 * home_work_5_functions.c
 *
 *  Created on: 27.10.2016
 *      Author: Кристина Рыжикова
 */
#include <stdio.h>
float add(float a, float b);
char sub(char a, char b);
float bonus(float salary, float bonus);

int main(){

	float res1 = add(26,4);
	printf("res1 = %.2f \n",res1);

	char res2 = sub(50,10);
	printf("cres2 = %d \n",res2);

	    res1 = bonus(10000,30);
		printf("res1 = %.2f \n",res1);
	return 0;
}

float add(float a, float b){
	return a+b;
}

char sub(char a, char b){
	return a-b;
}

float bonus(float salary, float bonus){
	return (salary*30)/100;
}
