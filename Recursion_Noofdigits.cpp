int count(int n){
    //write your code here
    if(n<=9){
        return 1;
    }
    int smalloutput = 1+count(n/10);
    return smalloutput;
}
