class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;

        if(s.length() == 1) return 1;

        unordered_set<char> charset;
        int l = 0;
        int maxlength = 0;
        for(int r = 0; r< s.length(); r++){
            while(charset.contains(s[r])){
                charset.erase(s[l]);
                l++;
            }
            auto result = charset.emplace(s[r]);            
            
            maxlength = max(maxlength, r - l + 1);                  
        }
        return maxlength;
    }    
};
