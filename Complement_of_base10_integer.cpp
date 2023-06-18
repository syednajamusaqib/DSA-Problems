class Solution {
public:
    int bitwiseComplement(int n) {
    int m;
    m=n;
    int count=0;
    if(n==0){
        return 1;
    }
    while(n!=0){
        int bit = n&1;
        count++;
        n = n>>1;
    }
        return((pow(2,count)-1)-m);
    }
};
