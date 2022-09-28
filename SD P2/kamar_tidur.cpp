#include <iostream>
using namespace std;

int luaskam(int a, int b){
    int luas = a*b;
    return luas;
}

int luasker(int a, int b){
    int luas=a*b;
    return luas;
}


int main(){
//luas kamar
int pkam,lkam;
cout<<"Masukkan Panjang Kamar : ";
cin>>pkam;
cout<<"Masukkan Lebar Kamar : ";
cin>>lkam;

cout<<"Luas Kamar adalah : ";
cout<<luaskam(pkam,lkam);
cout<<endl<<endl;

//luas keramik
int pker,lker;
cout<<"Masukkan Panjang Keramik : ";
cin>>pker;
cout<<"Masukkan Lebar Keramik : ";
cin>>lker;

cout<<"Luas Keramik adalah : ";
cout<<luasker(pker,lker);
cout<<endl<<endl;

//jumlah keramik
int jmlker =luaskam(pkam,lkam)/luasker(lker,pker);
cout<<"Jumlah keramik yang dibutuhkan adalah : "<<jmlker;
cout<<endl<<endl;

//banyak dus keramik yang ahrus dibeli
int keramik;
cout<< "Banyak keramik dalam satu dus : ";
cin>>keramik;

int dus= jmlker/keramik;
cout<<"banyak dus yang harus dibeli: "<< dus;
cout<<endl;

//Uang yang dikeluarkan untuk membeli
int uang;
cout<<"Harga keramik per dus : ";
cin>>uang;

int bayar=uang*dus;
cout<<"uang yang harus dibayarkan adalah "<< bayar <<endl; 

    return 0;
}