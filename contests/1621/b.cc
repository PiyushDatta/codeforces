// https://codeforces.com/contest/1621/problem/B
#include <bits/stdc++.h>
using namespace std;

// uncomment this line when submitting
// #define _MY_TEST_FILES true
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
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(3, 0));

  for (int i = 0; i < n; ++i) {
    cin >> arr[i][0];
    cin >> arr[i][1];
    cin >> arr[i][2];
  }
  int min_cost = INT_MAX;
  int l = INT_MAX;
  int l_cost = INT_MAX;
  int r = INT_MIN;
  int r_cost = INT_MAX;

  for (int i = 0; i < n; ++i) {
    int left = arr[i][0];
    int right = arr[i][1];
    int cost = arr[i][2];

    if (l > left) {
      l = left;
      l_cost = INT_MAX;
      min_cost = INT_MAX;
    } 

    if (r < right) {
      r = right;
      r_cost = INT_MAX;
      min_cost = INT_MAX;
    }

    if (l == left) {
      l_cost = min(l_cost, cost);
    }

    if (r == right) {
      r_cost = min(r_cost, cost);
    }
    
    if (left == l && right == r) {
      min_cost = min(min_cost, cost);
    }

    cout << min(min_cost, l_cost + r_cost) << endl;
  }
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
