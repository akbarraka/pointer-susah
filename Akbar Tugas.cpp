#include<iostream>
using namespace std;
int main ()
{
	system("title POINTER ") ;
	double pengeluaran,pemasukan,tabungan,total;
	double *a=&pengeluaran;
	double *b=&pemasukan;
	double *c=&tabungan;
	double *d=&total;
	
	cout<<"pengeluaran bulan ini : ";
	cin>>pengeluaran;
	cout<<"pemasukan bulan ini : ";
	cin>>pemasukan;
	cout<<"tabungan bulan ini : ";
	cin>>tabungan;
	total = (pengeluaran+pemasukan+tabungan)/3;
	if (5000000<=total&&total<=10000000){
		cout<<"pengeluaran bulan ini = "<< *a<<endl;
	cout<<"pemasukan bulan ini = "<< *b<<endl;
	cout<<"tabungan bulan ini = "<< *c<<endl;
	cout<<" total bulan ini = "<< *d<<endl;
	cout<<"ANDA HEMAT"<<endl;
	
	}
	if (1000000<=total&&total<=4999999){
		cout<<"pengeluaran bulan ini = "<< *a<<endl;
	cout<<"pemasukan bulan ini = "<< *b<<endl;
	cout<<"tabungan bulan ini = "<< *c<<endl;
	cout<<"Nilai total = "<< *d<<endl;
	cout<<"ANDA KURANG HEMAT"<<endl;
	
	}
	
	system ("pause");
	system("cls");
	return 0;
}

