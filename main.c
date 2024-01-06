#include<stdio.h>
#include<stdbool.h>
#define n 3000

int main(void){
	bool prime[n+1];
	for(int i=0;i<n;i++)prime[i]=true;
	for(int p=2;p*p<=n;p++){
		if(prime[p]==true){
			for(int i=p*p;i<=n;i+=p)prime[i]=false;
		}
	}
	//output
	for(int k=2;k<=n;k++){
		if(prime[k])printf("%d\n",k);
	}
	return 0;
}

