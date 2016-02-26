#include <iostream>
#include <cstdlib>
using namespace std;
 
int main()  // int-integer (liczba calkowita)
{
                    //  0 1 2 3 4 element tablicy liczony zawsze od 0 (zera) czyli pierwszy element to 0, drugi to 1 itp
    int tablica [5] = {12,3,6,5,356}; //zdefiniowana tablica z 5 elementami z góry zdefiniowanymi wartosciami
	
	cout << "liczba w pierwszej komorce tablicy to: " << tablica [0] << endl; // tab [0] to 1 element tablicy
	cout << "liczba w drugiej komorce tablicy to: " << tablica [1] << endl;   // tab [1] to 2 element tablicy
	cout << "liczba w trzeciej komorce tablicy to: " << tablica [2] << endl;  // i tak dalej
	cout << "liczba w czwartej komorce tablicy to: " << tablica [3] << endl;
	cout << "liczba w piatej komorce tablicy to: " << tablica [4] << endl << endl;
	// jesli bedziemy chcieli zrobić to samo dla nieistniejacej komorki tab [5] wyjdzie to:
	// cout << endl << "liczba w szostej (nieistniejacej) komorce tablicy to: " << tablica [5] << endl << endl << endl; 
	// pokazuje jakas komorke pamieci poza tablica, moze to byc komorka pamieci przypisana innemu programowi lub jakakolwiek 
	
	system ("pause");	
return 0;
}
