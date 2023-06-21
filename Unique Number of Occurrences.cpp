class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int i=0;
        sort(arr.begin(),arr.end()); // Sorting the array
        while(i<arr.size()){  // Initializing while loop
        int count=1; // Created count variable which will store all array values count
            for(int j=i+1;j<arr.size();j++){ // For loop to iterate from second element of array
                if(arr[i]==arr[j]){
                    count++; // Count will be incremented 
                }
            }
            ans.push_back(count); // pushing/storing count value in ans 
            i+=count; // Incrementing value of i by count 
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