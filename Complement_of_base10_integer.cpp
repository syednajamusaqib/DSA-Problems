class Solution {
public:
    int bitwiseComplement(int n) {
    int m;
    m=n;
    int count=0; // Storing count in count variable
    if(n==0){
        return 1; 
    }
    while(n!=0){
        int bit = n&1; // Getting bit
        count++; // Incrementing bit 
        n = n>>1; // Right shift 
    }
        return((pow(2,count)-1)-m); // Formula to get 1's complement
    }
};
