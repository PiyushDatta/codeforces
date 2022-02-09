#include <bits/stdc++.h>
using namespace std;

// uncomment this line when submitting
#define _MY_TEST_FILES true
// uncomment if the submission DOES NOT require you take multiple test cases
#define _MULTIPLE_TEST_CASES true
// uncomment if the submission DOES NOT require you to print the case number
// #define _PRINT_CASE_NUMBER true

/*
=================================
THIS IS WHERE YOUR ALGO GOES
=================================
*/
void solve() {
  int n = 0;
  int m = 0;
  int k = 0;
  cin >> n;
  cin >> m;
  cin >> k;

  vector<vector<int>> board(n, vector<int>(m, 0));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> board[i][j];
    }
  }

  int curr_houses = 0;
  vector<vector<int>> modified_board(n, vector<int>(m, 0));

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (board[i][j] == 1) {
        curr_houses++;
        // bfs
        queue<pair<int, int>> q;
        vector<vector<int>> seen(n, vector<int>(m, 0));
        int orig_i = i;
        int orig_j = j;
        q.push({i, j});
        seen[i][j] = 1;
        while (!q.empty()) {
          int r = q.front().first;
          int c = q.front().second;
          q.pop();
          seen[r][c] = 1;

          int dist[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

          for (int d = 0; d < 4; ++d) {
            int new_r = r + dist[d][0];
            int new_c = c + dist[d][1];

            if (new_r >= n || new_r < 0 || new_c >= m || new_c < 0)
              continue;
            if (seen[new_r][new_c] || board[new_r][new_c] == 1)
              continue;
            if (abs(new_r - orig_i) > k || abs(new_c - orig_j) > k)
              continue;
            seen[new_r][new_c] = 1;
            modified_board[new_r][new_c]++;
            q.push({new_r, new_c});
          }
        }
      }
    }
  }
  int res = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (modified_board[i][j]) {
        ++res;
      }
    }
  }

  cout << res << endl;
}
/*
=================================
ABOVE IS WHERE YOUR ALGO GOES
=================================
*/

int main(int argc, char const *argv[]) {
  // optional performance optimizations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifdef _MY_TEST_FILES
  // for getting input from input.txt file
  freopen("input.txt", "r", stdin);
  // printing the output to output.txt file
  freopen("my_ans.txt", "w", stdout);
#endif

#ifdef _MULTIPLE_TEST_CASES
  // keep this, testcases
  int t = 0;
  cin >> t;

  // now we can run our algo
  for (int i = 1; i <= t; ++i) {
#ifdef _PRINT_CASE_NUMBER
    cout << "Case #" << i << ": ";
#endif
    solve();
  }
#else
  solve();
#endif

  return 0;
}
