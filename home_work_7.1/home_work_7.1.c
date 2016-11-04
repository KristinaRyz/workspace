/*
 * home_work_7.1.c
 *
 *  Created on: 04.11.2016
 *      Author: Кристина Рыжикова
 */

#include <stdio.h>
void fan(int mode);

int main(){
fan(2);
	return 0;
}

void fan(int mode){
	switch(mode){
	case 0: printf("Switched off\n");break;
	case 1: printf("Mode 1\n");break;
	case 2: printf("Mode 2\n");break;
	case 3: printf("Mode 3\n");break;
	default:printf("Error: wrong mode\n");
	}
	printf("End off switch \n");
}
