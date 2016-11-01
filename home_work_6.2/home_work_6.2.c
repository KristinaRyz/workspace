#include <stdio.h>
float salary(float hours,float wage,float base,float factor,int type,float bns);
int main(){

float salary1=salary(176,28,5000,22,1,500);
printf("salary1 = %f \n",salary1);

float salary2=salary(176,28,5000,22,5,200);
printf("salary2 = %f \n",salary2);

	return 0;
}
float salary(float hours,float wage,float base,float factor,int type,float bns){
	if(type!=1&&type!=2)
		return 0;

	if(type==1){
	return (hours*wage)+bns;
	}else if(type==2){
	return (base*factor)+bns;
	}
}

