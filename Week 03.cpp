#include<stdio.h>
#define N 4
void printSolution(int solution[N][N]){
	for (int i =0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("%d",solution[i][j]);
		}
		printf("\n");
	}
}
int isSafe(int maze[N][N],int x, int y){
if(x>=0 && x<N && y>=0 && y<N && maze[x][y] == 1){
	return 1;
}
return 0;
}	
int solveMazeUtil(int maze[N][N],int x,int y,int solution[N][N]){
	if(x==N-1 && y==N-1){
		solution[x][y]=1;
		return 1;
	}
}
