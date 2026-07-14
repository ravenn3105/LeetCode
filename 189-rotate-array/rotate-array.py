class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        s= len(nums) 
        k= k%(s)

        l1= nums[s-k:s] 
        nums2= l1+ nums[0:s-k] 
        nums[:]=nums2
        