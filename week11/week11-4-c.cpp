#include <stdio.h>
int main()
{
	int m,n;
	int a[10][10];
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int j=0;j<n;j++){
		for(int i=m-1;i>=0;i--){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}




}