class Solution:
    def numEnclaves(self, grid: List[List[int]]) -> int:
        def detectFlood(grid, row, col):
            if row < 0 or row >= len(grid) or col < 0 or col >= len(grid[0]):
                return
            if grid[row][col] == 0:
                return
            
            grid[row][col] = 0
            detectFlood(grid, row, col - 1)
            detectFlood(grid, row, col + 1)
            detectFlood(grid, row - 1, col)
            detectFlood(grid, row + 1, col)

            
        for row in range(len(grid)):
            detectFlood(grid, row, 0)
            detectFlood(grid, row, len(grid[0]) - 1)
        for col in range(len(grid[0])):
            detectFlood(grid, 0, col)
            detectFlood(grid, len(grid) - 1, col)
        
        count = 0
        for row in range(len(grid)):
            for col in range(len(grid[0])):
                if grid[row][col] == 1:
                    count += 1
        
        return count