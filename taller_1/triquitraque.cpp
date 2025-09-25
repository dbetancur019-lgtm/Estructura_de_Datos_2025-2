#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char t[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
bool turno;

int main() {
    srand(time(0));
    cout <<"Bienvenido a Triqui\n";
    cout <<"Eres la X\n";
    turno =rand() %2;
    if(turno) {
        cout <<"Empiezas tu\n";
    } else {
        cout <<"Empieza la computadora\n";
    }
    cout <<"Así están organizadas las posiciones:\n";
    if(!turno) {
        jugadaPC();
        turno = true;
    }
}
