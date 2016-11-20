/*
 * home_work_11.1.c
 *
 *  Created on: 18.11.2016
 *      Author: Кристина Рыжикова
 */
#include <stdio.h>

void printEvenReverse(int number);
int printOddSum (int number);
int hasDigits(int number, int digit);
void printNumberInColumn(int number);
int reverseNumber(int number);
void printNumberInColumn_1(int number);
int intLength(int number);
int pow(int x,int y);
int main(){
	//	printEvenReverse(2456);

	//	int oddSum = printOddSum(12345);
	//	printf("\noddSum = %d \n", oddSum);

	//	int hasDigit = hasDigits(1245,3);
	//	printf("hasDigit = %d", hasDigit);

	//printNumberInColumn(1256);
	printNumberInColumn_1(12);

	return 0;
}

void printEvenReverse(int number){
	int rem;
	do {
		rem = number%10;
		if (rem % 2 == 0)
			printf("%d",rem);
		number = number/10;
	}
	while(number != 0);
}

int printOddSum (int number){
	int sum = 0, rem;
	do {
		rem = number % 10;
		if (rem % 2 != 0)
			sum = sum + rem;
		number = number / 10;
	}
	while (number != 0);
	return sum;
}

int hasDigits(int number, int digit){
	int count = 0, rem;
	do {
		rem = number %  10;
		if(rem == digit)
			count++;
		number = number / 10;
	}
	while (number != 0);
	return count;
}

void printNumberInColumn(int number){
	number = reverseNumber(number);
	do{
		printf("%d \n", number%10);
		number = number / 10;
	}
	while(number != 0);
}
int reverseNumber(int number){
	int rem, rev = 0;
	do {
		rem = number%10; //1.
		rev = (rev*10) + rem;//2.
		number = number/10;//3.

	}		while(number != 0);
	return rev;
}

void printNumberInColumn_1(int number){
	int numberLength=intLength(number);
	int devider=pow(1,numberLength-1);
	do{
		printf("%d \n", number/devider%10);
		numberLength--;
		devider/=10;
	}
	while(numberLength>0);

}
int pow(int x,int y){
	while(y>0){
		x = x*10;
		y--;
	}
	return x;
}
int intLength(int number){
	int counter =0;
	do {
		number = number / 10;
		counter++;
	}
	while (number != 0);
	return counter;
}

