int climbStairs(int n) {
    if (n <= 2) return n;

    int way1 = 1; 
    int way2 = 2; 

    for (int i = 3; i <= n; i++) {
        int curr = way2 + way1;
        way1 = way2;
        way2 = curr;
    }

    return way2;
}