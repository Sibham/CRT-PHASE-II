class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1;
        for(int x:nums){
            if(x==0){
                return 0;
            }
            if(x<0){
                sign =-sign;
            }
        }
        return sign;
    }
};


class Solution {
public:
    int arraySign(vector<int>& nums) {
       int negCount = 0 ;
       for(int i = 0 ; i<nums.size() ; i++){
        if(nums[i]==0) return 0;
        if(nums[i]<0) negCount++;
       }
        return (negCount % 2 == 0) ? 1 : -1; 
    }
};
