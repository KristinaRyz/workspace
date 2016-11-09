/*
 * class_work_8.1.02.11.16.c
 *
 *  Created on: 06/11/2016
 *      Author: Gran1
 */

#include<stdio.h>
void printStars(int num,int g);
void gagarin();
int main(){
	//	gagarin();
	printStars(12,4);
	return 0;
}
//void gagarin(){
//	int count = 10;
//	while(count>0){
//		printf("count = %d\n",count--);
//		//count--;
//	}
//	printf("Go!\n");
//}
void printStars(int num,int g){
	int i=0;
	int n=1;
	while(i<num){
		if(n<g){//n - kol-vo zvezd,(dohodit do treh i idet na else) g - kol-vozvezd v stroke
			printf("*");
			n++;
		}else{
		printf("*\n"); //nape4atai poslednuu zvezdu i pereidi na novuu stroku
		n=1; // n s4itaet nomer zvezdoc\4ek s 1
		}
		i++; //uveli4ivaet zna4enie na 1(po usloviu menwe 12)

//		int i=0;
//		while (i<num){
//			printf("*");
//			i++;

//		i=0;
		//		while (i<num){
		//			printf("+");
		//			i++;
		}
	}


