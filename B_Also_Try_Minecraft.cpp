#include <bits/stdc++.h>
using namespace std;

// comment out if the submission DOES NOT require you take multiple test cases
// #define _MULTIPLE_TEST_CASES true
// comment out if the submission DOES NOT require you to print the case number
// #define _PRINT_CASE_NUMBER true
// comment out when submitting submission
// #define _USE_INPUT_OUTPUT_FILES true

/*
=================================
THIS IS WHERE YOUR ALGO GOES
=================================
*/
void solve() {
  int n = 0;
  int m = 0;

  cin >> n;
  cin >> m;
  vector<int> col(n);

  for (int i = 0; i < n; ++i) {
    cin >> col[i];
  }

  vector<pair<int, int>> quests(m);

  for (int i = 0; i < m; ++i) {
    int s = 0;
    int t = 0;
    cin >> s;
    cin >> t;
    // -1 since we are 0-indexed
    quests[i] = {s - 1, t - 1};
  }

  vector<long long> left_to_right(n, 0);
  vector<long long> right_to_left(n, 0);

  for (int i = 1; i < n; ++i) {
    left_to_right[i] = left_to_right[i - 1] + max(0, col[i - 1] - col[i]);
  }

  for (int i = n - 2; i >= 0; --i) {
    right_to_left[i] = right_to_left[i + 1] + max(0, col[i + 1] - col[i]);
  }

  for (int i = 0; i < m; ++i) {
    int start = quests[i].first;
    int end = quests[i].second;

    if (start < end) {
      // cout << left_to_right[end] << " || " << left_to_right[start] << " || ";
      cout << abs(left_to_right[end] - left_to_right[start]) << endl;
    } else {
      // cout << right_to_left[end] << " || " << right_to_left[start] << " || ";
      cout << abs(right_to_left[end] - right_to_left[start]) << endl;
    }
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

#ifdef _USE_INPUT_OUTPUT_FILES
  // for getting input from input.txt file
  freopen("old_way_to_run/input.txt", "r", stdin);
  // printing the output to output.txt file
  freopen("old_way_to_run/my_ans.txt", "w", stdout);
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
