/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int*res=(int*)malloc( 2*(sizeof(int)));
    *returnSize = 2;
    int left=0;
    int right=numbersSize-1;
    while(left<right){
        int sum = numbers[left]+numbers[right];
        if(sum == target){
        res[0]=left+1;
        res[1]=right+1;
        return res;
        }else if(sum<target){
        left++;
    }else{
        right--;
    }
    }
    *returnSize=0;
    return NULL;
}