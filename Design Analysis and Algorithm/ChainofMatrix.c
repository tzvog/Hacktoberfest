/* a)  WAP to multiply a chain of matrices optimally using iterative version of Dynamic Programming approach. Check your program for the sequence of 4 matrices <M1, M2, M3, M4> whose sequence of dimension is <10,20,50,1,100>. */

#include<stdio.h>

void printOptimalParen(int s[][5],int i,int j){
	if(i==j)
		printf("M%d ",i);
	else{
		printf("( ");
		printOptimalParen(s,i, s[i][j]);
		printOptimalParen(s, s[i][j]+1,j);
		printf(") ");
	}
}


int matrixChainOrder(int *a,int n,int s[][5]){
	int i,j,k,l,cost;
	int m[n][n];

	for(i=1;i<n;i++)
		m[i][i]=0;

	for(l=2;l<n;l++){
		for(i=1;i<n-l+1;i++){
			j=l+i-1;
			m[i][j]=999999;
			for(k=i;k<=j-1;k++){
				cost=m[i][k]+m[k+1][j]+a[i-1]*a[j]*a[k];
				if(cost<m[i][j]){
					m[i][j]=cost;
					s[i][j]=k;
				}
			}
		}
	}
	return m[1][n-1];
}

int main()
{
	int arr[]={20,10,44,1,50},i,n=5;
	int s[5][5];
	printf("chain values are: ");
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);

		printf("\nMinimum number of multiplications in %d\n",matrixChainOrder(arr, n, s));

		printOptimalParen(s, 1, n-1);

		printf("\n");

		return 0;
}