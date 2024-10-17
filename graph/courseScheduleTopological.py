def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
    adj = defaultdict(list)
    for u,v in prerequisites:
        adj[u].append(v)
    
    unvisited = 0
    visiting = 1
    visited = 2
    state = [unvisited for i in range(numCourses)]
    order = []

    def dfs(i):
        if state[i] == visited: return True
        elif state[i] == visiting: return False
        
        state[i] = visiting
        for nb in adj[i]:
            if not dfs(nb):
                return False
        order.append(i)
        state[i] = visited
        return True
    
    for node in range(numCourses):
        if not dfs(node):
            return []

    return order