class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int res = 0;
        int n = arr.size();
        
        for(int i = 1; i < n; i++) {
            int count = 1;
            bool flag = false;
            // Increasing Sequence
            int j = i;
            while(j < n && arr[j] > arr[j-1]) {
                j++;
                count++;
            }
            
            //Decreasing Sequence
            while(i != j && j < n && arr[j] < arr[j-1]) {
                j++;
                count++;
                flag = true;
            }
            
            //Max of length
            if(i != j && flag && count > 2) {
                res = max(res, count);
                j--;
            }
            i = j;
        }
        return res;
    }
};
