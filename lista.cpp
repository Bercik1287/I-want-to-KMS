#include <iostream>
using namespace std;


struct Wezel {
    int dane;
    Wezel* poprzedni;
    Wezel* nastepny;
    
    Wezel(int wartosc) : dane(wartosc), poprzedni(nullptr), nastepny(nullptr) {}
};

class ListaDwukierunkowa {
private:
    Wezel* przod;
    Wezel* tyl;
    
public:
    ListaDwukierunkowa() : przod(nullptr), tyl(nullptr) {}
    void dodajZPrzodu(int wartosc) {
        Wezel* Wezel2 = new Wezel(wartosc);
        if (!przod) {
            przod = tyl = Wezel2;
        } else {
            Wezel2->nastepny = przod;
            przod->poprzedni = Wezel2;
            przod = Wezel2;
        }
    }

int main() {
    
    return 0;
}