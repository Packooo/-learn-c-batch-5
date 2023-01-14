#include <iostream>
using namespace std;

int main(){
	int i, n;
	float nilai, rata, jml=0, kali=1;
	cout<<"input banyak nilai = ";
	cin>>n;
	
	for(i=1; i<=n; i++){
		cout<<"Input nilai "<<i <<" = ";
		cin>>nilai;
		jml += nilai;
		//jml= jml+nilai;
		kali *= nilai;
		//kali = kali * nilai;
		rata=jml/n;
	}
	cout <<"\nTotal nilai = " <<jml;
	cout <<"\nTotal perkalian = " <<kali;
	cout <<"\nRata nilai = " <<rata;
}