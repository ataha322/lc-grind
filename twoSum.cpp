#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_multimap<int, int> map;   //num -> index
        
        for (int i = 0; i < nums.size(); i++) {
            int want = target - nums[i];
            
            auto it = map.find(want);
            
            if (it != map.end()) {
                return {i, it->second};
            } else {
                map.insert(make_pair(nums[i], i));
            }
            
        }
        
        return {};
    }
};