#include <stdio.h>
#include <math.h>

/*int main(){
	int x;
	int num;
	int power;
	int prev;

	scanf(" %d %d", &num, &power);
	

	
	prev=num;
	
	for(x=0; x<power-1; x++){
		prev=prev*num;
	}
	
	printf("%d %d %d", num, power, prev);
}


int main(){
	int top;
	int mult1;
	int mult2;
	int sum=0;
	int x;
	
	scanf("%d %d %d", &mult1, &mult2, &top);
	
	for(x=0; x<top; x++){
		if(x%3==0 || x%5==0){
			sum+=x;
		}
	}
	printf("%d", sum);
	
}

int main(){
	int num;
	int x;
	int y;
	int lprime, prime=0;
	int adder=1;
	
	scanf("%d", &num);
	
	for (x=1; x<num; x++){
		lprime=prime;
		if(num%x==0){
			for(y=1; y<x; y++){
					if(x%y==0){
						adder=0;
					}
			}
		}
		if(adder!=0){
			prime=x;
		}
		if(prime>lprime){
			lprime=prime;
		}
	}
	printf("%d", lprime);
}*/


int main(){
	int n, x=1;

	for(n=0; n>0; n++){
	while(x<20){
		if(n%x==1){
			x=0;
		}
			
	}
	if(x=1){
		printf("%d",n);
	}
	}
	
}