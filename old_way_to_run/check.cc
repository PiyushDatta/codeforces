// cpp test file
#include <bits/stdc++.h>
using namespace std;

// Driver program to test above function
int main() {
  // optional performance optimizations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // check sol
  cout << endl;
  cout << "Checking solutions..." << endl << endl;
  ifstream my_ans_file("my_ans.txt");
  string my_ans_str;
  ifstream solution_file("output.txt");
  string solution_str;
  int test_counter = 1;

  while (getline(my_ans_file, my_ans_str) &&
         getline(solution_file, solution_str)) {
    cout << test_counter++ << ": ";
    if (solution_str != my_ans_str) {
      cout << "WRONG! expected answer: " << solution_str
           << " , got answer: " + my_ans_str << endl;
    } else {
      cout << "Correct." << endl;
    }
  }
  return 0;
}
