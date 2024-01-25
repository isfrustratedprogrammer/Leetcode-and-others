class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftPointer = 0;
        int rightPointer = height.size() - 1;
        int result = 0;
        while(leftPointer<rightPointer) {
            int intHeight = min(height[leftPointer], height[rightPointer]);
            int wide = rightPointer - leftPointer;
            result = max(result, intHeight * wide);
            if(height[leftPointer] < height[rightPointer]) {
                leftPointer++;
            }
            else {
                rightPointer--;
            }
        }
        return result;
    }
};