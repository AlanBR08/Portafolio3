#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

int main(){
	int a, b, c;
	double area, sp;
printf("Ingrese el lado A: \n");
cin>>a;

printf("Ingrese el lado B: \n");
cin>>b;
printf("Ingrese la base: \n");
cin>>c;

if (a== b && b == c){
	printf("El triangulo es Equilatero\n");
	area = (sqrt(3)/4)*pow(a,2);
	cout << "y su area es: " << area << " cm cuadrados " << endl;
}
else{
	if(a == b && a != c && b !=c ){
		printf("El triangulo es Isosceles\n");
		area = ((b)*(sqrt(pow(a,2)-(pow(b,2)/4))))/2;
		cout << "y su area es: " << area << " cm cuadrados " << endl;
	}
	else{
		if ( a != b && a != c && c != b){
			printf("El triangulo es Escaleno\n");
			sp = (a+b+c)/2;
			
			area = sqrt(sp*((sp-a)*(sp-b)*(sp-c)));
			cout << "y su area es: " << area << " cm cuadrados " << endl;
			
			
		}
	}
}
system("pause");
}


