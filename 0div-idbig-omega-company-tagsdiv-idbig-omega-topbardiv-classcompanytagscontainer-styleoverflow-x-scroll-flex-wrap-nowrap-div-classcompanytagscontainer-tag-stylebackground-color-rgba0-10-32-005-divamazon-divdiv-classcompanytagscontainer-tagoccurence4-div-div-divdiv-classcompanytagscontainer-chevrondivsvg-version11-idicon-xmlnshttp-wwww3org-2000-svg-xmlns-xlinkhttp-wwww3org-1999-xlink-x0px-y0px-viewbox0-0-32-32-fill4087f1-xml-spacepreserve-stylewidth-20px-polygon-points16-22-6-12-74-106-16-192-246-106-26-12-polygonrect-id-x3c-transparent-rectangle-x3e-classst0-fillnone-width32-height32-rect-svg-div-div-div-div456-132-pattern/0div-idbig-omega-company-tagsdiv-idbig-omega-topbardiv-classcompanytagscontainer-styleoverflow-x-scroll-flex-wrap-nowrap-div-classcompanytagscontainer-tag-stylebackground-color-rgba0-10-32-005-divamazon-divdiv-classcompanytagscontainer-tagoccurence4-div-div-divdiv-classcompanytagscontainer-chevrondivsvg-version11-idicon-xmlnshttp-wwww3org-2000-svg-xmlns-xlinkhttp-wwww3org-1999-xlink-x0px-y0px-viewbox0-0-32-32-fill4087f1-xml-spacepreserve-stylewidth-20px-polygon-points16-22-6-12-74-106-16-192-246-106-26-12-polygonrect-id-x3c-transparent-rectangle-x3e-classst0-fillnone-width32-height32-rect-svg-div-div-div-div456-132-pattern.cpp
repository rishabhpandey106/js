class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n < 3)
            return false;
        
        // for(int i=0 ;i<n ;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(nums[i] < nums[j])
        //         {
        //             for(int k=j+1;k<n;k++)
        //             {
        //                 if(nums[k] < nums[j] && nums[k] > nums[i])
        //                 {
        //                     cout << nums[i] << nums[j] << nums[k] << " ";
        //                   return true;
        //                 }
        //             }
        //         }
        //     }
        // }
        // return false;
        set<int> numSet;
        vector<int> minPrefix(n);
        
        minPrefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            minPrefix[i] = min(minPrefix[i - 1], nums[i]);
        }
        
        for (int j = n - 1; j >= 0; j--) {
            if (nums[j] > minPrefix[j]) {
                auto it = numSet.upper_bound(minPrefix[j]);
                if (it != numSet.end() && *it < nums[j]) {
                    return true;
                }
            }
            
            numSet.insert(nums[j]);
        }
        
        return false;
    }
};