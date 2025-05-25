#!/bin/bash

echo "Starting cleanup..."

sed -i.bak '/alias cd="osascript -e .*say .*Lock your.*screen"/d' ~/.zshrc 2>/dev/null
sed -i.bak '/alias cd="osascript -e .*say .*Lock your.*screen"/d' ~/.bashrc 2>/dev/null

unalias cd 2>/dev/null

pkill -f "osascript -e set Volume" 2>/dev/null

rm -f ~/masterplan.sh

osascript -e "set volume output volume 50"

echo "Cleanup complete. Please restart your terminal or run 'source ~/.zshrc'."
