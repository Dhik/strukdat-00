/*
Nama: Mohammad Dhikri
npm: 140810180075
tanggal pembuatan: 26 Februari 2019
Deskripsi: Convert celcius to fahrenheit
Kelas: A
*/
#include <iostream>
using namespace std;
typedef int larik[10];
void average(larik lrk, int n){
	int hasil=0;
	cout<<"Masukan nilai: "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Data : "; cin>>lrk[i];
	}
	for(int i=0; i<n; i++){
		hasil+=lrk[i];
	}
	hasil/=n;
	cout<<hasil;
}
main(){
	larik lrk;
	int n;
	average(lrk, n);
}
