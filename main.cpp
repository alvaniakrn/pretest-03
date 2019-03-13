/*
 alvina vania kirana
 140810180010
 b
 13 maret 2019
 */

#include <iostream>
using namespace std;

struct r_mhs{
    char npm[14];
    char nama[40];
    float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n){
    cout << "Masukkan banyak data :";
    cin >> n;
}

void inputMhs (larikMhs& mhs, int n){
    for (int i=0; i<n; i++){
        cout << "Masukkan mahasiswa ke"<<i+1<<": "<<endl;
        cout << "Nama   :"; cin >> mhs[i].nama;
        cout << "NPM    :"; cin >> mhs[i].npm;
        cout << "IPK    :"; cin >> mhs[i].ipk;
    }
}

void sortNama (larikMhs& mhs, int n){
    
}


void cetakMhs (larikMhs& mhs, int n){
    cout << "           Data Mahasiswa          "<<endl;
    cout << "==================================="<<endl;
    cout << "No NPM         Nama                    IPK"<<endl;
    for (int i=0; i<n; i++){
        cout <<i+1<<"   "<<mhs[i].npm<<"           "<<mhs[i].nama<< "                   "<<mhs[i].ipk<<endl;
    }
}


int main() {
    int n;
    larikMhs mhs;
    
    banyakData (n);
    inputMhs (mhs, n);
    cetakMhs (mhs, n);
    sortNama (mhs, n);
    
    return 0;
}
