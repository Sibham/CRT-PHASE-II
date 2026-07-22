class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        for(int i = 0 ; i<s.length();i++){
            mp[s[i]]++;
        }
        for(int i = 0 ; i< s.length();i++){
            if(mp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};

class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] = {0};

        int n = s.length();
        for(int i = 0  ; i < n; i++){
            char ch = s[i];
            arr[ch - 'a']++;
        } 

        for(int i  = 0 ; i < n; i++){
            char ch = s[i];
            if(arr[ch-'a']==1){
                return i ;
            }
        }
      return -1;
    }
};
