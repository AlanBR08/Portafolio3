#include <iostream>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <string>

//prototipos
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);

int main(){
	using namespace std;
	
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador();
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador(movimientoComputadora, movimientoJugador);
	
	return 0;
}
//implementacion
std::string generarMovimientoComputadora(){
	std::string movimiento;
	int numeroAleatorio;
	
	//genero numero aleatorio
	srand(time(0));
	numeroAleatorio=rand()%3+1;
	
	switch(numeroAleatorio){
		case 1:
			movimiento="piedra";
			break;
		case 2:
			movimiento="papel";
			break;
		case 3:
			movimiento="tijera";
			break;
		case 4:
			movimiento="lagarto";
			break;
		case 5:
			movimiento="spock";
			break;
	}std::cout<<"Computadora: "<< movimiento<<"\n";
	return movimiento;
}

std::string obtenerMovimientoJugador(){
	using namespace std;
	string movimiento;
	
	cout<<"Alan Bryan Reyes González \n";
	cout<<"******Bienvenido a: piedra, papel, tijera, lagarto o spock****** \n ";
	cout<<"Escriba una opcion: ";
	cin>>movimiento;
	
	return movimiento;
}

void determinarGanador(std::string computadora, std::string jugador){
	if (computadora==jugador){
		std::cout<<"Empate!\n";
	}else if(jugador=="piedra"){
		procesarEntradaJugadorPiedra(computadora);
	}else if(jugador=="papel"){
		procesarEntradaJugadorPapel(computadora);
	}else if(jugador=="tijera"){
		procesarEntradaJugadorTijera(computadora);
	}else if(jugador=="lagarto"){
		procesarEntradaJugadorLagarto(computadora);
	}else if(jugador=="spock"){
		procesarEntradaJugadorSpock(computadora);
	}else{
		std::cout<<"Entrada no valida. Ingrese piedra, papel, tijera, lagarto o spock.\n";
	}	
}

void procesarEntradaJugadorPiedra(std::string computadora){
	if(computadora=="papel"){
		std::cout<<"La computadora gana. Papel cubre piedra.\n";
	}else if(computadora=="tijera"){
		std::cout<<"Usted gana. Piedra rompe tijera.\n";
	}else if(computadora=="lagarto"){
		std::cout<<"Usted gana. Piedra aplasta al lagarto.\n";
	}else if(computadora=="spock"){
		std::cout<<"La computadora gana. Spock desintegra la piedra.\n";
	}
}

void procesarEntradaJugadorPapel(std::string computadora){
	if(computadora=="piedra"){
		std::cout<<"Usted gana. Papel cubre piedra.\n";
	}else if(computadora=="tijera"){
		std::cout<<"La computadora gana. Tijera corta papel.\n";
	}else if(computadora=="lagarto"){
		std::cout<<"La computadora gana. Lagarto devora al papel.\n";
	}else if(computadora=="spock"){
		std::cout<<"Usted gana. Papel desaprueba a Spock\n";
	}
}

void procesarEntradaJugadorTijera(std::string computadora){
	if(computadora=="piedra"){
		std::cout<<"La computadora gana. piedra aplasta tijeras.\n";
	}else if(computadora=="papel"){
		std::cout<<"Usted gana. Tijera corta papel.\n";
	}else if(computadora=="lagarto"){
		std::cout<<"Usted gana. Las tijeras decapitan al lagarto.\n";
	}else if(computadora=="spock"){
		std::cout<<"La computadora gana. Spock aplasta tijeras.\n";
	}
}

void procesarEntradaJugadorLagarto(std::string computadora){
	if(computadora=="piedra"){
		std::cout<<"La computadora gana. Piedra aplasta a lagarto.\n";
	}else if(computadora=="papel"){
		std::cout<<"Usted gana. Lagarto devora al papel.\n";
	}else if(computadora=="tijera"){
		std::cout<<"La computadora gana. Tijeras decapitan a lagarto.\n";
	}else if(computadora=="spock"){
		std::cout<<"Usted gana. Lagarto envenena a spock.\n";
	}
}

void procesarEntradaJugadorSpock(std::string computadora){
	if(computadora=="piedra"){
		std::cout<<"Usted gana. Spock desintegra la piedra.\n";
	}else if(computadora=="papel"){
		std::cout<<"La computadora gana. Papel desaprueba a Spock.\n";
	}else if(computadora=="tijera"){
		std::cout<<"Usted gana. Spock aplasta tijeras.\n";
	}else if(computadora=="lagarto"){
		std::cout<<"La computadora gana. Lagarto envenena a spock.\n";
	}
}
