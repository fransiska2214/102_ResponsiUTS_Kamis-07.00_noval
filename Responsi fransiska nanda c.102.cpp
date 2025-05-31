#include <iostream>
#include <string>
#include <fsteam>
using namespace std;

struct admin(){
	string nama;
	int kapasitas;
	string lokasi;
	string fasilitas;
};
struct mahasiswa(){
	string mata_kuliah;
	string dosen;
	string hari;
	string waktu;
};
void ruang(r){
	cout<<"Nama: \n";
	cin.ignore();gitline(cin,nama);
	cout<<"Kapasistas: \n";
	cin.ignore();
	r.kapasitas;
	cout<<"lokasi: \n";
	gitline(cin,lokasi);
	cout<<"fasilitas: \n";
	gitline(cin,fasilitas);
	daftarRuang.push_back(r);
}
void jadwal(j){
cout<<"Mata kuliah: \n";
	cin.ignore();gitline(cin,mata_kuliah);
	cout<<"Dosen: \n";
	cin.ignore();
	j.dosen;
	cout<<"Hari: \n";
	gitline(cin,Hari);
	cout<<"Waktu: \n ";
	gitline(cin,waktu;
	daftarRuang.push_back(j);
}
void simpanKeFile(jumlah.txt){
	opstream (!file).empty();
	
}
int main(){
	string admin;
	string mahasiswa;
	string user,pass;
	
	
	do{
		cout<<endl;
		cout<<"Login Jadwal Mata Kuliah \n";
		cout<<"Input Jadwal Mata Kuliah \n";
		cout<<"Tampilkan jadwal Mata Kuliah \n";
		cout<<"Keluar \n";
		cout<<"Masukkan pilihan (1-4)"
	}
	switch(pilihan){
		case 1:
		cout << "Masukkan username: ";
		cin >>user;
		cout <<"Masukkan password: ";
		cin >>pass;
		break;
		case 2:
	}
	return 0;
}
