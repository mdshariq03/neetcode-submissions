class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int maxA = 0;
        while (left < right){
            int area = 0;
            if(heights[left] < heights[right]){
                area = heights[left] * (right - left);
                left++;
            }else{
                area = heights[right] * (right - left);
                right--;
            }
            if(area > maxA)
                maxA = area;
        }
        return maxA;
    }
};
