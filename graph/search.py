from collections import deque

def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        seen = {source}
        adj = defaultdict(list)
        frontier = deque()
        frontier.append(source)

        for u, v in edges:
            adj[u].append(v)
            adj[v].append(u)

        while frontier:
            curr = frontier.popleft()
            if curr == destination:
                return True

            for nb in adj[curr]:
                if nb not in seen:
                    seen.add(nb)
                    frontier.append(nb)