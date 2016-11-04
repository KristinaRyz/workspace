/*
 * class_work_02.11.16.c
 *
 *  Created on: 02/11/2016
 *      Author: Gran1
 */
#include<stdio.h>

int main(){
	int a=3,b;
	a+=2;
	printf("a = %d\n",a);

	a=4;
	b=++a;
	//a++; ne vajno
	//b=++a ->5;   prefixnaya forma
   //b=a++ ->4; postfixnaya forma, ewe a=4

	printf("a = %d\n",a);

	return 0;
}
