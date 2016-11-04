/*
 * home_work_7.2.c
 *
 *  Created on: 04.11.2016
 *      Author: Кристина Рыжикова
 */
#include <stdio.h>
float salary(float hours,float wage,float base,float factor,float grate, int type,float bns);

int main(){
	float res = salary(176,28,5000,2,3,3,10);
	printf("salary = %.2f \n",res);
	return 0;
}


float salary(float hours,float wage,float base,float factor,float grate,int type,float bns){
	float res = 0;

	switch(type){
	case 1: res = hours * wage;break;
	case 2: res = base * factor;break;
	case 3: res = base * grate;break;
	default:printf("Error:wrong type \n");
	}
	printf("End off switch \n");

	float bonus = (res*bns)/100;
		return res+bonus;

}
