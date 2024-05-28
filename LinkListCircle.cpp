#include<iostream>
using namespace std;

struct Siswa{
    string Name;
    string Nis;
    int Nilai;
    Siswa* next;
};

Siswa* head = nullptr;

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

    //Todo : Menambah Data
    if(head == nullptr){
        head = DataBaru;
    } else {
        Siswa* temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = DataBaru;
        DataBaru->next = head;
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

    //Todo : Menambah Data
    if(head == nullptr){
        head = DataBaru;
    } else {
        Siswa* temp = head;
        while (temp->next != head)
        {
            temp = temp->next; 
        }
        DataBaru->next = head;
        head = DataBaru;
        temp->next = head;
    }

    cout << "Data Berhasil Ditambahkan\n";

};

void Tampilan(){
    Siswa* temp = head;
    while (temp->next != head) {
        cout << temp->Name << " " << temp->Nis << " " << temp->Nilai << endl;
        temp = temp->next;
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

    hapusSemuaData();
    
    return 0;
};
