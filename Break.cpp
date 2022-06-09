// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct player_y {
    string name;
    string asaldaerah;
    string jurusan;
};

int main() {
    player_y player [] = {
        {
            "Masnah", "Jakarta", "Ilmu Komunikasi",
        },
        {
            "Ali", "Semarang", "Manajemen",
        },
        {
            "Subhan", "Banten", "Sastra Inggris",
        },
        {
            "Nanda", "Padang", "Ekonomi"
        },
        {
            "Lulu", "Kalimantan", "Teknik Informatika"
        },
    };
    
    cout << "Ali, Semarang, Manajemen\n\n";
    
    for (int i = 0; i < 5; i++){
        if (player[i]. jurusan == "Semangat kuliah nya") {
                cout << player[i]. name << endl;
                break;
        }
        
    }
    
    return 0;
}
    
    
