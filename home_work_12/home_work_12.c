/*
 * home_work_12.c
 *
 *  Created on: 21.11.2016
 *      Author: Кристина Рыжикова
 */
#include<stdio.h>
void printArrayEvens(int ar[],int size);
void printArrayReverseOdds(int ar[],int size);
int arrayEvenIndexSum(int ar[],int size);
void arrayPrint (int number);
int digitsCount(int number);
int printNumber(int number);

int main(){
	//          0 1 2 3 4 5 6
	int ar[] = {9,2,1,6,4,7,0};

	printArrayEvens(ar,7);
	printArrayReverseOdds(ar,7);

	int sumEven = arrayEvenIndexSum(ar,7);
	printf("sumEven = %d \n", sumEven);
	printf("\n \n");

	arrayPrint(123456);

	return 0;
}

void printArrayEvens(int ar[],int size){
	int i;
	for(i=0; i<size; i++){
		if(ar[i]%2==0)//zugi - 4etnie
			printf("%d  ",ar[i]);
	}
	printf("\n\n");
}

void printArrayReverseOdds(int ar[],int size){
	int i;
	for(i=size-1; i>=0; i--){//מאחור
		if(ar[i]%2!=0)//  ne 4etnie איזוגי
			printf("%d  ",ar[i]);
	}
	printf("\n\n");
}

int arrayEvenIndexSum(int ar[],int size){//סחום
	int i,even=0;
	for(i=0; i<size; i+=2){
		even += ar[i];
	}
	return even;
}


void arrayPrint (int number){
	int i = digitsCount(number);
	int ar[i];
	for(int j =i-1; j>=0; j--){
		ar[j]=number%10;
		number = number/10;
		//		printf("ar[%d]= %d \n",j, ar[j]);
	}
	for(int b=0 ; b<i; b++){
		printf("ar[%d]= %d \n",b,ar[b]);
	}


}

int digitsCount(int number){
	int count = 0;

	do {
		number = number/10; //1.
		count++;
	}
	while(number!=0);
	return count;
}



