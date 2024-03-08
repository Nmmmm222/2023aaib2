int maxFrequencyElements(int* nums, int numsSize) {
    int T[101] ={};
    int best =0;
    for(int i=0;i<numsSize;i++){
        int num = nums[i];
        T[num]+=1;
        if(T[num]>best)best =T[num];
    }
    int total =0;
    for(int i=0;i<101;i++){
        if(T[i]==best)total +=T[i];
    }
    return total;
}