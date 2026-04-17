class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset (nums.begin(), nums.end());
        int longest = 0;
        for (const int& num : nums){
            int count = 0;
            if ((numset.find(num - 1) == numset.end())){
                count++;                
                while ((numset.find(num + count) != numset.end())){
                    count++;
                }
                if(count > longest) longest = count;
            }           
        }
        return longest;
    }
};
