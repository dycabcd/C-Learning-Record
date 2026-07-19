#include <iostream>
using namespace std;

int main() {
    int w;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> w;
    for (int i = 0; i < 12; i++) {
        if ((w + 11) % 7 + 1 == 5) cout << i + 1 << ' ';
        w = (w + days[i] - 1) % 7 + 1;
    }
    return 0;
}
