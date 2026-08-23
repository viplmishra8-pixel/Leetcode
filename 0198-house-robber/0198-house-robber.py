class Solution:
    def rob(self, nums: List[int]) -> int:
        m1 = 0 
        m2 = 0 
        n = len(nums)
        for i in range( 0 , n):
            temp = m1 
            m1  = max( m2+ nums[i] , m1)
            m2 = temp
        return m1