#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//부모 노드를 가져옴
int getParent(int set[], int x){
	if(set[x]==x) return x;
	return set[x] = getParent(set, set[x])
} 

//부모 노드를 병합
void unionParent(int set[], int a, int b){
	a = getParent(set,a);
	b = getParent(set,b);
	//더 숫자가 작은 부모로 병합
	if(a<b) set[b] = a;
	else set[a] = b; 
} 

//같은 부모를 가지는지 확인
int find(int set[], int a, int b){
	a = getParent(set,a);
	b = getParent(set,b);
	if(a == b) return 1;
	else return 0;
} 
