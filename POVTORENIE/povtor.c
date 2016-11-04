#include<stdio.h>
//void fan(int mode);
float salary(float hours, float wage, float base, float factor, int type, float bonus);
int main(){

float sal1 = salary (176,28,5000,2,158,200);
printf("sal1= %.2f \n",sal1);
float sal2 = salary (176,28,5000,2,2,200);
printf("sal2= %.2f \n",sal2);

// fan(4);
	return 0;
}
//void fan(int mode){
//	if(mode<=0 || mode>3){
//		printf("ERROR = wrong mode \n");
//		return;
//	}
//	if(mode==1){
//		printf("mode = speed %d \n",mode);
//	}
//	else if(mode==2){
//		printf("mode = speed %d \n",mode);
//	}
//	else if(mode==3){
//		printf("mode = %d \n",mode);
//}
//}



float salary(float hours, float wage, float base, float factor, int type, float bonus){
if(type!=1 && type!=2){
	printf("Error:wrong type \n");
}
	else if(type==1){
	return(hours*wage)+ bonus;
}
	else if(type==2){
	return(base*factor)+bonus;
}
}
