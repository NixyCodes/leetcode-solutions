typedef struct {
    int stack[10000];
    int minStack[10000];
    int top;

} MinStack;


MinStack* minStackCreate() {
    MinStack* obj = (MinStack*)malloc(sizeof(MinStack));
    obj->top = -1;
    return obj;
}

void minStackPush(MinStack* obj, int val) {
    obj->stack[++obj->top] = val;
    if(obj->top == 0){
        obj->minStack[obj->top] = val;
    }else{
        if(val < obj->minStack[obj->top-1]){
            obj->minStack[obj->top] = val;
        }else{
            obj->minStack[obj->top]  = obj->minStack[obj->top-1];
        }
    }

}

void minStackPop(MinStack* obj) {
        obj->top--;
}

int minStackTop(MinStack* obj) {
    return obj->stack[obj->top];
}

int minStackGetMin(MinStack* obj) {
    return obj->minStack[obj->top];
}

void minStackFree(MinStack* obj) {
    free(obj);
}