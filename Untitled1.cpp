/*
Nama: Mohammad Dhikri
Kelas: A
*/
#include <iostream>
using namespace std;
void fizzbuzz(int n){
	cout<<"Angka : "; cin>>n;
	for(int i=1; i<=n; i++){
		if(i%3==0 && i%5==0){
			cout<<"fizz buzz"<<endl;
		}
		else if(i%3==0){
			cout<<"fizz"<<endl;
		}
		else if(i%5==0){
			cout<<"buzz"<<endl;
		}
		else{
			cout<<i<<endl;
		}
	}
}
main(){
	int n;
	fizzbuzz(n);
}
