/*
 * class_work_9(09.11.16).c
 *
 *  Created on: 11.11.2016
 *      Author: Кристина Рыжикова
 */

/*
 * class_work_9(09.11.16).c
 *
 *  Created on: 09/11/2016
 *      Author: Gran1
 */
#include<stdio.h>

void print_stars(int stars, int inRow);
int numberSum(int number);
int factorial(int number);
int XpowerY(int x, int y);

int main(){
	print_stars(16,4);
	print_stars(12,6);

	int res = numberSum(4);
	printf("res = %d\n", res);

	res = factorial(13);
	printf("res= %d \n",res);

	res = XpowerY(2,3);
	printf("res= %d \n",res);
	return 0;
}
////////////////////////////////////
int XpowerY(int x, int y){//vvozvedenie v stepen // tolko dlya pologitelnih y
	int res = 1;
	while(y > 0){
		res = res * x;
		y--;
	}
	return res;
}


///////////////////////////////////////////////////
int factorial(int number){
	int res = 1;
	while(number > 0){
		res = res*number;
		number--;
	}
	return res;
}
/////////////////////////////////////////
int numberSum(int number){
	int sum = 0;
	while(number > 0){
		sum = sum + number;
		number--;
	}
	return sum;
}
//////////////////////////////////////////////
void print_stars(int stars, int inRow){
	int counter = 0;
	while(stars>0){
		printf("*");
		counter++;
		if(counter == inRow){//inRow=kol-vo zvezd v stroke
			printf("\n");
			counter = 0;//bez etogo dalwe budet pechatat zvezdi v stroku
		}
		stars--;
	}
	printf("\n");//nov func s novoi stroki
}
