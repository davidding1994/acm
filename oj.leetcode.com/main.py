#! /usr/bin/env python3
import sys,os
def compile_cpp(filename):
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
    ''' % open(filename).read()
    with open('leetcode.main.cpp','w') as f:
        f.write(main_text)
    os.system('''g++ -g leetcode.main.cpp -o test.exe && 
                 echo "compile success!" && 
                 ./test.exe ''')

def compile_java(filename):
    with open(filename) as fin, open('./Solution.java', 'w') as fout:
        fout.write(fin.read())
    os.system('''javac Solution.java && 
                 echo "compile success!" && 
                 java Solution''')

    
    pass

def compile_python(filename):
    pass

filetype = sys.argv[1].split('.')[-1]
if filetype == 'cpp':
    compile_cpp(sys.argv[1])
elif filetype == 'java':
    compile_java(sys.argv[1])
elif filetype == 'py':
    compile_python(sys.argv[1])
else:
    print('can not recognize this file, please check your code file name')
