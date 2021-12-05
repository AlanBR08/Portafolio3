#include <iostream>
using namespace std;
 
int main()
{

    int num=1, cont=0;
    float suma=0;
       
    while (num!=0, cont<5)
    {
cout<<"Introduzca un numero: "<<endl;
cin>>num;
suma=suma+num;

if(num!=0){
	cont=cont+1;
}


    }
 cout<<"El promedio o es "<<suma/cont<<endl;
system("pause");
return 0;
}
