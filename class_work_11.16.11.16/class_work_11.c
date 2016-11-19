/*
 * class_work_11.c
 *
 *  Created on: 16/11/2016
 *      Author: Gran1
 */
#include <stdio.h>
int reverseNumber(int number);
int numberDigitsSum(int number);
int hasDigit(int number, int digit);
void printNumberReverse(int number);
int main(){
//		int res = hasDigit(23456,5);
//		if(res==0)
//			printf("Not found\n");
//		else
//			printf("Found\n");

	printNumberReverse(1234567);

//	res = numberDigitsSum(34567);
//	printf("\n res = %d", res);
//
//	 res =  reverseNumber(123456789);
//	printf("\n res = %d",res);
	return 0;
}


int hasDigit(int number, int digit){
	int rem; //remenda - ostatok
	do {
		rem=number%10; //1.
		if(rem==digit) //2.
			return 1;
		number = number/10; //3.
	}
	while(number>0);
	return 0;
}

///////////////////////////////////////////////////
void printNumberReverse(int number){
	int rem;
	do {
		rem=number%10; //1.
		printf("%d", rem);//2.
		number = number/10;//3.
	}
	while(number>0);
}
//////////////////////////////////////////////////
int numberDigitsSum(int number){
	int sum = 0, rem;
	do {
		rem = number%10; //1.
		sum = sum + rem;//2.
		number = number/10;//3.
	}
	while(number>0);
	return sum;
}
//////////////////////////////////////////////////
int reverseNumber(int number){
	int rem, rev = 0;
	do {
		rem = number%10; //1.
		rev = (rev*10) + rem;//2.
		number = number/10;//3.

	}		while(number != 0);
	return rev;
}



