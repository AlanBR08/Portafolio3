#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() { 
	int movJug;
	cout << " Nombre del alumno: Alan Bryan Reyes Gonz�lez \n";
	cout << "Juguemos a piedra, papel, tijera, lagarto o spock, selecciona tu movimiento \n";
	cout << " 1. Piedra \n 2. Papel \n 3. Tijera \n 4. Lagarto \n 5. Spock : ";
	
	cin >> movJug;
	srand(time(0));
	string movComp;
	
	int numMov = rand() % 5 + 1;
	
	switch(numMov){
		case 1:
			movComp = "Piedra";
			break;
		case 2:
			movComp = "Papel";
			break;
		case 3:
			movComp = "Tijera";
			break;
		case 4:
			movComp = "Lagarto";
			break;
		case 5:
			movComp = "Spock";
			break;
	}
	
	cout << "La computadora escogio: " << movComp << endl;
	if (movJug == numMov){
		cout << " Empate \n";
	} else if ( (movJug == 1) && (numMov == 3)){
		cout << " Ganaste \n ";
	} else if ( (movJug == 2) && (numMov == 1)){
		cout << " Ganaste \n ";
	} else if ( (movJug == 3) && (numMov == 2)){
		cout << " Ganaste \n ";
	} else if ( (movJug == 4) && (numMov == 5)){
		cout << "Ganaste \n ";
	} else if ((movJug == 5) && (numMov == 3)){
		cout << "Ganaste \n ";
	} else if ((movJug == 1) && (numMov == 4)){
		cout << "Ganaste \n ";
	} else if ((movJug == 3) && (numMov == 4)){
		cout << "Ganaste \n ";
	} else if ((movJug == 4) && (numMov == 2)){
		cout << " Ganaste \n ";
	} else if ((movJug == 2) && (numMov == 5)){
		cout << " Ganaste \n ";
	} else if ((movJug == 5) && (numMov == 1)){
		cout << " Ganaste \n ";
	} 
	
	else {
		cout << "Perdiste \n ";
	}
	
	return 0;
	
	
}
