#include <iostream>
#include <string> //menyertakan  library string
using namespace std;

class Mahasiswa {

    private:
        static int nim;
    public:
        int id;
        string nama;

        void setID();
        void printALL();

        //pembuatan staatic function
        static void setNim(int pnim) {
            nim = pnim;
        };
        
        static void setNim() {
            return nim;
        }

        Mahasiswa(string pnama) :nama(pnama) {
            setId();
        }
};

