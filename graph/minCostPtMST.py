def minCostConnectPoints(self, points: List[List[int]]) -> int:
    seen =set()
    n = len(points)
    cost = 0
    frontier = [(0, 0)]

    while len(seen) < n:
        dist, i = heapq.heappop(frontier)
        if i in seen: continue
        seen.add(i)
        xi, yi = points[i]
        cost += dist

        for j in range(n):
            if j not in seen:
                xj, yj = points[j]
                dist = abs(xj-xi) + abs(yj-yi)
                heapq.heappush(frontier, (dist, j))

    return cost