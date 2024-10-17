from collections import defaultdict

def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
    adj = defaultdict(list)
    for u, v in prerequisites:
        adj[u].append(v)
    
    UNVISITED = 0
    VISITING = 1
    VISITED =2
    state = [UNVISITED for i in range(numCourses)]

    def dfs(node):
        if state[node] == VISITING: return False
        elif state[node] == VISITED: return True
        state[node] = VISITING
        for nb in adj[node]:
            if not dfs(nb): return False
        state[node] = VISITED
        return True

    for node in range(numCourses):
        if not dfs(node): return False

    return True