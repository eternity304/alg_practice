def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
    longest = [0]

    def longestPath(i):
        if i is None: return 0

        leftDepth = longestPath(i.left)
        rightDepth = longestPath(i.right)

        if (leftDepth + rightDepth + 1) > longest[0]:
            longest[0] = leftDepth + rightDepth + 1
        
        return max(leftDepth, rightDepth) + 1

    longestPath(root)
    return longest[0] - 1