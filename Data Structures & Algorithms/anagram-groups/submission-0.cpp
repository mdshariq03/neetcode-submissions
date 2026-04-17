class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> myMap;
        for(string& str : strs){
            vector<int> count(26, 0);
            for(char c : str){
                count[c - 'a']++;
            }
            myMap[count].push_back(str);
        }
        vector<vector<string>> result;
        for(const auto& pair : myMap){
            result.push_back(pair.second);
        }
        return result;
    }
};
