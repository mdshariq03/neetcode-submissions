class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> freqVecRow(10, 0);
    vector<int> freqVecCol(10, 0);
    
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            // BLOCK 1: Check the Row element [i][j]
            if(board[i][j] != '.') {
                int val1 = board[i][j] - '0';
                freqVecRow[val1]++;
                if(freqVecRow[val1] > 1) return false;
            }

            // BLOCK 2: Check the Column element [j][i]
            // We use != '.' so we don't skip the rest of the loop
            if(board[j][i] != '.') {
                int val2 = board[j][i] - '0';
                freqVecCol[val2]++;
                if(freqVecCol[val2] > 1) return false;
            }
        }
        // Reset frequency vectors for the next row/column set
        freqVecRow.assign(10, 0);
        freqVecCol.assign(10, 0);
    }

        unordered_map<string, unordered_set<int>> gridMap;
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                string colRow = to_string(i/3) + "-" + to_string(j/3);
                if(board[i][j] == '.')
                    continue;

                int val = board[i][j] - '0';
                auto result = gridMap[colRow].insert(val);
                if(!result.second)
                    return false;                    
            }            
        }
        return true;
    }
};
