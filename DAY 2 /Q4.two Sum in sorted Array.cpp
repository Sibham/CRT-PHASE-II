class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int sum=0;
        int a=0;
        int b=n-1;
        while(a<b){
            sum=arr[a]+arr[b];
            if(sum==target){
                return {a+1,b+1};
            }
            else if(sum<target){
                a++;
            }
            else{
                b--;
            }
        }
        return {-1,-1};
    }
}; 

