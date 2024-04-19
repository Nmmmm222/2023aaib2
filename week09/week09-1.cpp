#include <stdio.h>
int myAdd(int a,int b){///函式定義
    return a+b;///進來2個數，出去1個數
}
void myPrint(int a){ ///函式定義 進來1個
    for(int i=1;i<=a;i++){
        printf("*");
    }
    printf("\n");
}
int main()
{
    int ans=myAdd(3,4); ///函式呼叫
    printf("Hello ans:%d\n",ans);
    myPrint(ans);///函式呼叫(請他幫我做事)
}
