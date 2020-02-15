int Solution::trailingZeroes(int A) {
    int fives=A/5;
    int leading0=0;
    int i=5;
    while (i<=A){
        leading0=leading0+(A/i);
        i=i*5;
    }
    return leading0;
}
