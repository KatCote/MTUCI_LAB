### bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

echo "\n"
toilet Laboratory Work --gay -f smbraille
echo "\n"

if clang++ -o laba.out main.cpp;
then
	echo "${GREEN}Compile Successful${NC}\n"
	chmod +x laba.out
	./laba.out
else
	echo "\n${RED}Compile Failed${NC}\n"
fi
