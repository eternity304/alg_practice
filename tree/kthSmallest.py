def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        out = []

        def levelOrder(i):
            if i is None: 
                return
            if i.left: 
                levelOrder(i.left)
            out.append(i.val)
            if i.right: 
                levelOrder(i.right)
            return 
        
        levelOrder(root)
        return out[k-1]