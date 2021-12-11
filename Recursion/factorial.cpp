#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0)
        return 1;

    int smallOutput = factorial(n-1);
    return n * smallOutput;
}

int main(int argc, char const *argv[])
{
    int output = factorial(10);
    cout<<output<<endl;
    return 0;
}
