#!/data/data/com.termux/files/usr/bin/bash

echo "=== Daily Build - $(date) ==="
cd ~/my_c_projects

# Run automated build
./auto_build.sh

# Check if build was successful
if [ $? -eq 0 ]; then
    # Add to git
    git add .
    git commit -m "Daily build: $(date '+%Y-%m-%d')"
    git push
    echo "✅ Daily build completed and pushed"
else
    echo "❌ Build failed - check build.log"
fi
