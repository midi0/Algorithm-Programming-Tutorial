#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//�θ� ��带 ������
int getParent(int set[], int x){
	if(set[x]==x) return x;
	return set[x] = getParent(set, set[x])
} 

//�θ� ��带 ����
void unionParent(int set[], int a, int b){
	a = getParent(set,a);
	b = getParent(set,b);
	//�� ���ڰ� ���� �θ�� ����
	if(a<b) set[b] = a;
	else set[a] = b; 
} 

//���� �θ� �������� Ȯ��
int find(int set[], int a, int b){
	a = getParent(set,a);
	b = getParent(set,b);
	if(a == b) return 1;
	else return 0;
} 
