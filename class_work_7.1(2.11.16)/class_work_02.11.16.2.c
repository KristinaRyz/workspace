/*
 * class_work_02.11.16.2.c
 *
 *  Created on: 02/11/2016
 *      Author: Gran1
 */
#include <stdio.h>
void getTaxi(int code);
float calculator(float a, float b, int action);




int main(){
	getTaxi(5);
float cal = calculator(5,2,3);
printf("cal = %f\n",cal);
	return 0;
}



float calculator(float a, float b, int action){
float res =0;

	switch(action){
	case 1:res = a+b;break;
	case 2:res = a-b;break;
	case 3:res = a*b;break;
	case 4:
		if(b!=0)
		res = a/b;
		else
			printf("Error:division by zero \n");
			break;
	default:printf("ERROR:wrong action \n");
	}
	return res;
	printf("End of switch\n");
}
void getTaxi(int code){
	switch (code){
	case 1:printf("Haim, GO! \n");break;
	case 2:printf("Alex, GO! \n");break;
	case 3:printf("David, GO! \n");break;
	case 4:printf("Rivka, GO! \n");break;
	case 5:printf("Iossi, GO! \n");break;
	default:printf("Error\n");
	}
	printf("End of switch\n");
}


