char* removeOuterParentheses(char* s) {
    static char res[10000];
    int k=0, d=0;

    for(int i=0; s[i]!='\0'; i++){
        if(s[i] == '('){
            if(d > 0){
                res[k++] = '(';
            }
        d++;
        }else{
                d--;
                if(d > 0){
                    res[k++] = ')';
                }            
            }
        }
    res[k] = '\0';
    return res;
}