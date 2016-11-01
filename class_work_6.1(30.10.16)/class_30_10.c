/*
 * class_30_10.c
 *
 *  Created on: 30/10/2016
 *      Author: Gran1
 */

#include <stdio.h>
void getTaxi(int code);
float calculator(float a,float b, int action);

int main(){
	int a=5,b=-1;
if(a<4){//esli stavit figurnie skobki to mojno dobavit ewe deistviya (printf) kotorie budut pechatatsya
	printf("Hello \n");
	printf("Dolly \n");
}else{
	printf("Bye \n");
	printf("Haim \n");
	}

getTaxi(18);
float res=calculator(5.87,7.55,5);
printf("res=%.2f \n",res);
	return 0;
}

float calculator(float a,float b, int action){
	if(action<1||action>4){
		printf("ERROR:wrong action \n");
	return 0;
	}
	float res = 0;
	if(action ==1)
		res = a+b;//bez figurnih skobok tolko pervaya stro4ka otnositsya k if no lu4we vsegda stavit{}
	 if(action ==2)
			res = a-b;
	 if(action ==3)
			res = a*b;
	 if(action ==4){
		if(b!=0)//esli b ne raven 0 to vipolnyaetsya sleduuwee deistvie
		res = a/b;
	}
	return res;
}

void getTaxi(int code){
	if(code<1||code>5){
		printf("ERROR:wrong driver code \n");
	return; // posle etogo return funkcia s4itat dalwe ne budet, code ostanovilsya
	}
	if(code == 1)
		printf("Haim, GO! \n");

	else if(code == 2)// esli pervii if srabotaet, to vse ostalnie else rabotat ne budut, toje ostanavlivaet code i ostalnoe ne proveryaet
			printf("Alex, GO! \n");

	else if(code == 3)
			printf("David, GO! \n");

	else if(code == 4)
			printf("Rivka, GO! \n");

	else if(code == 5)
			printf("Iossi, GO! \n");
}
