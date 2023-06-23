bool isvalid(int arr[],int n,int k,int mid){
    int student = 1;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum>mid){
            student++;
            sum=arr[i];
        }
        if(student>k){
            return false;
        }
    }
    return true;
}

class Solution 
{
    public:
    //Function to find minimum number of pages
    int findPages(int A[], int N, int M) 
    {
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
        }
        int s=0;
        int e=sum;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isvalid(A,N,M,mid)==true){
                ans=A[mid];
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
    }
};