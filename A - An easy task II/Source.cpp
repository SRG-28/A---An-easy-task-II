#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    int result = (N % 2 == 0) ? N : N * 2;
    cout << result;
    return 0;
}