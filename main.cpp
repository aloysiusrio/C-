#include <iostream>

using namespace std;

struct peserta{
    string nama;
    int jumlah;
};

struct peserta lomba[40];

void namapeserta(int banyak, struct peserta lomba[]);
void jumlahbuah(int banyak, struct peserta lomba[]);
void rosdanpemenang(int banyak, struct peserta lomba[]);

int main()
{
    int banyak;
    cout << "Inputkan banyak peserta: "; cin>>banyak;
    for(int i=0; i<banyak; i++){
        cout << "Masukkan nama peserta ke-" << i+1 << ": "; cin>>lomba[i].nama;
        cout << "Masukkan jumlah buah peserta ke-" << i+1 << ": "; cin>>lomba[i].jumlah;
    }

    namapeserta(banyak, lomba);
    jumlahbuah(banyak, lomba);
    rosdanpemenang(banyak, lomba);
    cout << "Hello world!" << endl;
    return 0;
}

void namapeserta(int banyak, struct peserta lomba[]){
    cout << "Nama peserta: " << endl;
    for(int i=0; i<banyak; i++){
        cout << i+1 << ". " << lomba[i].nama << ", banyak buah: " << lomba[i].jumlah << endl;
    }
}

void jumlahbuah(int banyak, struct peserta lomba[]){
    int banyak1 = 0;
    for(int i=0; i<banyak; i++){
        banyak1 = banyak1 + lomba[i].jumlah;
    }
    cout << "Jumlah buah peserta: " << banyak1 << endl;
}

void rosdanpemenang(int banyak, struct peserta lomba[]){
    int ros = 0;
    for(int i=0; i<banyak; i++){
        if(lomba[i].jumlah>ros){
            ros = lomba[i].jumlah;
        }
    }
    string pemenang;
    for(int i = 0; i<banyak; i++){
        if(lomba[i].jumlah == ros){
            pemenang = lomba[i].nama;
        }
    }
    cout << "Pemenang: " << pemenang << endl;
    cout << "Buah untuk kak ros: " << ros << endl;
}
