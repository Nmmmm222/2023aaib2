#include <stdio.h> ///10000�H�U���X�ӽ��
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
        ans++; ///�P��++ �h�@�ӽ��

    }
    printf("��Ʀ�:%d ��\n",ans);

}
