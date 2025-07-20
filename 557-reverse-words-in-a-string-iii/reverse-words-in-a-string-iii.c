char* reverseWords(char* s) {
    int start=0,end=0;
    while(end<=strlen(s)){
        if(s[end] ==  ' ' ||s[end] == '\0'){
    int left =start;
    int right = end-1;
    while(left<right){
        char temp = s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }
    start = end+1;
        }
        end++;
    }
    return s;
}