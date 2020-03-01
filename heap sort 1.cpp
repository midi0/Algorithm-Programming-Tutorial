#include <stdio.h>

int number = 9;
int heap[9] = {7,6,4,8,3,5,9,1,2};

int main(void){
	// 전체 트리구조를 최대 힙구조로 바꾼다 
	for(int i = 1 ; i < number; i++){
		int c = 1;
		do{
			int root = (c-1)/2; // 트리에서의 부모
			if(heap[root]<heap[c]){ // 부모보다 큰 경우 스왑해준다. 
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			} 
			c = root;
		} while (c != 0);
	}
	for(int i = number -1; i >=0; i--){
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0;
		int c= 1;
		do{
			c = 2 * root +1;
			//자식중 더 큰 값을 찾기
			if(heap[c]< heap[c+1] && c<i-1){
				c++;
			} 
			//루트보다 자식이 클 경우 교환
			if(heap[root] < heap[c] && c < i ){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			} 
			root = c;
		} while ( c<i);
	}
	
	for(int i = 0; i < number; i++){
		printf("%d ", heap[i]);
	}
	
	return 0;
}
