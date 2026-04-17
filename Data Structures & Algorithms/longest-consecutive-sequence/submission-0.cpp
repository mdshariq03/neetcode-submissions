class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset (nums.begin(), nums.end());
        int longest = 0;
        for (const int& num : nums){
            int count = 0;
            if ((numset.find(num - 1) == numset.end())){
                count++;
                int temp = num + 1;
                while ((numset.find(temp) != numset.end())){
                    count++;
                    temp = temp + 1;
                }
                if(count > longest) longest = count;
            }           
        }
        return longest;
    }
};
