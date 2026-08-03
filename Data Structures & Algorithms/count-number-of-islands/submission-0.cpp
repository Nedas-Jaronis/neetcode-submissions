class Solution {
public:
    void bfs(vector<vector<char>> & grid, int r, int c){
    if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] != '1') return;

    grid[r][c] = '0';
    bfs(grid, r-1, c);
    bfs(grid, r+1, c);
    bfs(grid, r, c-1);
    bfs(grid, r, c+1);
    }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int r = 0; r < grid.size(); r++){
            for(int c = 0; c < grid[0].size(); c++){
                if(grid[r][c] == '1'){
                    count++;
                    bfs(grid, r, c);
                }
            }
        }



        return count;
    }
};
