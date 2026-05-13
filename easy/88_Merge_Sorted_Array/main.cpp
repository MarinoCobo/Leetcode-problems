#include <vector>
 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(size_t j = 0; j < n; j++)
        {
            nums1[m+j] = nums2[j];
        }
        for(size_t i = 0; i < nums1.size(); i++)
        {
            for(size_t x = 0; x < nums1.size() - 1 - i; x++)
            {
                if(nums1[x]>nums1[x+1])
                {
                    int temp = nums1[x];
                    nums1[x] = nums1[x+1];
                    nums1[x+1] = temp;
                }
            }
        
        }
    }
};
