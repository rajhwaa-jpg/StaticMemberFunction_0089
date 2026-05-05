#include <iostream>
using namespace std;

class angka
{
private:
    int *arr;
    int pangjang;

public:
    angka(int); // constructor
    ~angka(); // destructor
    void cetakData();
    void isiData();
};

angka::angka(int i){ // Constructor
    pangjang = i;
    arr = new  int[i];
    isiData();
}
angka ::~angka(){ //destructor
    cout <<  endl;
    cetakData();
    delete[] arr;
    cout << "Alamat ArraySudah dilepaskan" << endl;
}

void angka::cetakData()
{
    for  (int i = 1; i <= panjang; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}

void angka::isiData()
{
    for  (int i = 1; 1 <= panjang; i++)
    {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}
int  mainn()
{
    angka brlajarcpp(3); // construoctor dipanggil
    angka  *ptriBelajarcpp = new angka(5); //  constructor dipanggil
    delete ptriBelajarcpp; //destructor dipanggil

    return 0;
}