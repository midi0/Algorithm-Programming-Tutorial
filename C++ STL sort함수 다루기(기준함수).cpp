#include <iostream>
#include <algorithm>

using namespace std;
 
bool compare(int a, int b){
	return a > b; // 큰 값이 앞으로 감 ( 내림차순 정렬 ) 
}

int main(void){
	int a[10] = {9,3,5,4,1,10,8,6,7,2};
	sort(a, a+10, compare);
	for(int i = 0; i< 10; i++){
		cout <<a[i] << ' ';
	}
	return 0;
}
