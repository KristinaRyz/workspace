/*
 * class_30.10.16.c
 *
 *  Created on: 30/10/2016
 *      Author: Gran1
 */
#include <stdio.h>
int addOrSub(int a, int b);
int main(){

int	res = addOrSub(5,8);
	printf("res = %d \n",res);

	return 0;
}

int addOrSub(int a, int b){
	return (a>b)?a+b:a-b;
}
