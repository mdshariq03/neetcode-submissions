class Solution {
public:

    string encode(vector<string>& strs) {
        string fullStr = "";
        size_t ind = 0;
        for(const string& str : strs){
            fullStr += to_string(str.size()) + "#" + str;
        }
        return fullStr;
    }

    vector<string> decode(string s) {
       vector<string> origStr;
        size_t i = 0;
        while(i < s.size()){
            size_t hashPos = s.find_first_of('#', i);
            size_t lenSize = hashPos - i;
            size_t sizeStr = stoi (s.substr(hashPos - lenSize, lenSize));
            origStr.emplace_back(s, hashPos + 1, sizeStr);
            i = hashPos + 1 + sizeStr;
        }
        return origStr;
    }
};
