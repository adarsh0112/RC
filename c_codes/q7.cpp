#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        int f = s[i] - 'a', l = s[n - i - 1] - 'a';
        if (f < 0 || f > 25 || l < 0 || l > 25) {
            cout << "Wrong format" << endl;
            exit(1);
        }
        s[i] = ((f + l + 26) % 26) + 'a';
        s[n - i - 1] = ((l - f + 26) % 26) + 'a';
    }
    cout << s << endl;
    return 0;
}
