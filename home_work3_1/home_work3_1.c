/*
 * home_work3_1.c
 *
 *  Created on: 12.10.2016
 *      Author: Кристина Рыжикова
 */

#include <stdio.h>
#include <stdlib.h>
void f1();
void f2();
void f3();
void f4();
void f5();
void f6();

int main(){
	f6();
	f1();
	f2();
	return 0;
}
void f1(){
	printf("1\n");
	f4();
	return;
}
void f2(){
	printf("2\n");
	f6();
	return;
}
void f3(){
	printf("3\n");
	return;
}
void f4(){
	printf("4\n");
	f5();
	return;
}
void f5(){
	printf("5\n");
	f6();
	return;
}
void f6(){
	printf("6\n");
	return;
}
