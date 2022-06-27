// elemanlarýndan kaç tanesinin bir basamaklý, kaç tanesinin iki basamaklý, kaç tanesinin de üç basamaklý olduðunu bulan C programýný yazýnýz.
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
	
	cout << bir_bas << ends< "bir basamaklý sayi " << iki_bas << "tane iki basamakli sayi var ";
}
