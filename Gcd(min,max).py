from math import gcd
class Solution:
    def findGCD(self, nums):
        mini= min(nums)
        maxi = max(nums)
        return gcd(maxi, mini)
    
    ''' Python 2 doesnt supports importing gcd 
    
class Solution(object):
    def gcd(self,a, b):
        while (b != 0):
            temp = b
            b = a % b
            a = temp
        return a
    def findGCD(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        mini= min(nums)
        maxi = max(nums)

        return self.gcd(maxi, mini)
      
          '''