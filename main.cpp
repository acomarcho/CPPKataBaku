// Halo!
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdint.h>

using namespace std;

char baku[][20] = {
    "abjad", "akhirat", "aksesori", "aktif", "akuarium", "aluminium", "ambulans",
    "analisis", "antena", "antre", "anugerah", "apotek", "asas", "asasi", "atlet",
    "atmosfer", "autopsi", "balsam", "batalion", "baterai", "becermin", "besok",
    "biseps", "boks", "bosan", "bus", "cabai", "capai", "cedera", "cendekiawan", "cengkih",
    "cendera mata", "cokelat", "daftar", "derajat", "detail", "detergen", "diagnosis",
    "durian", "efektif", "efektivitas", "ekosistem", "ekspor", "ekstra", "ekstrakurikuler",
    "ekstrem", "elite", "favorit", "februari", "film", "finis", "formal", "foto",
    "fotokopi", "fotosintesis", "frekuensi", "grup", "gua", "gubuk", "hafal", "hakikat",
    "hektare", "hierarki", "higienis", "hipotesis", "ideologi", "ijazah", "ikat", "impor",
    "indra", "intelijen", "interogasi", "introspeksi", "izin", "jadwal", "jenderal",
    "jeriken", "junior", "kacamata", "kaidah", "kanguru", "kanker", "karena", "karier",
    "karisma", "karismatik", "kategori", "kaus", "kemarin", "kesatria", "khawatir",
    "klub", "koboi", "komoditas", "kompleks", "komplet", "konferensi", "kongres", "konkret",
    "koper", "kosakata", "kover", "kreatif", "kreativitas", "kualitas", "kuantitas",
    "kuesioner", "kuintal", "kuitansi", "kuota", "legalisasi", "lemari", "lembap", "lubang",
    "majelis", "makhluk", "manajemen", "manajer", "mandek", "masjid", "masyhur", "matang",
    "memerhatikan", "memerlukan", "memesona", "memopulerkan", "mengapa", "mengubah", "menteri",
    "menyontek", "menyukseskan", "merek", "meterai", "metode", "miliar", "modern", "mosaik",
    "museum", "nafsu", "nahas", "nakhoda", "napas", "narasumber", "nasihat", "negeri",
    "nomor", "nonaktif", "nonformal", "november", "objek", "objektif", "ojek", "olahraga",
    "omzet", "otomatis", "paham", "pasif", "paspor", "pembaruan", "penasihat", "boling",
    "persentase", "persentase", "perusak", "petai", "pikir", "praktik", "prancis", "prangko",
    "proaktif", "provinsi", "proyek", "putra", "putri", "rabu", "ramai", "rapi", "realitas",
    "relatif", "religius", "respons", "restoran", "rezim", "risiko", "ritme", "rezeki",
    "rontgen", "roboh", "sahaja", "saksama", "samudra", "hadis", "saraf", "satai", "sekadar",
    "sekretaris", "selebritas", "sentimeter", "seriawan", "setrika", "siapa pun", "silakan",
    "sistem", "sopir", "standar", "standardisasi", "stres", "stroberi", "studi", "subjek",
    "sumatra", "surga", "survei", "sutra", "syair", "takhayul", "takhta", "tampak", "taoco",
    "taoge", "tarif", "teknik", "teknologi", "teladan", "telanjur", "telentang", "telepon",
    "telur", "tenteram", "tepercaya", "terampil", "terima kasih", "tetapi", "tidak", "tim",
    "tobat", "toleransi", "tradisional", "transpor", "tur", "ubah", "unta", "urine", "utang",
    "variasi", "varietas", "verifikasi", "video", "vila", "volume", "wiraswasta", "yogyakarta",
    "yudikatif", "zaman", "blangko"
};

char notBaku[][20] = {
    "abjat", "akherat", "asesoris", "aktip", "aquarium", "almunium", "ambulan",
    "analisa", "antene", "antri", "anugrah", "apotik", "azas", "azasi", "atlit",
    "atmosfir", "otopsi", "balsem", "batalyon", "batere", "bercermin", "esok",
    "bisep", "bok", "bosen", "bis", "cabe", "capek", "cidera", "cendikiawan", "cengkeh",
    "cinderamata", "coklat", "daptar", "derajad", "detil", "deterjen", "diagnosa",
    "duren", "efektip", "efektifitas", "ekosistim", "eksport", "extra", "ekstrakulikuler",
    "ekstrim", "elit", "pavorit", "pebruari", "filem", "finish", "formil", "photo",
    "photo copy", "fotosintesa", "frekwensi", "group", "goa", "gubug", "hapal", "hakekat",
    "hektar", "hirarki", "higenis", "hipotesa", "idiologi", "isajah", "iket", "import",
    "indera", "intelejen", "interograsi", "interopeksi", "ijin", "jadual", "jendral",
    "jerigen", "yunior", "kaca mata", "kaedah", "kangguru", "kangker", "karna", "karir",
    "kharisma", "kharismatik", "katagori", "kaos", "kemaren", "ksatria", "kuatir",
    "club", "koboy", "komoditi", "komplek", "komplit", "konperensi", "konggres", "kongkret",
    "kopor", "kosa kata", "cover", "kreatip", "kreatifitas", "kwalitas", "kwantitas",
    "kuisioner", "kwintal", "kwitansi", "kwota", "legalisir", "almari", "lembab", "lobang",
    "majlis", "mahluk", "managemen", "manager", "mandeg", "mesjid", "mashur", "mateng",
    "memperhatikan", "memperlukan", "mempesona", "mempopulerkan", "kenapa", "merubah", "mentri",
    "mencontek", "mensukseskan", "merk", "materai", "metoda", "milyar", "moderen", "mozaik",
    "musium", "napsu", "naas", "nahkoda", "nafas", "nara sumber", "nasehat", "negri",
    "nomer", "non aktif", "non formal", "nopember", "obyek", "obyektif", "ojeg", "olah raga",
    "omset", "automatis", "faham", "pasive", "pasport", "pembaharuan", "penasehat", "bowling",
    "presentase", "prosentase", "pengrusak", "pete", "fikir", "praktek", "perancis", "perangko",
    "pro aktif", "propinsi", "projek", "putera", "puteri", "rebo", "rame", "rapih", "realita",
    "relative", "relijius", "respon", "restauran", "rejim", "resiko", "ritma", "rejeki",
    "ronsen", "rubuh", "sehaja", "seksama", "samudera", "hadist", "syaraf", "sate", "sekedar",
    "sekertaris", "selebriti", "centimeter", "sariawan", "seterika", "siapapun", "silahkan",
    "sistim", "supir", "standard", "standarisasi", "stress", "strawberi", "study", "subyek",
    "sumatera", "sorga", "survey", "sutera", "sair", "tahayul", "tahta", "nampak", "tauco",
    "toge", "tarip", "tekhnik", "tekhnologi", "tauladan", "terlanjur", "terlentang", "telpon",
    "telor", "tentram", "terpercaya", "trampil", "terimakasih", "tapi", "nggak", "team",
    "taubat", "tolerir", "tradisionil", "transport", "tour", "rubah", "onta", "urin", "hutang",
    "vareasi", "varitas", "veripikasi", "vidio", "villa", "volum", "wirausaha", "jogjakarta",
    "yudikatip", "jaman", "blanko"
};

int main() {
    srand(time(NULL));

    bool stillPlaying = true;

    cout << "Selamat datang! Untuk keluar dari aplikasi, silahkan ketik \"KELUAR\"." << endl;
    int qStyle, qNumber;
    qStyle = rand() % 2;
    qNumber = rand() % (sizeof(baku) / sizeof(baku[0]));

    char ans[20];

    if (qStyle == 0) {
        cout << "Mana yang baku: " << baku[qNumber] << " atau " << notBaku[qNumber] << endl;
    } else {
        cout << "Mana yang baku: " << notBaku[qNumber] << " atau " << baku[qNumber] << endl;
    }

    while (gets(ans)) {
        if (!strcmp(ans, "KELUAR")) {
            stillPlaying = false;
            break;
        }
        if (!strcmp(ans, baku[qNumber])) {
            cout << "Jawaban Anda benar!" << endl;
            qStyle = rand() % 2;
            qNumber = rand() % (sizeof(baku) / sizeof(baku[0]));

            char ans[20];

            if (qStyle == 0) {
                cout << "Mana yang baku: " << baku[qNumber] << " atau " << notBaku[qNumber] << endl;
            } else {
                cout << "Mana yang baku: " << notBaku[qNumber] << " atau " << baku[qNumber] << endl;
            }
            continue;
        } else {
            cout << "Jawaban Anda salah!" << endl;
            qStyle = rand() % 2;
            qNumber = rand() % (sizeof(baku) / sizeof(baku[0]));

            char ans[20];

            if (qStyle == 0) {
                cout << "Mana yang baku: " << baku[qNumber] << " atau " << notBaku[qNumber] << endl;
            } else {
                cout << "Mana yang baku: " << notBaku[qNumber] << " atau " << baku[qNumber] << endl;
            }
            continue;
        }
    }
}
