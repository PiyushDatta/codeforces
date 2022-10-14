# Codeforces

Just my codeforces submissions

Profile: https://codeforces.com/profile/data_pi

Setup: https://github.com/PiyushDatta/competitive_programming_setup

Current training: https://docs.google.com/spreadsheets/d/1iJZWP2nS_OB3kCTjq8L6TrJJ4o-5lhxDOyTaocSYc-k/edit#gid=84654839

## How to use

1. If you don't have vscode or aren't using vscode, see deprecated how to use section
2. On vscode use extension - [Competitive Programming Helper (cph)](https://marketplace.visualstudio.com/items?itemName=DivyanshuAgrawal.competitive-programming-helper)
3. On google chrome download extension - [Competitive Companion](https://chrome.google.com/webstore/detail/competitive-companion/cjnmckjndlpiamhfimnnjmnckgghkjbl)
4. Now on any codeforces page or other competitive programming page, it'll load up the test cases and file on your vscode. All you need to do is write code now.
5. You can use the template from `setup.cc` to get started. Enjoy!

# DEPRECATED

## How to use -- the following files are in folder old_way_to_run

1. Copy `template.cc` into `main.cc`
2. Put your algo into `void solve() {}`
3. Fill out `old_way_to_run/input.txt` with whatever inputs given by problem
   - First input in this file can be # of test cases
4. Fill out `old_way_to_run/output.txt` with whatever outputs given by problem
5. Run `./run.sh` to see how your algo did!

**When submitting**

Make sure to comment out these lines if neccessary (for codeforces, comment out all of them):

```
// comment out this line when submitting
#define _MY_TEST_FILES true
// comment out if the submission DOES NOT require you take multiple test cases
#define _MULTIPLE_TEST_CASES true
// comment out if the submission DOES NOT require you to print the case number
#define _PRINT_CASE_NUMBER true
```
