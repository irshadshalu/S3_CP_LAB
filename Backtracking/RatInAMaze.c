/*
   Solves maze, in 4 direction movement, not always shortest path.
 */
#include<stdio.h>
int m,n,visited[20][20],sol[20][20];	// Size of maze m rows, n coloumns

// Returns 1 if a cell is not visited and is not blocked or out of bounds
int isSafe(int maze[20][20],int r,int c) 	{
	if(r>=0 && c>=0 && r<m && c<n && maze[r][c]==1 && visited[r][c]==0)
		return 1;
	else
		return 0;
}

int Solve(int maze[20][20],int r,int c){
	if(r==m-1&&c==n-1){ // We reached our destination
		sol[m-1][n-1]=1;
		return 1;
	}
	if(isSafe(maze,r,c)){
		sol[r][c]=1; // mark solution, check four directions
		visited[r][c]=1;
		if(Solve(maze,r,c+1))
			return 1;
		if(Solve(maze,r+1,c))
			return 1;
		if(Solve(maze,r-1,c))
			return 1;
		if(Solve(maze,r,c-1))
			return 1;
	// Diagonal movement, uncomment to move through diagonals
		/*
		if(Solve(maze,r+1,c+1))
			return 1;
		if(Solve(maze,r-1,c-1))
			return 1;
		if(Solve(maze,r+1,c-1))
			return 1;
		if(Solve(maze,r-1,c+1))
			return 1;
		*/
		sol[r][c]=0; //  Unmark solution , backtrack
		return 0;
	}
	return 0;
}

int main(){
	int i,j, maze[20][20];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&maze[i][j]);
			sol[i][j]=0;
			visited[i][j]=0;
		}
	}
	Solve(maze,0,0);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf(" %d",sol[i][j]);
		}
		printf("\n");
	}
}
