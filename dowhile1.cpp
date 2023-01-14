#include <iostream>
using namespace std;

int main(){
	char ulangi = 'y';
	int i = 0;
	
	//perulangan while
	do{
		cout<<"Apakah kamu mau mengulang?\n";
		cout<<"Jawab (y/t) : ";
		cin >> ulangi;
		
		//increment i
		i++;
	} while (ulangi == 'y');
	
	cout <<"perulangan selesai!\n";
	cout <<"Kamu mengulang sebanyak " <<i << "kali \n";
}