#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> numsSet;
        for(auto num : nums){
            if(!numsSet.contains(num)) {
                numsSet.insert(num);
            } else {
                return true;
            }
        }
        return false;
    }
};