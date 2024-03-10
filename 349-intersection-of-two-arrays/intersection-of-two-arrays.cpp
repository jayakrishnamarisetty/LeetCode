#include <vector>
#include <unordered_set>

class Solution {
public:
    vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        vector<int> v;
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        for (int rug : s1) {
            if (s2.count(rug))
                v.push_back(rug);
        }
        return v;
    }
};
