#include <stdio.h>

int main(){ //        0  1 2 3 4 5
	int ar[6];//musor[4][][][9][][]
	ar[3] = 9;
	ar[0] =4;
	printf("%d\n", ar[5]);
	printf("%d\n", ar[3]);



	//                           0   1   2   3    4
	int ar1[5]={45,32,12,-23};//[45][32][12][-23][0]
	printf("\n%d\n", ar1[4]);



//                                0  1   2  3  4   5
	int ar2[]={3,-6,3,-1,4,56};//[3][-6][3][-1][4][56]
	int a = ar2[2];
	printf("\n%d\n", ar2[4]);
	printf("%d\n", a);



	float ar4[]={23.5,-6.5,3.4,-1.56,4.45};//[][][][][[]
		printf("\n%f \n", ar4[2]);

	return 0;
}

