bool checkIfExist(int* arr, int arrSize) {
    int count=0;
    for(int i=0;i<arrSize;i++){
        for(int j=0;j<arrSize;j++){
            if(i!=j&&arr[i]==2*arr[j])
            count++;
        }
    }if(count==0){
        return false;
    }return true;
}