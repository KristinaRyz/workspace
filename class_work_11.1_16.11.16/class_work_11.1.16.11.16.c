/*
 * class_work_11.1.16.11.16.c
 *
 *  Created on: 16/11/2016
 *      Author: Gran1
 */
#include <stdio.h>

int main(){

	return 0;
}

//            345678         56
int  hasSubnumber(int number, int subNumber){
	int dCount = digitsCount(subNumber);
}
//                  345
int digitsCount(int number){
	int count = 0;

	do {
		number = number/10; //1.
		count++;
	}
	while(number!=0);
	return count;
}
int power10(int y){
	int res = 1;
	while(y > 0){
		res = res * 10;
		y--;
	}
	return res;
}

