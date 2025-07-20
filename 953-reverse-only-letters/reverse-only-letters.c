char* reverseOnlyLetters(char* s) {
    int start;
    int end=strlen(s);
    while(start<end){
        if(!isalpha(s[start])){
            start++;
        }else if(!isalpha(s[end])){
            end--;
        }else{
           char tem = s[start];
            s[start]=s[end];
            s[end]=tem;
        start++;
        end--;
        }
    }return s;
}