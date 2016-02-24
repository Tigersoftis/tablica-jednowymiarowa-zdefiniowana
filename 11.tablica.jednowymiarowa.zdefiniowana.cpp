#include <iostream>
using namespace std;
 
int main() 
{
                //  0 1 2 3 4 element tablicy liczony zawsze od 0 (zera) czyli pierwszy element to 0, drugi to 1 itp
    int tablica [5] = {12,3,6,5,6}; //zdefiniowana tablica z 5 elementami z góry zdefiniowanymi wartosciami
	
	cout << "liczba w pierwszej komorce tablicy to: " << tablica [0] << endl; // tab [0] to 1 element tablicy
	cout << "liczba w drugiej komorce tablicy to: " << tablica [1] << endl;   // tab [1] to 2 element tablicy
	cout << "liczba w trzeciej komorce tablicy to: " << tablica [2] << endl;  // i tak dalej
	cout << "liczba w czwartej komorce tablicy to: " << tablica [3] << endl;
	cout << "liczba w piatej komorce tablicy to: " << tablica [4] << endl;
	// jesli bedziemy chcieli zrobiæ to samo dla nieistniejacej komorki tab [5] wyjdzie to:
	cout << endl << "liczba w szostej (nieistniejacej) komorce tablicy to: " << tablica [5] << endl; // dlaczego taka dziwna liczba?
	
	// dlaczego z tym mi sie nie kompiluje? -  system ("pause");	
return 0;
}

