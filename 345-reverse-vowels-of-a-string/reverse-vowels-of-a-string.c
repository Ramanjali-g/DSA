int isVowel(char c){
     return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}
char* reverseVowels(char* s) {
    int start=0;
    int end = strlen(s)-1;
    while(start<end){
        while(start<end&&!isVowel(s[start])){
            start++;
        }
        while(start<end&&!isVowel(s[end])){
            end--;
        }
        if(start<end){
            char tem = s[start];
            s[start] = s[end];
            s[end] = tem;
            start++;
            end--;
        }
    }
    return s;
}