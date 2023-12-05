class Solution {
public:
    int numberOfMatches(int n) {
       long long int ans = 0;
       if(n==1) return 0;
       int a = n;
       while(n!=1){
           if(n%2!=0){
               ans += n/2;
               n = (n/2)+1; 
           }
           else{
               ans += n/2; 
               n = n/2;
           }
       } 
       return ans;
    }
};
