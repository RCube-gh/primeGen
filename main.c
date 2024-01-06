#include<stdio.h>
#include<stdbool.h>
#define N 3000

int main(void){
	bool prime[N+1];
	for(int i=0;i<N;i++)prime[i]=true;
	for(int p=2;p*p<=N;p++){
		if(prime[p]==true){
			for(int i=p*p;i<=N;i+=p)prime[i]=false;
		}
	}
	//output
	for(int k=2;k<=N;k++){
		if(prime[k])printf("%d\n",k);
	}
	return 0;
}

