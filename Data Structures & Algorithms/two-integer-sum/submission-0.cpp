#include <map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, size_t> myMap;
        for (size_t ind  = 0; ind < nums.size(); ind++){
            if(myMap.contains(target - nums[ind])){
                return {myMap[target - nums[ind]], ind};
            }
            myMap[nums[ind]] = ind;
        }
    }
};
