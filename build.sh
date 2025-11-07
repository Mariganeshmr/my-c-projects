#!/bin/bash
echo "Building C projects..."

# Compile all C files in src directory
for file in src/*.c; do
    if [ -f "$file" ]; then
        filename=$(basename "$file" .c)
        echo "Compiling $filename..."
        clang "$file" -o "bin/$filename"
    fi
done

echo "Build complete! Executables are in bin/"
