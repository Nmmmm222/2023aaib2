#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int now;
		scanf("%d",&now);
		printf("%d,",now*now);
	}
	printf("\n");
}

