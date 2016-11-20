#include <stdio.h>
int  hasSubnumber(int number, int subNumber);

int main(){
	int res = hasSubnumber(12345678,1);
			if(res==0)
				printf("Not found\n");
			else
				printf("Found\n");
    return 0;
}
//          12345678                57
int  hasSubnumber(int number, int subNumber){
	int dCount = digitsCount(subNumber);
	int pow = power10(dCount);
	int res;
	do {
		 res=number%pow;
			if(res==subNumber)
				return 1;
			number = number/10;
		}
		while(number>0);
		return 0;
}
int digitsCount(int number){
	int count = 0;

	do {
		number = number/10; //1.
		count++;
	}
	while(number!=0);
	return count;
}
int power10(int y){
	int res = 1;
	while(y > 0){
		res = res * 10;
		y--;
	}
	return res;
}

