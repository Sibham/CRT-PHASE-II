class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans = 0;
        vector<int>v;
        for(auto x:operations){
            if(x=="C"){
                v.pop_back();
            }else if(x=="D"){
                v.push_back(2*v.back());
            }else if(x=="+"){
                int a = v.back();
                v.pop_back();
                int b=v.back();
                v.push_back(a);
                v.push_back(a+b);
            }
            else{
                v.push_back(stoi(x));
            }
        }
        int sum = 0;
        for(int op : v){
            sum +=op;
        }
        return sum;
    }
};
