#include<iostream>
using namespace std;

template <typename currentType>
currentType fibonacci(currentType);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

template <typename currentType>
currentType fibonacci(currentType x)
{
    if (x == 1 || x == 0) return x;
    else if( x > 1)
    {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
    else return 0;
}
