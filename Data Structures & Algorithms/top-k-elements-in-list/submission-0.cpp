class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freqMap;
        for(int num : nums){
            freqMap[num]++;
        }

        vector<vector<int>> freqVec (nums.size() + 1);
        for(const auto& pair : freqMap){
            int num = pair.first;
            int freq = pair.second;
            freqVec[freq].push_back(num);
        }

        vector<int> result;
        for(int i = freqVec.size() - 1; i >= 0 && result.size() < k; i--){
            for(int num : freqVec[i]){
                result.push_back(num);
                if(result.size() == k){
                    break;
                }
            }
        }
        return result;
    }
};
