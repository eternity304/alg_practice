def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
    def has_sum(i, curr_sum):
        if i is None: return False
        curr_sum += i.val
        if i.left is None and i.right is None: return curr_sum == targetSum

        return has_sum(i.left, curr_sum) or has_sum(i.right, curr_sum)
        
    return has_sum(root, 0)