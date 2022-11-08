#include <iostream>
using namespace std;

int funktio(int pituus_t, int t[]) {
    int muutokset = 0;
    bool ei_ole_jarjestyksessa = true; 
    while(ei_ole_jarjestyksessa) {
        for (int i=0; i<pituus_t; i++) {
        if (t[i] > t[i+1]) {
            ei_ole_jarjestyksessa = true;
            muutokset++;
            t[i+1]++;
            i=0;
        } else {
            ei_ole_jarjestyksessa = false;
        }
    }
}
return muutokset;
} 

int main() {
    
    int taulu [] = {1, 2, 5, 7, 17};
    int pituus = sizeof(taulu)/sizeof(taulu[0]);
    int vastaus = funktio(pituus, taulu);
    cout << vastaus;
}