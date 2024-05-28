// LLDB : Linked List Double
#include<iostream>
using namespace std;

struct Siswa{
    string Name;
    string Nis;
    int Nilai;
    Siswa* next;
    Siswa* prev;
};

Siswa* head = nullptr;
Siswa* tail = nullptr;

void DataBelakang(){
    //Todo : Deklarasi Data Baru
    Siswa* DataBaru = new Siswa();
    
    cout << "Masukan Nama : ";
    cin >> DataBaru->Name;

    cout << "Masukan Nis : ";
    cin >> DataBaru->Nis;

    cout << "Masukan Nilai : ";
    cin >> DataBaru->Nilai;

    DataBaru->next = nullptr;
    DataBaru->prev = nullptr;

    //Todo : Menambah Data
    if(head == nullptr){
        head = DataBaru;
        tail = DataBaru;
    } else {
        DataBaru->prev = tail;
        tail->next = DataBaru;
        tail = DataBaru;
    }

    cout << "Data Berhasil Ditambahkan\n";
};

void DataDepan(){
   //Todo : Deklarasi Data Baru
    Siswa* DataBaru = new Siswa();
    
    cout << "Masukan Nama : ";
    cin >> DataBaru->Name;

    cout << "Masukan Nis : ";
    cin >> DataBaru->Nis;

    cout << "Masukan Nilai : ";
    cin >> DataBaru->Nilai;

    DataBaru->next = nullptr;
    DataBaru->prev = nullptr;

    //Todo : Menambah Data
    if(head == nullptr){
        head = DataBaru;
        tail = DataBaru;
    } else {
        DataBaru->next = head;
        head->prev = DataBaru;
        head = DataBaru;
    }

    cout << "Data Berhasil Ditambahkan\n";

};

void TampilanDepan(){
    Siswa* temp = head;
    while (temp != nullptr) {
        cout << temp->Name << " " << temp->Nis << " " << temp->Nilai << endl;
        temp = temp->next;
    }
};

void TampilanBelakang(){
    Siswa* temp = tail;
    while (temp != nullptr) {
        cout << temp->Name << " " << temp->Nis << " " << temp->Nilai << endl;
        temp = temp->prev;
    }
};

// Fungsi untuk menghapus semua node dalam linked list
void hapusSemuaData() {
    Siswa* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main(){

    string Command;
    while (true)
    {
        cout << "------ Pilihan Perintah ------\n";
        cout << "1 = Untuk Menambah Data Belakang\n";
        cout << "2 = Untuk Menambah Data Depan\n";
        cout << "3 = Untuk Menampilkan Data Depan\n";
        cout << "4 = Untuk Menampilkan Data Belakang\n";
        cout << "------------------------------\n";
        
        cin >> Command;

        if(Command == "1"){
        DataBelakang();
        } else if(Command == "2"){
            DataDepan();
        } else if(Command == "3"){
            TampilanDepan();
        } else if(Command == "4"){
            TampilanBelakang();
        } else {
            cout << "Perintah Tidak Ditemukan\n";
            break;
        }
    }

    hapusSemuaData();
    
    return 0;
};
