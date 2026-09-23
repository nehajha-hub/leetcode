class Solution {
public:
    int maxDepth(string s) {
       
        int count = 0;
        int maxm =0;
        for(int i =0 ; i< s.length(); i++){
            if(s[i] =='('){
                count++;
                maxm = max(maxm, count);
            }
           else if(s[i] ==')'){
            count--;
           }
        }
        return maxm;
        
    }
};