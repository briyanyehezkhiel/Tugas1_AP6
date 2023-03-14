#include <iostream>
using namespace std;

int main()
{
    system("sleep");
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n;
    cin >> n;
    a = ~n;          // not
    b = n >> 1;      // shr
    c = n % 2;       // Mod
    d = 0001 & 0010; // and
    e = 0101 | 1010; // or
    f = n << 1;      // shl
    cout << "a : " << a << "b : " << b << "c : " << c << "d : " << d << "e : " << e << endl;
    cout << "f : " << f << endl;
}