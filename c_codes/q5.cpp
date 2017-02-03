#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, A[10000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(&A[0], &A[n]);
    if (n % 2)
        cout << 2 * A[n / 2] << endl;
    else
        cout << A[n / 2 - 1] + A[n / 2] << endl;
}
