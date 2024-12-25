#include<stdio.h>
int main(){
	long long j=1,n,i;
	printf("输入要求阶乘的数字\n");
	scanf("%lld",&n);
	    if(n<3||n>48){
			printf("注意：只能输入3到48的数字\n");//TODO
			return 1;
		}
	for( i=n;i>0;i--){
		j*=i;//TODO
	}
	printf("%lld\n",j);
	return 0;
}
