#!/data/data/com.termux/files/usr/bin/bash

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Log file
LOG_FILE="build.log"
BUILD_DATE=$(date '+%Y-%m-%d %H:%M:%S')

echo -e "${BLUE}=== Automated Build System ===${NC}"
echo "Build started at: $BUILD_DATE"
echo "Log file: $LOG_FILE"

# Function to log messages
log_message() {
    echo "[$(date '+%H:%M:%S')] $1" | tee -a $LOG_FILE
}

# Create directories if they don't exist
mkdir -p bin obj

# Build each C file
log_message "Starting build process..."
SUCCESS_COUNT=0
FAIL_COUNT=0

for file in src/*.c; do
    if [ -f "$file" ]; then
        program_name=$(basename "$file" .c)
        log_message "Building: $program_name"
        
        # Special flags for specific programs
        case $program_name in
            "scientific_calculator")
                clang "$file" -o "bin/$program_name" -lm
                ;;
            *)
                clang "$file" -o "bin/$program_name"
                ;;
        esac
        
        if [ $? -eq 0 ]; then
            echo -e "${GREEN}✅ SUCCESS: $program_name${NC}" | tee -a $LOG_FILE
            ((SUCCESS_COUNT++))
        else
            echo -e "${RED}❌ FAILED: $program_name${NC}" | tee -a $LOG_FILE
            ((FAIL_COUNT++))
        fi
    fi
done

# Summary
log_message "Build completed: $SUCCESS_COUNT successful, $FAIL_COUNT failed"

# Test the programs
if [ $SUCCESS_COUNT -gt 0 ]; then
    log_message "Running quick tests..."
    
    echo -e "\n${YELLOW}=== Quick Tests ===${NC}"
    
    # Test number printer (first 5 numbers)
    echo "Testing number_printer:"
    ./bin/number_printer | head -5
    
    # Test calculator
    echo -e "\nTesting calculator:"
    echo -e "10\n+\n5" | ./bin/calculator 2>/dev/null || echo "Calculator test skipped"
    
    # Test string operations
    echo -e "\nTesting string_operations (reverse):"
    echo -e "1\nHello World\n9" | ./bin/string_operations 2>/dev/null | grep "Reversed" || echo "String test skipped"
    
    log_message "Quick tests completed"
fi

# Final status
if [ $FAIL_COUNT -eq 0 ]; then
    echo -e "${GREEN}🎉 All builds successful!${NC}"
else
    echo -e "${RED}⚠️  $FAIL_COUNT build(s) failed${NC}"
fi

echo "Build log saved to: $LOG_FILE"
