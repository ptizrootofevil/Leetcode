class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        product = 1
        zeros = 0
        for i in nums:
            if i != 0:
                product *= i
            else:
                zeros +=1

        res = []

        for i in range(len(nums)):
            if nums[i] == 0 and zeros == 1:
                res.append(int(product))
            elif zeros >= 1:
                res.append(0)
            else:
                res.append(int(product / nums[i]))
        
        return res

        
