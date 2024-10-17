def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
    adj = defaultdict(list)
    time = {}
    frontier = [(0,k)]

    for u, v, t in times:
        adj[u].append((v, t))

    while len(frontier) > 0:
        t, i = heapq.heappop(frontier)
        if i in time.keys(): continue
        else: time[i] = t

        for nb, ti in adj[i]:
            if nb not in time.keys(): heapq.heappush(frontier, (ti+t, nb))
        
    if len(time) == n: return max(time.values())
    else: return -1