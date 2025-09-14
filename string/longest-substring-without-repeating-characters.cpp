class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
       for(int i = 0; i < s.size(); i++){
           string current = "";
           for(int j = i; j < s.size(); j++){
           if(current.find(s[j]) != string::npos)
           break;

           current += s[j];
           maxlen = max(maxlen, (int)current.size());
       }
       
       }
       return maxlen;
    }
};