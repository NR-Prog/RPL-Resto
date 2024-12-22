#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    char ulang;
    do{
    system("color f0");
    system("cls");
    cout<<"=====================\n";
    cout<<"       RPL RESTO     \n";
    cout<<"=====================\n";

    cout<<"1. Cireng    (Rp. 1000)\n";
    cout<<"2. Cilok     (Rp. 2000)\n";
    cout<<"3. Bala-Bala (Rp. 1500)\n";
    cout<<"4. Seblak    (Rp. 5000)\n";
    cout<<"5. Batagor   (Rp. 2500)\n";

    float harga=0, jumlahporsi, total, bayar, kembali;
    int menu;

    cout<<"Pilih Urutan Menu Makanan: "; cin>>menu;

    switch(menu){
        case 1:
        harga=1000;
        break;

        case 2:
        harga=2000;
        break;

        case 3:
        harga=1500;
        break;

        case 4:
        harga=5000;
        break;

        case 5:
        harga=2500;
        break;

        default:
        cout<<"Urutan menu yang anda masukkan salah!\n";
        break;
    }

    cout<<"Berapa Porsi? "; cin>>jumlahporsi;

    total=harga*jumlahporsi;
    cout<<"Total: Rp."<<total<<endl;

    cout<<"Bayar: Rp."; cin>>bayar;

    if(bayar>=total){
        kembali=bayar-total;
        cout<<"Kembalian: Rp."<<kembali<<endl;
    }
    else{
        cout<<"Maaf Uang Anda Tidak Mencukupi\n";
    }

    cout<<"Apakah ingin mengulang program? (Y/T): "; cin>>ulang;
    }
    while(ulang=='y'||ulang=='Y');
    cout<<"Selesai\n";

    system("pause");
    return 0;
}