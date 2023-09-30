class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n < 3)
            return false;
        
        stack<int> s;
        int third = INT_MIN; // # 2
        
        for (int i = n - 1; i >= 0; i--) { // 2 4 1 3
            if (nums[i] < third) {
                return true;
            }
            
            while (!s.empty() && nums[i] > s.top()) {
                third = s.top();
                s.pop();
            }
            
            s.push(nums[i]); // 4
        }
        
        return false;
    }
};