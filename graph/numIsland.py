def numIslands(self, grid: List[List[str]]) -> int:
        num = 0
        n = len(grid)
        m = len(grid[0])

        def dfs(i, j):
            if i >= n or i < 0 or j >= m or j < 0 or grid[i][j] == "0":
                return
                
            grid[i][j] = "0"
            dfs(i+1,j)
            dfs(i-1,j)
            dfs(i,j+1)
            dfs(i,j-1)

        for i in range(n):
            for j in range(m):
                if grid[i][j] == "1":
                    dfs(i, j)
                    num += 1
        
        return num