#include <bits/stdc++.h>
using namespace std;

// uncomment this line when submitting
// #define _MY_TEST_FILES true
// uncomment if the submission DOES NOT require you take multiple test cases
// #define _MULTIPLE_TEST_CASES true
// uncomment if the submission DOES NOT require you to print the case number
// #define _PRINT_CASE_NUMBER true

/*
=================================
THIS IS WHERE YOUR ALGO GOES
=================================
*/
void solve() {
  vector<pair<char, int>> res(3);
  res[0] = {'A', 0};
  res[1] = {'B', 0};
  res[2] = {'C', 0};

  for (int i = 0; i < 3; ++i) {
    string tmp = "";
    cin >> tmp;

    // >
    char char_greater = tmp[0];
    char char_lesser = tmp[2];

    if (tmp[1] == '<') {
      swap(char_greater, char_lesser);
    }

    switch (char_greater) {
    case 'A':
      res[0].second += 1;
      break;
    case 'B':
      res[1].second += 1;
      break;
    case 'C':
      res[2].second += 1;
      break;
    }

    switch (char_lesser) {
    case 'A':
      res[0].second += 2;
      break;
    case 'B':
      res[1].second += 2;
      break;
    case 'C':
      res[2].second += 2;
      break;
    }
  }

  sort(res.begin(), res.end(), [&](pair<char, int> &a, pair<char, int> &b) {
    return a.second > b.second;
  });

  if (res[0].second == res[1].second || res[0].second == res[2].second ||
      res[1].second == res[2].second) {
    cout << "Impossible" << endl;
    return;
  }
  for (pair<char, int> i : res) {
    cout << i.first;
  }
  cout << endl;
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
