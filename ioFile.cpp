
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //oprasi file dalam mode membaca
    ifstream infile;
    //enunjuk ke sebuah file untuk membuka
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membaca file " << endl;
    //jika file ada maka
    if (infile.is_open())
}