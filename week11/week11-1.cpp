#include <stdio.h> ///10000以下有幾個質數
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;

    }
    return 1;
}
int main()
{
    int BOUND =300000,ans=0;
    for(int i=2;i<BOUND;i++){
        if(isPrime(i)) printf("%d ",i);
        ans++; ///同時++ 多一個質數

    }
    printf("質數有:%d 個\n",ans);

}
