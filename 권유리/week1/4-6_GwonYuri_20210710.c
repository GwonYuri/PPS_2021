int addDigits(int num) {
    int sum;
    while(num/10 > 0){
        sum=0;
        while(num > 0){
            sum+=(num%10);
            num/=10;
        }
        num=sum;
    }
    return num;
}