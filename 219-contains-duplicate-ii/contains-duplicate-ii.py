class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        d={}
        for i in range(len(nums)):
            num = nums[i]
            if num in d and abs(i - d[num]) <= k:
                return True
            d[num] = i

        return False


        