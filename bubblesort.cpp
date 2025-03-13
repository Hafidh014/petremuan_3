#include <iostream>
#include <string>
using namespace std;
void  input(){          
    while(true){
        cout << "Masukan banyak elemenen maksimal 20 elemen\n" << endl;
        cin >> n;
        if (n<=20)
            break;
        else{
            cout  << "\nArray dapat mempunyai maksimal 20 elemen\n" << endl;
        }
    }
}