class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> rug;
        for (int num : nums) {
            rug[num]++;
        }

        int maxFrequency = 0;
        for (const auto& entry : rug) {
            maxFrequency = max(maxFrequency, entry.second);
        }

        int maxFreqElements = 0;
        for (const auto& entry : rug) {
            if (entry.second == maxFrequency) {
                maxFreqElements++;
            }
        }

        int totalFrequency = maxFrequency * maxFreqElements;

        return totalFrequency;
    }
};