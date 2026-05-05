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

