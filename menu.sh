#!/data/data/com.termux/files/usr/bin/bash

# Simple menu system
while true; do
    clear
    echo "=== C Program Runner ==="
    echo "1. Run Basic Number Printer"
    echo "2. Run Enhanced Number Printer" 
    echo "3. Build All Programs"
    echo "4. View Project Files"
    echo "5. Exit"
    echo -n "Choose an option (1-5): "
    
    read choice
    case $choice in
        1)
            echo "Running Basic Number Printer..."
            ./bin/number_printer
            ;;
        2)
            echo "Running Enhanced Number Printer..."
            ./bin/enhanced_printer
            ;;
        3)
            echo "Building all programs..."
            ./build.sh
            ;;
        4)
            echo "Project files:"
            ls -la src/
            echo "Executables:"
            ls -la bin/
            ;;
        5)
            echo "Goodbye!"
            exit 0
            ;;
        6)
            echo "Invalid option!"
            ;;
        7)
            echo "Running String Operations..."
            ;;
    esac
    
    echo -n "Press Enter to continue..."
    read
done
