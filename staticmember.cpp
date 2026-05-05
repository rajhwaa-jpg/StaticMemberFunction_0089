#include <iostream>
using namespace std;

class Mahasiswa { //membuat class mahasiswa
    
    public:
        static int nim; //deklasrasi variable static yaitu variable nim
        //deklarasi variable member
        int id;
        string nama;

        //deklarasi prosedur setID()dan printALL()
        void setID();
        void printALL();

        //pembuatan constructor Mahasiswa dengan parameter pnama
        //Member initilaze list
        Mahasiswa(string pnama) :nama(pnama){
            setID();
        }
};

//memberi velue  ke  variable nim dari vlass mahasiswa
int Mahasiswa::nim = 10;

//mengimplementasikan prosedur - prosedur di luar class
void Mahasiswa::printALL() {
    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
};

int main() {
    //membuat object dan memberi nilai
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Fawwaz Sratus");
    Mahasiswa mhs3("Nadi Kurniawan");
    Mahasiswa mhs4("bagas Satya Widhi");

    //memanggil prosedur PrintALL()
    mhs1.printALL();
    mhs2.printALL();
    mhs3.printALL();
    mhs4.printALL();

    return 0;

}