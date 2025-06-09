#include <iostream>
using namespace std;

int main()
{
    try{
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5;//melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan diekskusi" << endl;
    }
    catch (int a) {
        //blok ini akan di ekskusi
        cout << "Pengecualian akan diekskusi" << endl;
    }
    catch (...) {
        /*jika selain integer maka block ini akan diekskusi*/
        cout << "default Pengecualian diekskusi" << endl;
    }

    return 0;
}