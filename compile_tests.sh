#!/bin/bash
# delete all test programs
rm -f ./tests/*.out
# Compile all test programs
for file in ./tests/*.c; do
    echo "Compiling $file"
    gcc -g -Wno-format -Wall -Werror -Wextra -pedantic -std=gnu89 $file *.c -o "${file%.c}.out"
done

# Run all test programs and save output to a log file
echo "Running tests..."
echo "" > test.log
for file in ./tests/*.out; do
    echo "Running $file ---------------------------------------" >> test.log
    ./"$file" >> test.log
done

echo "Tests complete. Check test.log for output."
