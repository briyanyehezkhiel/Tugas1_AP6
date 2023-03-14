#include <iostream>
using namespace std;

int main()
{
    system("CLS");
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n;
    cout << "Masukkan angka : " << endl;
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