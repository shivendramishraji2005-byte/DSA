class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i = 0;i<s.size();i++){
            int reverseIndex = 'z' - s[i] + 1;
            int product = reverseIndex * (i+1);
            ans = ans + product;
        }
        //ans = ans + product;
        return ans;
    }
    
    
};