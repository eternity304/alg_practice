def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
    if root is None:
        return []

    out = []
    frontier = deque()
    frontier.append(root)

    while len(frontier):
        level = []

        for i in range(len(frontier)):
            curr = frontier.popleft()
            level.append(curr.val)
            if curr.left: frontier.append(curr.left)
            if curr.right: frontier.append(curr.right)
        
        out.append(level.copy())
    
    return out