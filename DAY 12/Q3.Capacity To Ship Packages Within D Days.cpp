class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long int low = *max_element(weights.begin(),weights.end());
        long long int high = accumulate(weights.begin(),weights.end(),0);
        long long ans = -1;
        while(low<=high){
            long long int mid = low+(high - low)/2;
            int totaldays = 1;
            long long sum = 0;
            for(int i = 0 ; i<weights.size() ; i++){
                sum +=weights[i];
                if(sum>mid){
                    totaldays++;
                    sum=weights[i];
                }
            }
            if(totaldays <= days){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
           
    }
};
