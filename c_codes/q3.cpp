#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, ans = 0;
    cin >> a >> b;
    cout << floor(sqrt(b)) - ceil(sqrt(a)) + 1 << endl;
    return 0;
}
