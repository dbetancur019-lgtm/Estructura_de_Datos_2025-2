#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char t[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
bool turno;


void jugadaJugador() {
    int p;
    while(true) {
        cout <<"Tu turno (1-9):";
        cin >> p;
        if(p >=1&& p <=9&& t[p-1] ==' ') {
            t[p-1] ='X';
            break;
        }
    }
}

void jugadaPC() {
    int p;
    while(true) {
        p =rand() %9;
        if(t[p] ==' ') {
            t[p] ='O';
            cout <<"La computadora eligio la posicion "<< p+1<<"\n";
            break;
        }
    }
}

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

