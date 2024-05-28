#include<iostream>
using namespace std;

struct Siswa{
    string Name;
    string Nis;
    int Nilai;
};

Siswa DataSiswa[100];
int totalData = 0;

void DataBelakang(){
    Siswa DataBaru;

    cout << "Masukan Nama : ";
    cin >> DataBaru.Name;

    cout << "Masukan Nis : ";
    cin >> DataBaru.Nis;

    cout << "Masukan Nilai : ";
    cin >> DataBaru.Nilai;

    DataSiswa[totalData] = DataBaru;
    totalData++;

    cout << "Data Berhasil Ditambahkan\n";
}

void DataDepan(){
    Siswa DataBaru;

    cout << "Masukan Nama : ";
    cin >> DataBaru.Name;

    cout << "Masukan Nis : ";
    cin >> DataBaru.Nis;

    cout << "Masukan Nilai : ";
    cin >> DataBaru.Nilai;
    for (int i = totalData; i > 0; --i) {
        DataSiswa[i] = DataSiswa[i - 1];
    }

    // Tambahkan data baru di depan
    DataSiswa[0] = DataBaru;
    
    totalData++;
}

void Tampilan(){
    cout << "------ Data Siswa ------\n";

    for (int i = 0; i < totalData; i++)
    {
        cout << DataSiswa[i].Name << " " << DataSiswa[i].Nis << " " << DataSiswa[i].Nilai << endl;
    }
    
    cout << "-----------------------------\n";
}

int main(){

    string Command;
    while (true)
    {
        cout << "------ Pilihan Perintah ------\n";
        cout << "1 = Untuk Menambah Data Belakang\n";
        cout << "2 = Untuk Menambah Data Depan\n";
        cout << "3 = Untuk Menampilkan Data\n";
        cout << "------------------------------\n";
        
        cin >> Command;

        if(Command == "1"){
        DataBelakang();
        } else if(Command == "2"){
            DataDepan();
        } else if(Command == "3"){
            Tampilan();
        } else {
            cout << "Perintah Tidak Ditemukan\n";
            break;
        }
    }
    
    return 0;
};

