/*
 * home_work_4.c
 *
 *  Created on: 23.10.2016
 *      Author: Кристина Рыжикова
 */
#include <stdio.h>
int mult3(int a);
float div4(float b);
char sub10(char c);
int add100(int d);
float per20(float f);

int main(){
int a = mult3(3);
printf("a = %d \n", a);

float b = div4(5);
printf("b = %f \n", b);

char c = sub10(7);
printf("c = %d \n", c);

int d = add100(10);
printf("d = %d \n", d);

float f= per20(250);
printf("f = %f \n", f);

return 0;
}

int mult3(int a){
	return a*3;
}

float div4(float b){
	return b/4;
}

char sub10(char c){
	return c-10;
}

int add100(int d){
	return d+100;
}

float per20(float f) {
	return f*0.2;
}
