#!/data/data/com.termux/files/usr/bin/bash

echo "=== Daily C Practice ==="
date
echo ""

# Run each program briefly
echo "1. Testing Number Printer (first 10 numbers):"
./bin/number_printer | head -10

echo ""
echo "2. Testing Fibonacci (first 15 numbers):"
echo "15" | ./bin/fibonacci

echo ""
echo "3. Project Status:"
echo "C files: $(ls src/*.c | wc -l)"
echo "Executables: $(ls bin/* | wc -l)"

echo ""
echo "Practice complete! 🎉"
