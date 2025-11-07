#!/bin/bash

echo "=== Setting Up Author and License ==="

# Create AUTHORS file
cat > AUTHORS << 'EOF'
# Authors of this project

Mariganesham <your-email@example.com>

## Contributors
- Mariganesham - Project creator and main developer
- Add your name here if you contribute
EOF

# Create LICENSE (MIT)
cat > LICENSE << 'EOF'
MIT License

Copyright (c) 2024 Mariganesham

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
EOF

# Update README.md with author info
if [ -f README.md ]; then
    # Check if author section already exists
    if ! grep -q "Author" README.md; then
        # Add author section to top of README
        sed -i '1i\## Author\n**Mariganesham**  \n- GitHub: [Mariganesham](https://github.com/Mariganesham)  \n- Email: your-email@example.com\n\n' README.md
    fi
else
    # Create README if it doesn't exist
    cat > README.md << 'EOF'
# My C Projects Collection

## Author
**Mariganesham**  
- GitHub: [Mariganesham](https://github.com/Mariganesham)  
- Email: your-email@example.com

## Description
A collection of C programs for learning and practice.

## Programs
- Number Printer
- Enhanced Number Printer
- Fibonacci Generator
- Simple Calculator

## Usage
```bash
./build.sh
./menu.sh

