#include <iostream>
using namespace std;

class buku{
    string judul;

    public:

    buku &setJudul(string judul){
        this->judul = judul;
        return *this;  //chain function
    }

};

int mai()
{
    buku bukunya ;
    //bukunya.seJudul("Matematika");
    //cout << bukunya.getJudul()<< endl;
    cout << bukunya.setJudul("Matematika").getJudul();  //chain function calss
    return 0;
}