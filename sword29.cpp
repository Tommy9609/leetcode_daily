class Solution {
private:
	vector<pair<int, int>> direct = {
		{0,1},{1,0},{0,-1},{-1,0}
	};
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0) {
            return {};
        }
		int row = matrix.size();
		int col = matrix[0].size();   //define size of matrix
		int i = 0, j = 0, changetimes = 0;
		int allnums = row * col;
		int dir = 0, lastdir = 0;

		vector<vector<bool>> visited(row, vector<bool>(col,false));
		vector<int> ans;
		while (1) {
			if (i < row&&i >= 0 && j < col&&j >= 0&& !visited[i][j]) {
				ans.push_back(matrix[i][j]);
				visited[i][j] = true;
			}
			else if (ans.size() == allnums) {
				break;
			}
			else {
				lastdir = changetimes%4;
				i -= direct[lastdir].first;
				j -= direct[lastdir].second;
				changetimes++;
				dir=changetimes%4;
			}
			i += direct[dir].first;
			j += direct[dir].second;
		}

		return ans;
	}
};
