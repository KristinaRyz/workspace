/*
 * home_work_10.4.c
 *
 *  Created on: 15.11.2016
 *      Author: Кристина Рыжикова
 */

#include<stdio.h>
void print_ascii(int first, int last);
int main(){
	int first =33;
	int last =126;
	//
	//	printf("code %d => symbol %c ;", first, last);
	print_ascii(first, last);
	return 0;
}
void print_ascii(int first, int last){
	int i=0;
	for(int last ='!'; last<='<'; last++){
		printf("code %d => symbol %c ;", first, last);
		first++;
		i++;
		if(i==4){
			printf("\n");
			i=0;
		}
	}
}

