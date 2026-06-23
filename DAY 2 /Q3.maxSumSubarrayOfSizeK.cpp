class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int i = 0;
        int j = 0;
        int n = arr.size();
        int sum = 0;
        int ans =-1;
        while(j<n){
            sum +=arr[j];
            if(j-i+1==k){
                ans = max(ans,sum);
            }else if(j-i+1>k){
                sum -=arr[i];
                ans = max(ans,sum);
                i++;
            }
            j++;
        }
        return ans;
        
    }
}; 
