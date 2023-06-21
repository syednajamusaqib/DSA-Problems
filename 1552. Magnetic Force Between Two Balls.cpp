
bool isposs(vector<int>& position, int m,int mid){
    int ball = 1;
    int last = position[0];
    for(int i=0;i<position.size();i++){
        if(position[i]-last>=mid){
            ball++;
            last = position[i];
            if(ball==m){
                return true;
            }
        }
    }
    return false;
}

class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start = 0;
        int n = position.size();
        int end = position[n-1];
        int ans = -1;
        int mid = start + (end - start)/2;
        while(start<=end){
            if(isposs(position,m,mid)){
                ans = mid;
                start = mid + 1;
            }
            else{
                end = mid -1;
            }
            mid = start + (end - start)/2;
        }
        return ans;

    }
};