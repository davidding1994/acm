#! /usr/bin/env python3
import sys,os
main_text = \
'''#include <bits/stdc++.h>
using namespace std;
%s
int main()
{
    Solution s;
    s.solve();
    return 0;
}
''' % open(sys.argv[1]).read()
with open('leetcode.main.cpp','w') as f:
    f.write(main_text)
os.system('g++ -g leetcode.main.cpp -o test.exe')
print('compile success')
os.system('./test.exe')

