// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Ticket {
	string name;
	string tujuan;
	string kelas;
};

int main() {
	Ticket ticket[] = {
		{
			"sekar aulia",
			"Bandung",
			"ekonomi",
		},
		{
			"putri aisyah",
			"Yogyakarta",
			"eksekutif",
		},
		{
			"Dina putri",
			"Malang",
			"Bisnis",
		},
		{
			"lulu sukma",
			"semarang",
			"premium",
		},
		{
			"nissa",
			"bogor",
			"ekonomi",
		},
	};
	
	int ekonomiticket = 2;
	
	cout << "Anyone who ordered a ticket ?\n\n";
	
	for (int i = 0; i < 6; i++) {
			if (ticket[i].kelas == "Kelas") {
				break;
			}
			cout << ticket[i].name << endl;
	}
		
		return 0;
}

		
		
		

