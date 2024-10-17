def isBalanced(self, root: Optional[TreeNode]) -> bool:
        balance = [True]

        def get_height(i):
            if i == None: return 0
            
            leftDepth = get_height(i.left) + 1
            rightDepth = get_height(i.right) + 1
        
            if abs(leftDepth - rightDepth) > 1: 
                balance[0] = False
                return 0

            return max(leftDepth, rightDepth)

        get_height(root)
        return balance[0]