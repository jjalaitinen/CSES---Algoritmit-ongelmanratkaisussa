#include <iostream>
using namespace std;

int funktio(int pituus_t, int t[]) {
    int missa_mennaan = 0;
    int kierrokset = 0;
    while (true) {
        if (missa_mennaan == pituus_t) {
            break;
        }
        for (int i = 0; i < pituus_t; i++) {
            if (t[i] == missa_mennaan+1) {
                missa_mennaan++;
            }
        }
        kierrokset++;

    }
    return kierrokset;
}

int main() {
    int t [] = {1, 2, 3, 4, 5};
    int pituus = sizeof(t)/sizeof(t[0]);
    int kierrokset = funktio(pituus, t);
    cout << kierrokset;
}