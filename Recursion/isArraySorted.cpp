#include <bits/stdc++.h>
using namespace std;

bool isArraySorted(int a[],int size){
    if(size == 0 || size == 1)
        return true;

    if(a[0] > a[1])
        return false;
    bool smallOutput = isArraySorted(a+1,size-1); // a is a pointer to the first element of the array
    return smallOutput;
    
}

int main(int argc, char const *argv[])
{

    return 0;
}
