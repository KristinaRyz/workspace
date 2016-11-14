/*
 * class_work_10_13.11.16.c
 *
 *  Created on: 13/11/2016
 *      Author: Gran1
 */
#include<stdio.h>
void printABC();
void printASCII();
void printASCII();

int main(){
	//	printASCII();
	//	printABC();
	printASCII();

	//	int a = 8,b = 9;
	//	printf("\t a = %d, b = %d \n",a,b); //tabulyacia ,kol-vo peremennih ne imeet znachenie
	//
	//	a = 345;
	//	printf("\t a = %0 \n",a);// %o - octalnaya format, %x - hexadecimal format
	//	printf("%c -> %d \n",a,a); //raspechataet symbol i dec
	//	a='Y';//symbolnaya constanta
	//	a = '&'+'&';
	return 0;
}


void printABC(){
	int sym;
	for(sym = 'A';sym <= 'Z';sym++){
		printf("%c -> %d \n", sym, sym);
	}
}

void printASCII(){
	int sym,i = 0;
	for(sym = '!'; sym <= '~'; sym++){
		printf("%c -> %d; \t", sym, sym);
		i++;
		if(i==4){
			printf("\n");
			i=0;
		}
	}
}
