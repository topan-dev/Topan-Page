cp install/system.cpp .
g++ system.cpp -std=c++14 -O2 -o .system.out
rm -v system.cpp
./.system.out
rm -v .system.out
