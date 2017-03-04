int hammingDistance(int x, int y) {
    int temp=x^y;
    int dis=0;
    while(temp) {
        if((temp>>1)<<1 != temp)
            dis++;
        temp>>=1;//temp=temp>>1;
    }
    return dis;
}
