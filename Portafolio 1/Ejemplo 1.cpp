#include <iostream>
#include <limits>

using namespace std; 

int main(){
	int imin = numeric_limits<int>::min();
	int imax = numeric_limits<int>::max();
	
	cout << " imin = " << imin << endl;
	cout << " imax = " << imax << "\n";
	cout << " tamanio de int : " << sizeof(int) << endl;
	
	float fmin = numeric_limits<float>::min();
	float fmax = numeric_limits<float>::max();
	
	cout << " fmin = " << imin << endl;
	cout << " fmax = " << imax << "\n";
	cout << " tamanio de float : " << sizeof(float) << endl;
	
	char cmin = numeric_limits<char>::min();
	char cmax = numeric_limits<char>::max();
	
	cout << " cmin = " << cmin << endl;
	cout << " cmax = " << cmax << endl;
	cout << " tamanio de char : " << sizeof(char) << endl;
	
	double dmin = numeric_limits<double>::min();
	double dmax = numeric_limits<double>::max();
	
	cout << " dmin = " << imin << endl;
	cout << " dmax = " << imax << endl;
	cout << " tamanio de double : " << sizeof(double) << endl;
	
	long double ldmin = numeric_limits<double>::min();
	long double ldmax = numeric_limits<double>::max();
	
	cout << " ldmin = " << ldmin << endl;
	cout << " ldmax = " << ldmax << endl;
	cout << " tamanio de long double : " << sizeof(long double) << endl;
	
	short smin = numeric_limits<short>::min();
	short smax = numeric_limits<short>::max();
	
	cout << " smin = " << smin << endl;
	cout << " smax = " << smax << endl;
	cout << " tamanio de short : " << sizeof(short) << endl;
	
	long lmin = numeric_limits<long>::min();
	long lmax = numeric_limits<long>::max();
	
	cout << " lmin = " << lmin << endl;
	cout << " lmax = " << lmax << endl;
	cout << "tamanio de long : " << sizeof(long) << endl;
	
	signed short ssmin = numeric_limits<signed short>::min();
	signed short ssmax = numeric_limits<signed short>::max();
	
	cout << " ssmin = " << ssmin << endl;
 	cout << " ssmax = " << ssmax << endl;
 	cout << "tamanio de signed short : " << sizeof(signed short) << endl;
 	
 	unsigned short usmin = numeric_limits<unsigned short>::min();
	unsigned short usmax = numeric_limits<unsigned short>::max();
	
	cout << " usmin = " << usmin << endl;
	cout << " usmax = " << usmax << endl;
	cout << "tamanio de unsigned short : " << sizeof(unsigned short) << endl;

	signed int simin = numeric_limits<signed int>::min();
	signed int simax = numeric_limits<signed int>::max();
	
	cout << " simin = " << simin << endl;
	cout << " simax = " << simax << endl;
	cout << "tamanio de signed int : " << sizeof(signed int) << endl;

	unsigned int uimin = numeric_limits<unsigned int>::min();
	unsigned int uimax = numeric_limits<unsigned int>::max();
	
	cout << " uimin = " << uimin << endl;
	cout << " uimax = " << uimax << endl;
	cout << "tamanio de unsigned int : " << sizeof(unsigned int) << endl;
	
 	signed long slmin = numeric_limits<signed long>::min();
	signed long slmax = numeric_limits<signed long>::max();
	
	cout << " slmin = " << slmin << endl;
	cout << " slmax = " << slmax << endl;
	cout << "tamanio de signed long : " << sizeof(signed long) << endl;
	
	unsigned long ulmin = numeric_limits<unsigned long>::min();
	unsigned long ulmax = numeric_limits<unsigned long>::max();
	
	cout << " ulmin = " << ulmin << endl;
	cout << " ulmax = " << ulmax << endl;
	cout << "tamanio de unsigned long : " << sizeof(unsigned long) << endl;
	
	signed char scmin = numeric_limits<signed char>::min();
	signed char scmax = numeric_limits<signed char>::max();
	
	cout << " scmin = " << scmin << endl;
	cout << " scmax = " << scmax << endl;
	cout << "tamanio de signed char : " << sizeof(signed char) << endl;
	
	unsigned char ucmin = numeric_limits<unsigned char>::min();
	unsigned char ucmax = numeric_limits<unsigned char>::max();
	
	cout << " ucmin = " << ucmin << endl;
	cout << " ucmax = " << ucmax << endl;
	cout << "tamanio de unsigned char : " << sizeof(unsigned char) << endl;
	
	bool bmin = numeric_limits<bool>::min();
	bool bmax = numeric_limits<bool>::max();
	
	cout << " bmin = " << bmin << endl;
	cout << " bmax = " << bmax << endl;
	cout << " tamanio de bool : " << sizeof(bool) << endl;
	
	wchar_t wcmin = numeric_limits<wchar_t>::min();
	wchar_t wcmax = numeric_limits<wchar_t>::max();
	
	cout << " wcmin = " << wcmin << endl;
	cout << " wcmax = " << wcmax << endl;
	cout << " tamanio de wchar_t : " << sizeof(wchar_t) << endl;
 	
 
	
	return 0;
}
