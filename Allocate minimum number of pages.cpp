#include <bits/stdc++.h>
bool isPossible(vector<int>& arr, int m, int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<arr.size();i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            pageSum=arr[i];
            if(studentCount>m || arr[i]>mid){
                return false;
            }
        }
    }
        return true;
}

int findPages(vector<int>& arr, int n, int m) {
    // int s = *max_element(arr.begin(),arr.end());
    // int e = accumulate(arr.begin(),arr.end(),0);
    int start=0;
    int end=accumulate(arr.begin(),arr.end(),0);
    int ans=-1;
    if(m<=n){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isPossible(arr,m,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
    else{
        return -1;
    }

    
}