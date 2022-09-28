// YUDHA MULYANA
// A11.2021.13857
#include <iostream>
using namespace std;
struct date
{
    int tanggal,bulan,tahun;
};
struct date now;

void tanggalnya(struct date x)
{
    if(x.bulan==1)
    cout<<x.tanggal<<" januari "<<x.tahun;
    if(x.bulan==2)
    cout<<x.tanggal<<" februari "<<x.tahun;
    if(x.bulan==3)
    cout<<x.tanggal<<" maret "<<x.tahun;
    if(x.bulan==4)
    cout<<x.tanggal<<" april "<<x.tahun;
    if(x.bulan==5)
    cout<<x.tanggal<<" mei "<<x.tahun;
    if(x.bulan==6)
    cout<<x.tanggal<<" juni "<<x.tahun;
    if(x.bulan==7)
    cout<<x.tanggal<<" juli "<<x.tahun;
    if(x.bulan==8)
    cout<<x.tanggal<<" agustus "<<x.tahun;
    if(x.bulan==9)
    cout<<x.tanggal<<" september "<<x.tahun;
    if(x.bulan==10)
    cout<<x.tanggal<<" oktober  "<<x.tahun;
    if(x.bulan==11)
    cout<<x.tanggal<<" november "<<x.tahun;
    if(x.bulan==12)
    cout<<x.tanggal<<" desember "<<x.tahun;
    cout<<endl;
}

date besok(date x){
    if(x.tanggal >= 31 && (x.bulan == 1 || x.bulan == 3 || x.bulan == 5 || x.bulan == 7 || x.bulan == 8 || x.bulan == 10)){
        x.tanggal = 1;
        x.bulan = x.bulan + 1;
    }else if(x.tanggal >= 30 && (x.bulan == 4 || x.bulan == 6 || x.bulan == 9 || x.bulan == 11)){
        x.tanggal = 1;
        x.bulan = x.bulan + 1;
    }else if(x.tanggal >= 28 && x.bulan == 2){
        if(x.tahun % 4 != 0){
            x.tanggal = 1;
            x.bulan = x.bulan + 1;
        }else if(x.tanggal >= 29){
            x.tanggal = 1;
            x.bulan = x.bulan + 1;
        }else{
            x.tanggal = x.tanggal + 1;
        }
    }else if(x.tanggal >= 31 && x.bulan == 12){
            x.tanggal = 1;
            x.bulan = 1;
            x.tahun = x.tahun + 1;
    }else{
        x.tanggal = x.tanggal + 1;
    }

    return x;
    
}

date kemarin(date x){
    if(x.tanggal <= 1 && (x.bulan == 5 || x.bulan == 7 || x.bulan == 8 || x.bulan == 10 || x.bulan == 12)){
        x.tanggal = 30;
        x.bulan = x.bulan - 1;
    }else if(x.tanggal <= 1 && (x.bulan == 2 || x.bulan == 4 || x.bulan == 6 || x.bulan == 9 || x.bulan == 11)){
        x.tanggal = 31;
        x.bulan = x.bulan - 1;
    }else if(x.tanggal <= 1 && x.bulan == 3){
        if(x.tahun % 4 != 0){
            x.tanggal = 28;
            x.bulan = x.bulan - 1;
        }else if(x.tanggal <= 1){
            x.tanggal = 29;
            x.bulan = x.bulan - 1;
        }else{
            x.tanggal = x.tanggal - 1;
        }
    }else if(x.tanggal >= 1 && x.bulan == 1){
            x.tanggal = 31;
            x.bulan = 12;
            x.tahun = x.tahun - 1;
    }else{
        x.tanggal = x.tanggal - 1;
    }
    return x;
}
date lusa(date x){
    if(x.tanggal >= 31 && (x.bulan == 1 || x.bulan == 3 || x.bulan == 5 || x.bulan == 7 || x.bulan == 8 || x.bulan == 10)){
        x.tanggal = 2;
        x.bulan = x.bulan + 1;
    }else if(x.tanggal >= 30 && (x.bulan == 4 || x.bulan == 6 || x.bulan == 9 || x.bulan == 11)){
        x.tanggal = 2;
        x.bulan = x.bulan + 1;
    }else if(x.tanggal >= 28 && x.bulan == 2){
        if(x.tahun % 4 != 0){
            x.tanggal = 2;
            x.bulan = x.bulan + 1;
        }else if(x.tanggal >= 29){
            x.tanggal = 2;
            x.bulan = x.bulan + 1;
        }else{
            x.tanggal = x.tanggal + 2;
        }
    }else if(x.tanggal >= 31 && x.bulan == 12){
            x.tanggal = 2;
            x.bulan = 1;
            x.tahun = x.tahun + 1;
    }else{
        x.tanggal = x.tanggal + 2;
    }

    return x;
    
}


int main(){
    now.tanggal=1;
    now.bulan=1;
    now.tahun=2022;
    date kemarinn=kemarin(now);
    date besokk=besok(now);
    date lusaa=lusa(now);
    cout<<"kemarin tanggal  : ";tanggalnya(kemarinn);
    cout<<"sekarang tanggal : ";tanggalnya(now);
    cout<<"besok tanggal    : ";tanggalnya(besokk);
    cout<<"lusa tanggal    : ";tanggalnya(lusaa);
    cout<<endl;
}