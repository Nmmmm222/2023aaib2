#include <stdio.h>
#include <string.h>
int main()
{
	char a[200],b[200];
	scanf("%s",a);
	scanf("%s",b);
	int L1 =strlen(a);
	int L2 =strlen(b);
	if(L1>L2) printf("1");
	else if(L1<L2) printf("-1");
	else{
		printf("%d",strcmp(a,b));
	}

}