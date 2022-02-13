#include <bits/stdc++.h>
using namespace std;

// comment out this line when submitting
// #define _MY_TEST_FILES true
// comment out if the submission DOES NOT require you take multiple test cases
// #define _MULTIPLE_TEST_CASES true
// comment out if the submission DOES NOT require you to print the case number
// #define _PRINT_CASE_NUMBER true

/*
=================================
THIS IS WHERE YOUR ALGO GOES
=================================
*/

void solve() {
  int n = 0;
  int m = 0;
  cin >> n;
  unordered_map<int, int> nums;
  for (int i = 0; i < n; ++i) {
    int num = 0;
    cin >> num;
    nums[num] = i;
  }
  cin >> m;
  vector<int> search_nums(m, 0);
  for (int i = 0; i < m; ++i) {
    cin >> search_nums[i];
  }

  // 0 - n
  long long v = 0;
  // n - 0
  long long p = 0;
  for (int i = 0; i < m; ++i) {
    v += (nums[search_nums[i]] + 1);
    p += (n - nums[search_nums[i]]);
  }

  cout << v << " " << p << endl;
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
