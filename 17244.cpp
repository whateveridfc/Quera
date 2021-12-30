
#include <iostream>
using namespace std;

int main()
{
    int k, i, sum ;
    cin >> k;
    sum = 0;
    for (i = 0; i <= k; i++) {
        sum += i;
    }
    cout << sum;
}

