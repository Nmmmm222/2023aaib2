#include <stdio.h>
int main(){
	int a;
	float c,sum=0;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%f",&c);
		sum+=c;
	}

	printf("%.2f",sum/a);

}
