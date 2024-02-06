class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        d={}
        for i in strs:
            s= ''.join(sorted(i))
            if s in d:
                d[s].append(i)
            else: 
                d[s]=[i]
        return list(d.values())

            