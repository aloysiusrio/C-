#include<iostream>
using namespace std;

struct date
{

}

struct nilai
{
    char nim[5];
    char nama[30];
    struct date tgl,bln,thn;
    int nilai;
};

struct nilai matematika[100];

// int main(){

// //     int x;
// //     for(x=1;x<=5;x++){
// //         cout<<"data ke-"<<x+1<<endl;
// //     cout<<"Inputkan NIM : ";
// //         cin>>matematika[x].nim;
// //     cout<<"Inputkan Nama : ";
// //         cin>>matematika[x].nama;
// //     cout<<"Inputkan Nilai : ";
// //         cin>>matematika[x].nilai;
// //     cout<<endl;
// //     }

// //     return 0;
// // }

// int main(){

//     int x=1,y,i;
//     char jawab;
//     int rata,totnilai;
//     do
//     {
//         cout<<"data ke-"<<x<<endl;
//     cout<<"Inputkan NIM : ";
//         cin>>matematika[x].nim;
//     cout<<"Inputkan Nama : ";
//         cin>>matematika[x].nama;
//     cout<<"Inputkan Nilai : ";
//         cin>>matematika[x].nilai;
//     cout<<endl;
//     totnilai=totnilai+matematika[x];
//     x++;
//     cout<<"ada data lagi[Y/T] : ";
//     cin>>jawab;
//     }
//     while(jawab=='y' || jawab=='Y');
//     rata=totnilai/(x-1);
//     cout<<endl<<endl;

//     cout<<"Daftar nilai matematika : "<<endl;
//     for(y=1;y<x;y++)
//     {
//         cout<<y<<" "<<matematika[y].nim;
//         cout<<" "<<matematika[y].nama;
//         if(rata>matematika[y].nilai)
//             cout<<matematika[y].nilai<<"REMIDI";
//         else
//             cout<<" "<<matematika[y].nilai;
//         cout<<endl;
//     }
//     return 0;
// }




struct date;
{
    int tgl,bln,thn;
};
struct date now;

void tnaggalnya(struct date x)
{
    if(x.bln==1)
        cout<<x.tgl<<"Januari"<<" "<<x.thn;
    if(bln==2)
        cout<<x.tgl<<"Februari"<<" "<<x.thn;
    if(bln==3)
        cout<<x.tgl<<"Maret"<<" "<<x.thn;
    if(bln==4)
        cout<<x.tgl<<"April"<<" "<<x.thn;
    if(bln==5)
        cout<<x.tgl<<"Mei"<<" "<<x.thn;
    if(bln==6)
        cout<<x.tgl<<"Juni"<<" "<<x.thn;
    if(bln==7)
        cout<<x.tgl<<"Juli"<<" "<<x.thn;
    if(bln==8)
        cout<<x.tgl<<"Agustus"<<" "<<x.thn;
    if(bln==9)
        cout<<x.tgl<<"September"<<" "<<x.thn;
    if(bln==10)
        cout<<x.tgl<<"Oktober"<<" "<<x.thn;
    if(bln==11)
        cout<<x.tgl<<"November"<<" "<<x.thn;
    if(bln==12)
        cout<<x.tgl<<"Desember"<<" "<<x.thn;
}

void besok(struct date x)
{
    x.tgl++
    tanggalnya(x);
}

void kemarin(struct date x)
{
    x.tgl--
    tanggalnya(x);
}


// int main()
// {
//     now.tgl=14;
//     now.bln=9;
//     now.thn=2022;
//     cout<<"Sekarang tanggal : "<<tanggalnya(now);
//     cout<<endl;
//     cout<<"besok tanggal : "<<besok(now);
//     cout<<endl;
//     cout<<"kemarin tanggal : "<<kemarin(now);

//     return 0;
// }