class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> nummap;
        for(int i = 0; i < numbers.size(); ++i){
            if (nummap.find(target - numbers[i]) == nummap.end())
                nummap[numbers[i]] = i;
            else
                return {nummap[target - numbers[i]] + 1, i + 1};
        }   
    }     
};
