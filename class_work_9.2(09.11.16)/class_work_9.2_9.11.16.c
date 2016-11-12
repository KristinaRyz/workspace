/*
 * class_work_9.2(09.11.16).c
 *
 *  Created on: 09/11/2016
 *      Author: Gran1
 */
#include<stdio.h>

int main(){
	int a;
	//    1      2     3
	for(a = 5; a > 0; a-- ){
		printf("a=%d\n",a);
	}
	printf("End of loop\n");
	return 0;
}
/////////////////////////////////////////

int numberSum(int number){

	int sum;
	for(sum = 0; number > 0; number--){
		sum = sum + number;

	}
	return sum;
}
