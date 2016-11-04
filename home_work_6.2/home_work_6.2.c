#include <stdio.h>
float salary(float hours,float wage,float base,float factor,int type,float bns);


int main(){
	float res=salary(176,28,5000,22,1,30);
	printf("salary= %.2f \n",res);
	return 0;
}


float salary(float hours,float wage,float base,float factor,int type,float bns){
	float res;
	if(type!=1&&type!=2)
		return 0;
	if(type==1){
		 res=hours*wage;
	}else if(type==2){
		res=base*factor;
	}


	float bonus = (res*bns)/100;
	return res+bonus;

}
