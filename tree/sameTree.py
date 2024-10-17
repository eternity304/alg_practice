def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
    identical = [True]

    def check(p, q):
        if p is None and q is None:
            return True
        elif (p is None and q is not None) or (p is not None and q is None):
            identical[0] = False
            return False
        elif p.val != q.val:
            identical[0] = False
            return False
        
        if not check(p.left, q.left):
            identical[0] = False
            return False
        elif not check(p.right, q.right):
            identical[0] = False
            return False
        
        return True
    
    check(p,q)
    return identical[0]