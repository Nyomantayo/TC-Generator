#include <bits/stdc++.h>
#define len length
#define ll  long long
using namespace std;

/*
dua baris di bawah ini merupakan random (fungsi utama)
ditujukan untuk mengrandom jawaban
jos gandos
*/
random_device rd;
mt19937 rnd(rd());

int main(){
    /*
    - in disini digunakan mengganti syntax cin
    in disini namanya bisa dirubah dengan nama apa saja, asal mudah untuk diingat

    - Jika cin membaca masukan pada terminal sedangkan
    in membaca masukan berupa text yang ada di dalam file

    - Nama dari file tersebut harus sama dengan nama file yang ingin dibaca
    file tersebut harus berada pada satu folder dengan folder program

    - sama dengan in, fungsi out digunakan untuk mengganti cout
    out disini namanya bisa dirubah dengan nama apa saja, asal mudah untuk diingat

    - jika cout mengeluarkan sesuatu pada terminal sedangkan
    out mengeluarkan atau mencetak hasil di sebuah file

    - file yang akan ditulis oleh program bisa dibuat dengan nama sendiri
    jika file yang namanya itu tidak ada, maka akan membuat file baru dengan format tersebut
    jika file ada, maka akan menimpa file tersebut

    */
   /*
   ifstream -> membaca file
   ofstream -> menulis file
   Kalo mau baca tulis, ya buat keduanya
   */

    int cnt = 1, piv;
    char angkaSekarang;
    string namaFile;
    string angkaString;
    for(int i = 1; i <= 10 ; i++){
        // membuat file test case sesuai nilai i
        namaFile = "input";
        angkaString = "";
        cnt = i;
        while(cnt){
            piv = cnt%10;
            angkaSekarang = ('0'+piv);
            angkaString += angkaSekarang;
            cnt/=10;
        }
        reverse(angkaString.begin(), angkaString.end());
        namaFile = namaFile + angkaString;
        namaFile = namaFile+".txt";

        // =====BUAT TC DISINI DAN mulai write di dalam file input=====
        ofstream out(namaFile);
        

        // ===== ALGORITMA DAN keluarkan jawaban ke file output=====
        ifstream in(namaFile);
        namaFile[0] = 'o'; namaFile[1] = 'u'; namaFile[2] = 't'; namaFile[3] = 'p'; namaFile[4] = 'u'; namaFile.insert(5,1,'t');
        ofstream outs(namaFile);
        
    }
    
    return 0;
}

/*Copyright Nyoman Wiprayanka 2024*/