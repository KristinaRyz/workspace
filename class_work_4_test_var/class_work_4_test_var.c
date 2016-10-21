/*
 * class_work_4_test_var.c
 *
 *  Created on: 21.10.2016
 *      Author: Кристина Рыжикова
 */
#include <stdio.h>
int f1(int g);
int f3(int b);
int f2(int a);
float f4(float c);
int main(){
    int a = 78;
    printf("a = %d \n",a);
    int b=9,c = 1,d = 5;
    b = c + d;
    printf("b = %d \n",b);
    d = a * 2;
    printf("d = %d \n",d);
    ////////////////////////////
    a = f1(34);
    printf("a = %d \n",a);
    b = f2(200);
    printf("b = %d \n",b);
    a = f3(50);
    printf("a = %d \n",a);
    float h;
    h = f4(9);
    printf("h = %f \n",h);
    return 0;
}
float f4(float c){
	return c/2;
}
int f3(int b){
	return b + 10;
}
int f2(int a){
	return a - 100;
}
int f1(int g){
	return g * 2;
}
