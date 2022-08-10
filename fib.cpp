#include <iostream>

using namespace std;

int fib(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }

    return fib(n-1) + fib(n-2);
}

main(){
    int n;

    cin>>n;

    cout<<"Fibonacci No.: "<<fib(n)<<endl;

    return 0;
}