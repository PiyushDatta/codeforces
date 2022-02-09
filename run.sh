# exit when any command fails
set -e
# keep track of the last executed command
trap 'last_command=$current_command; current_command=$BASH_COMMAND' DEBUG
# echo an error message before exiting
trap 'echo && echo "\"${last_command}\" command failed with exit code $?."' EXIT

echo "Current dir:"
pwd

echo "Making directory 'out' if it doesn't exists.."
mkdir -p out

echo "Compiling file main.cc..."
echo "Running command: g++ -std=c++14 -o out/main.exe main.cc"
g++ -std=c++14 -o out/main.exe main.cc
echo "Compiled successfully, running main.exe"
./out/main.exe

echo "Compiling file check.cc..."
echo "Running command: g++ -std=c++14 -o out/check.exe check.cc"
g++ -std=c++14 -o out/check.exe check.cc
echo "Compiled successfully, running check.exe"
./out/check.exe
