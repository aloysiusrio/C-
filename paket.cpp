#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

struct paket{
    char jenis_barang[30];
    int berat;
    char kota[30];
};

struct paket kirim[100];

void gotoxy(){
    COOR coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursor
}

void tambahdata(int x){
    cout<<"Data ke-"<<x<<endl;
    cout<<"Masukkan Jenis Barang : ";
    cin>>kirim[x].jenis_barang;
    cout<<"Masukkan Berat Barang : ";
    cin>>kirim[x].berat;
    cout<<"Masukkan Kota Tujuan  : ";
    cin>>kirim[x].kota;
    cout<<endl<<endl;
}

void tampildata(int x){
    cout<<"Daftar Kiriman Paket"<<endl;
    for(int a=1; a<x; a++){
        cout<<endl;  
    }
    cout<<endl<<endl;
    cout<<"Press any key to continue"<<endl;
}

void hapusdata(int x){
    cout<<"Data Terakhir yang akan dihapus adalah : "<<endl;
    cout<<kirim[x-1].jenis_barang;
}

int main(){

    int pilih;
    int datake=1;
    do
    {
        cout<<"Menu Utama"<< endl;
        cout<<"1. Tambah Data"<< endl;
        cout<<"2. Hapus data Terakhir"<<endl;
        cout<<"3. Tampil Data"<< endl;
        cout<<"9. Keluar"<< endl;
        cout<<"Pilihan Anda [1-9] : ";
        cin>>pilih;
        if(pilih==1){
            tambahdata (datake);
            datake++;
        }
        if(pilih==2){
            hapusdata(datake);
            datake--;
        }
        if(pilih==3){
            tampildata(datake);
        }
    }
    while(pilih!=9);

    return 0;
}