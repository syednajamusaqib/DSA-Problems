#include <algorithm>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	vector<pair<int,int>> ans;
	sort(arr.begin(),arr.end());
	int i=0;
	int j=n-1;
	while(i<j){
		int sum=arr[i]+arr[j];
		if(sum==target){
			ans.push_back({arr[i],arr[j]});
			i++;
			j--;
		}
		else if(sum>target){
			j--;
		}
		else{
			i++;
		}
	}
	if(ans.size()==0){
		ans.push_back({-1,-1});
	}
	return ans;
}
