class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        vector<int> left = {0};
        vector<int> right = {0};
        
        for(int i = 1; i <= k; i++) {
            left.push_back(left[i-1] + cardPoints[i-1]);
        }
        
        for(int i = 1; i <=k; i++) {
            right.push_back(cardPoints[n - i] + right[i-1]);
        }
        
        
        int maxSum = 0;
        for(int i = 0; i <= k; i++) {
            maxSum = max(maxSum, left[i] + right[k - i]);
        }
        
        return maxSum;
        
        
    }
};
