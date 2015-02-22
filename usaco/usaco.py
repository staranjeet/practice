#!/usr/bin/python
import sys


if sys.argv[1]:
	name=sys.argv[1]
else:
	name='trial'
filename=name+'.cpp'
f1=open(filename,'w')


string='''
/*
ID: reachto1
PROG: %s
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("test.out");
    ifstream fin ("test.in");
    int a, b;
    fin >> a >> b;
    fout << a+b << endl;
    return 0;
}
''' % (name)
f1.write(string)
f1.close()
