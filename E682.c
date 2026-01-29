int calPoints(char** operations, int operationsSize) {
    char* ops;
    int st[10000], top = -1, sum = 0;

    for(int i=0; i<operationsSize; i++){
        ops = operations[i];

        if(ops[0]=='+' && ops[1]=='\0'){
            int a = st[top];
            int b = st[top-1];
            st[++top] = a+b;
        }
        else if(ops[0] == 'D' && ops[1]== '\0'){
            st[++top] = 2*st[top];
        }
        else if(ops[0] == 'C' && ops[1]== '\0'){
            top--;
        }
        else{
            st[++top] = atoi(ops);
        }
    }
    for(int i =0; i<=top; i++){
        sum += st[i];
    }
    return sum;
}