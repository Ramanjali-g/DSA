int subtractProductAndSum(int n) {
    int pro=1;
    int sum = 0;
    while(n>0){
        int dig= n%10;
         pro = pro*dig;
        sum = sum+dig;
        n=n/10;
    }return pro-sum;
}