#include <iostream>
#include <string>
using namespace std;
int arr[20];        //deklarasi variable global array dengan ukuran 20
int n;              //deklarasi variable global n untuk menyimpan banyak element pada array
void  input(){          
    while(true){
        cout << "Masukan banyak elemenen maksimal 20 elemen\n" << endl;
        cin >> n;
        if (n<=20)
            break;
        else{
            cout  << "\nArray dapat mempunyai maksimal 20 elemen\n" << endl;
        }
        cout << endl;
        cout << "====================" << endl;
        cout << "Masukan elemen array" << endl;
        cout << "====================" << endl;

    for (int i = 0; i <n; i++) {
    cout << "Data ke-" << (i+1) << ";")
    cin >> arr[i];
    }
 }

    }
