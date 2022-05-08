#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findoutput(int n1, int n2, int n){
	int gcd, max;
	//gcd of 2 numbers
	max = n1 >n2 ? n1: n2;	
	while(1){
	if(max%n1 == 0 && max%n2 == 0){
		gcd = max;
		break;
	}
		max++; 
	}
	return gcd;

}

int main(){

	int t;
	scanf("%d", &t); //line 1
	printf("\n"); //  line2
	
	for(int i=0;i<t;i++){
		int n;
		int max;
		int *ptr;
		scanf("%d", &n);	//line2inp
		printf("\n");		//line 3
		ptr = (int*)malloc(n*sizeof(int));
		for(int i=0; i<n; i++){
			scanf("%d", &ptr[i]);
		}	
			max = ptr[0];
			//for loop for gcd 
			for(int i =1; i<n; i++){

			max = findoutput(max,ptr[i],n);

			}
			printf("%d",max);
		}
	
	
	
	           	                  // Reading input from STDIN
	// printf("Input number is %d.\n", num);       // Writing output to STDOUT
}
