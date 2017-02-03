#include <iostream>
#include <string>
using namespace std;

int countSetBits(char n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    int sol = 0;
    string s;
    getline(cin, s);
    int n = s.size();
    for (int i = 0; i < n; i++) {
        sol += countSetBits(s[i]);
    }
    cout << sol << endl;
    return 0;
}
