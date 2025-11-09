# My C Projects Collection

A collection of C programs for learning and practice, built in Termux for Android.

## 📋 Project Overview

This repository contains multiple C programs demonstrating fundamental programming concepts, all compiled and tested in Termux on Android mobile devices.

## 👨‍💻 Author
**Mariganesham**  
- GitHub: [Mariganesham](https://github.com/Mariganesham)  
- Email: mariganesh.bme@gmail.com

## 📜 License
This project is licensed under the **GNU General Public License v3.0** - see the [LICENSE](LICENSE) file for details.

## 🚀 Programs Included

### 1. **Number Printer** (`number_printer`)
- Prints numbers from 1 to 400
- Demonstrates basic loops and output

### 2. **Enhanced Number Printer** (`enhanced_printer`)
- Advanced number printing with user options
- Custom ranges, steps, even/odd filtering
- Reverse number printing

### 3. **Fibonacci Generator** (`fibonacci`)
- Generates Fibonacci sequences
- User-defined sequence length
- Demonstrates recursion and algorithms

### 4. **Simple Calculator** (`calculator`)
- Basic arithmetic operations (+, -, *, /)
- Error handling for division by zero
- Clean user interface

### 5. **String Operations** (`string_operations`)
- Multiple string manipulation functions
- Reverse, case conversion, palindrome check
- Word counting and character frequency

### 6. **Scientific Calculator** (`scientific_calculator`)
- Advanced mathematical operations
- Trigonometric functions (sin, cos, tan)
- Power, square root, logarithms, factorial

## 🛠️ Project Structure
my_c_projects/
├──src/                    # Source code directory
│├── number_printer.c
│├── enhanced_printer.c
│├── fibonacci.c
│├── calculator.c
│├── string_operations.c
│└── scientific_calculator.c
├──bin/                    # Compiled executables
├──build.sh               # Build script
├──auto_build.sh          # Automated build with testing
├──menu.sh                # Program menu interface
├──README.md              # This file
└──LICENSE                # GPL v3 license

## 📥 Installation & Setup

### Prerequisites
- **Termux** app installed on Android
- Basic C compiler (clang/gcc)

### Step-by-Step Setup
```bash
# Update Termux packages
pkg update && pkg upgrade

# Install C compiler
pkg install clang git

# Clone this repository
git clone https://github.com/Mariganesham/my-c-projects.git
cd my-c-projects

# Build all programs
./build.sh
```

🎯 Usage

Method 1: Interactive Menu (Recommended)

```bash
./menu.sh
```

Method 2: Run Individual Programs

```bash
# Build all programs first
./build.sh

# Run specific programs
./bin/number_printer
./bin/enhanced_printer
./bin/fibonacci
./bin/calculator
./bin/string_operations
./bin/scientific_calculator
```

Method 3: Automated Build & Test

```bash
./auto_build.sh
```

🔧 Build System

Manual Build

```bash
./build.sh
```

Automated Build with Testing

```bash
./auto_build.sh
```

📊 Features

· ✅ Mobile-Optimized: All programs run in Termux on Android
· ✅ Educational: Demonstrates core C programming concepts
· ✅ User-Friendly: Interactive menus and clear interfaces
· ✅ Well-Structured: Organized project layout
· ✅ Automated: Build scripts for easy compilation
· ✅ Open Source: GPL v3 licensed

🎓 Learning Objectives

This project covers:

· Basic C syntax and structure
· Loops and conditional statements
· Functions and modular programming
· User input and output
· String manipulation
· Mathematical operations
· File I/O and project organization
· Build automation and scripting

🤝 Contributing

Feel free to fork this project and submit pull requests for:

· New C program additions
· Bug fixes and improvements
· Enhanced documentation
· Additional features

📞 Support

If you encounter any issues:

1. Check the program compilation with ./build.sh
2. Ensure all dependencies are installed
3. Open an issue on GitHub with error details

📈 Future Enhancements

Potential additions to this collection:

· File management programs
· Data structure implementations
· Network programming examples
· Graphics and GUI programs
· Game development in C

---

⭐ If you find this project helpful, please give it a star on GitHub!

```

## To Save This README:

```bash
# Backup your current README
cp README.md README.backup.md

# Create the new README
cat > README.md << 'EOF'
[PASTE THE ENTIRE README CONTENT ABOVE HERE]
EOF
```

Or Use Nano:

```bash
nano README.md
```

Paste the content, then: Ctrl+O → Enter → Ctrl+X

Update Git:

```bash
# Add the updated README
git add README.md

# Commit the changes
git commit -m "Update README with comprehensive documentation

- Complete project overview and structure
- Detailed program descriptions
- Installation and usage instructions
- Professional formatting and organization"

# Push to GitHub
git push origin main
```