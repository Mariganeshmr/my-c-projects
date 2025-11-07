#!/bin/bash
echo "=== Building C Programs ==="

# Create bin directory if it doesn't exist
mkdir -p bin

# Compile each C file
for file in src/*.c; do
    if [ -f "$file" ]; then
        program_name=$(basename "$file" .c)
        echo "Compiling: $program_name"
        clang "$file" -o "bin/$program_name"
        if [ $? -eq 0 ]; then
            echo "✅ Success: bin/$program_name"
        else
            echo "❌ Failed: $program_name"
        fi
    fi
done

echo "=== Build Complete ==="
ls -la bin/
