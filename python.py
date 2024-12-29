def containDuplicate(nums):
    for x in nums:
        if x == nums:
            return True
return False

containDuplicate([1,2,3])