char* removeDuplicates(char* s) {
   int n = strlen(s);
    char* stack = (char*)malloc(n + 1); //change to manual alloc becoz some crazyy lonngg test cases(runtime error)
    int top = -1;

    for (int i = 0; i < n; i++) {
        if (top >= 0 && stack[top] == s[i]) {
            top--;         
        } else {
            stack[++top] = s[i];  
        }
    }

    stack[top + 1] = '\0';
    return stack;
}