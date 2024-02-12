class Solution:
    def findMedianSortedArrays(self, n1: List[int], n2: List[int]) -> float:
        n1.extend(n2)
        n1.sort()
        k=len(n1)
        if(k%2==0):
            j=float(n1[(k//2)-1])
            u=float(n1[k//2])
            ans=float((j+u)/2)
            print(j)
            print(u)
        else:
            ans=n1[k//2]
        return ans      
        