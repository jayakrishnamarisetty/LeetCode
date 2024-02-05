class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        rug={}
        for i in s:
            if i not in rug:
                rug[i]=1
            else:
                rug[i]+=1

        for i in range(len(s)):
            if rug[s[i]]==1:
                return i
        return -1
        