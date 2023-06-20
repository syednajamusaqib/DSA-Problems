class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int i=0;
        sort(arr.begin(),arr.end());
        while(i<arr.size()){
        int count=1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            ans.push_back(count);
            i+=count;
        }
        sort(ans.begin(),ans.end());
        for(int j=0;j<ans.size()-1;j++){
            if(ans[j]==ans[j+1]){
                return false;
            }
        }
        return true;
    }
};