#include <stdio.h>

int d[100];

int dp(int x){
	if(x==1) return 1;
	if(x==2) return 1;
	if(d[x] != 0) return d[x]; // 이미 구했다면 배열에 값을 저장 
	return d[x] = dp(x - 1) + dp(x - 2);
}

int main(void){
	printf("%d", dp(30));
	return 0;
}
