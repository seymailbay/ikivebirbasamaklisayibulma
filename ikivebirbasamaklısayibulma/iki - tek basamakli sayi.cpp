// elemanlar�ndan ka� tanesinin bir basamakl�, ka� tanesinin iki basamakl�, ka� tanesinin de �� basamakl� oldu�unu bulan C program�n� yaz�n�z.
#include <iostream>
using namespace std;
int main () {
	int dizi[]= { 12,1,10,50,3};
	int i,bir_bas,iki_bas;
	
	for(i=0; i<5; i ++){
		if (dizi[i] >= 10){
			iki_bas += 1;
		}
		if(dizi[i] <9){
			bir_bas += 1;
		}
	}
	
	cout << bir_bas << ends< "bir basamakl� sayi " << iki_bas << "tane iki basamakli sayi var ";
}
