/*
Nama: Mohammad Dhikri
npm: 140810180075
tanggal pembuatan: 26 Februari 2019
Deskripsi: Convert celcius to fahrenheit
Kelas: A
*/
#include <iostream>
using namespace std;
void swap(int & a, int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
main(){
		int x, y;
	cout<<"x :";cin>>x;
	cout<<"y :";cin>>y;
	swap(x, y);
	cout<<"After swap"<<endl;
	cout<<"x :"<<x<<endl;
	cout<<"y :"<<y;
}
