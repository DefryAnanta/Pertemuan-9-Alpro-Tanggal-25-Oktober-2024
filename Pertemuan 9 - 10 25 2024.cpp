#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> nama, npm, tanggallahir;
    string n, np, tl;
    int pil, h;
    char t;
    bool tes;
    do {
        cout<< "====Menu Data Mahasiswa====\n"
            << "1. Input Data Mahasiswa\n"
            << "2. Lihat Data Mahasiswa\n"
            << "3. Hapus Data Mahasiswa\n"
            << "4. Exit\n"
            << "Masukan Nomor Pilihan (1-4): ";cin>>pil;
            system("cls");
            switch(pil){
        case 1:
            cin.ignore();
            cout<<"MMasukkan Nama Mahasiswa: "; getline(cin,n);
            nama.push_back(n);
            cout<<"Masukkan NPM Mahasiswa: "; cin>>np;
            cin.ignore();
            npm.push_back(np);
            cout<<"Masukkan Tanggal Lahir: "; getline(cin, tl);
            tanggallahir.push_back(tl);
            cout<<"\nData Telah Ditambahkan\n";
            cout<<"Kembali ke menu utama? (y/n): "; cin>>t;
            cin.ignore();
            if(t == 'y' || t == 'Y'){
                tes = true;
            } else if(t == 'n' || t == 'N'){
                tes = false;
            }
            system ("cls");
            break;
        case 2:
            for(int i = 0; i<nama.size(); i++){
                cout<< "Data Mahasiswa ke-"<<i+1<<endl
                    << "Nama            : "<<nama[i]<<endl
                    << "NPM             : "<<npm[i]<<endl
                    << "Tanggal Lahir:  : "<<tanggallahir[i]<<endl
                    << endl;
            }
            cout<<"\nKembali ke menu utama? (y/n): "; cin>>t;
            if(t == 'y' || t == 'Y'){
                tes = true;
            } else if(t == 'n' || t == 'N'){
                tes = false;
            }
            system ("cls");
            break;
        case 3:
            for(int i = 0; i<nama.size(); i++){
                cout<< "Data Mahasiswa ke-"<<i+1<<endl
                    << "Nama            : "<<nama[i]<<endl
                    << "NPM             : "<<npm[i]<<endl
                    << "Tanggal Lahir:  : "<<tanggallahir[i]<<endl
                    << endl;
            }
            cout<<"\nData Mahasiswa Ke Berapa Yang Ingin Dihapus? (NMasukkan Angka) : "; cin>>h;

            nama.erase(nama.begin()+h-1);
            npm.erase(npm.begin()+h-1);
            tanggallahir.erase(tanggallahir.begin()+h-1);

            cout<<"\nData Mahasiswa ke-"<<h<<" Telah Dihapus"<<endl;
            cout<<"\nKembali ke menu utama? (y/n): "; cin>>t;
            if(t == 'y' || t == 'Y'){
                tes = true;
            } else if(t == 'n' || t == 'N'){
                tes = false;
            }
            system ("cls");
            break;
        case 4:
            tes = false;
            break;
        default:
                cout<<"\nPilihan yang ada pilih tidak tersedia, Kembali ke menu utama?(y/n) : "; cin>>t;
                if(t == 'y' || t == 'Y'){
                    tes = true;
                }else if(t == 'n' || t == 'N'){
                    tes = false;
                }
                system("cls");
                break;
        }
    }while(tes == true);
    cout<<"program selesai";
}


