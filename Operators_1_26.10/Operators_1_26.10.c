/*
 * Operators_1_26.10.c
 *
 *  Created on: 26/10/2016
 *      Author: Gran1
 */
#include <stdio.h>
void isEquals(int a,int b);

int main(){
int c=2, b=3,a=1;

//++b;
--b;     //menshe na 1
printf("\t %d \n",b);

b=c!=a;  //ne ravno
printf("\t %d \n",b);

b=c==a;  //ravno
printf("\t %d \n",b);

//  1        0         0
c=(a>0) || (a==b) || (c==b); // esli a>0 to ostalnoe ne proveryaet (hotya bi odin true)
printf("c=%d \n",c);

//  1        1         1
c=(a>0) && (a!=b) && (c>=b); // operator i
printf("c=%d \n",c);

(a>0)?printf("Hello \n"):printf("Bye\n");//ternarnii operator (ili eto ili eto)
(a==0)?printf("Hello \n"):printf("Bye\n");

isEquals(4,8);
return 0;
}
void isEquals(int a,int b){
	(a==b)?printf("Equals \n"):printf("NotEquals \n"); //pravda cho a ravno b

}


