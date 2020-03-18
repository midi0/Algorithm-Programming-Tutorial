#include stdio<h>

int number = 4 ; //노드수
int INF = 1000000;

// 자료 배열 초기화
int a[4][4] = {
	{0,5,INF,8},
	{7,0,9,INF},
	{2,INF,0,4},
	{INF,INF,3,0}
};

void floydWarshall(){
	int d[number][number]; // 거리 비용
	for(int i = 0; i < number; i++){
		for(int j = 0; j < number; j++){
			d[i][j] = a[i][j]; 
		}
	} 
	// k = 거쳐가는 노드
	for(int k = 0; k < number; k++){
		// i = 출발 노드
		for(int i = 0; i < number; i++){
			//j = 도착 노드
			for(int j = 0; j < number; j++){
				if(d[i][k] + d[i][j] < d[i][j]){
					d[i][j] = d[i][k] + d[i][j];
				}
			} 
		}
	} 
	//결과 출력
	for(int i = 0; i < number; i++){
		for(int j=0; j<number; j++){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	} 
}
int main(void){
	floydWarshall();
}
