#include <vector>
using namespace std;
class Solution {
public:
    /**
     * 给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。
     * 找出那个只出现了一次的元素。 不使用额外空间
     */
    int singleNumber(vector<int>& nums) {

        for (int i = 1; i < nums.size(); i++) {
            nums[0]^=nums[i];
        }
        return nums[0];
        
    }
};