#include <iostream>
using namespace std;

int funktio(int maara, int t[]) {
    int pienin = INT_MAX;
    for (int i = 0; i < maara; i++) {
        if (t[i] < pienin) {
            pienin = t[i];
        }

    } 
    
    // Jos pienin on suurempi kuin 2 niin voi tehdä aina ykkösen
    if (pienin > 2) {
        return pienin;
    }

    for (let i = 0; i<maara; i++) {
        int luku = t[i];

        pienin = luku + toinen luku 
    }

    //tehdään uusi taulukko, josta voi poistaa,
    //tehdään taas uusi taulukko, johon lisätään pienimmästä suurimpaan
    //nyt taulukko on kasvavassa järjestyksessä
    //tehdään vielä yksi taulukko, ja tähän lisätään sen mukaan kun saadaan uusia pieniä numeroita yhteissummista?
    //pienimmän taulukon pienin+toiseksi_pienin < taulukon pienin+toiseksi pienin+kolmanneksi pienin


    //sen jälkeen käydään toisessa silmukassa numeroita läpi 1,2,3,4,5,6,....
    //ja toisessa silmukassa tutkitaan onko eroavaisuuksia, kaikki numerot pitäisi löytyä, jos ei löydy



    // TAI


    // tehokas järjestäminen pienestä isompaan (= kasvava_t)
    // rullataan lukuja 1,2,3,4,5,.... jne
    // jos tulee luku, joka ei mätsää kasvava_t:hen niin koitetaan toteuttaa tutkimalla kasvava_t taulukkoa, JOS EI LÖYDY NIIN PALAUTETAAN TÄMÄ
    // esim. kasvava_t[i] + kasvava_t[i+1] <= luku 


int main() {
    int maara = 10;
    int kolikot [] = {23, 2, 19, 2324, 14234, 55353, 43534, 23413, 12313, 123};
    int vastaus = funktio(maara, kolikot);
    cout << vastaus;
}