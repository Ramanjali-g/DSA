int reverse(int x){
    int digit;
    int rem = 0;
    while(x!=0){
        digit=x%10;
        if(rem>INT_MAX/10||rem<INT_MIN/10)
        return 0;
        rem = rem *10+digit;
        x =x/10;
    }return rem;
}