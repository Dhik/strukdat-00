/*
Nama: Mohammad Dhikri
npm: 140810180075
tanggal pembuatan: 26 Februari 2019
Deskripsi: Convert celcius to fahrenheit
Kelas: A
*/
#include <iostream>
using namespace std;
float conversionterm(float n, float& hasil){
	cout<<"Masukan suhu celcius: ";cin>>n;
	hasil=n*9/5;
	hasil+=32;
	cout<<hasil;
}
main(){
	float n, hasil;
	conversionterm(n, hasil);
}
