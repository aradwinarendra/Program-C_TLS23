#include <iostream>
using namespace std;

int main(){
	char nama[30],matkul[30];
	string grade;
	float persen_kehadiran, tugas, uts, uas, ntugas, nuts, nuas, nkehadiran, nakhir;
	int kehadiran;
	
	cout<<endl<<endl;
	cout<<"---------------- PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA DTETI ANGKATAN 2023 ----------------"<<endl<<endl;
	cout<<"Nama Mahasiswa \t\t: "; gets(nama);
	cout<<"Nama Mata Kuliah \t: "; gets(matkul);
	cout<<"Masukkan Nilai Tugas \t: "; cin>>tugas;
	cout<<"Masukkan Nilai UTS \t: "; cin>>uts;
	cout<<"Masukkan Nilai UAS \t: "; cin>>uas;
	cout<<"Jumlah Kehadiran \t: "; cin>>kehadiran;
	
	persen_kehadiran = kehadiran/14; nkehadiran = persen_kehadiran*10;
	ntugas = tugas*20/100;
	nuts = uts*30/100;
	nuas = uas*40/100;
	nakhir = nkehadiran + ntugas + nuts + nuas;
	
	if(nakhir>=92)
	{grade = "A";}
	else if(nakhir >=88)
	{grade = "A-";}
	else if(nakhir >=84)
	{grade = "B+";}
	else if(nakhir >=80)
	{grade = "B";}
	else if(nakhir >=76)
	{grade = "B-";}
	else if(nakhir >=72)
	{grade = "C";}
	else if(nakhir >=68)
	{grade = "D";}
	else {
		grade = "E";
	}
	cout<<endl<<endl; 
	cout<<"---------------- Hasil Nilai Akhir Mahasiswa DTETI Angkatan 2023 ----------------";
	cout<<endl<<endl<<"Mata Kuliah "<<matkul<<","<<endl;
	cout<<"Atas nama "<<nama<<" dengan nilai persentase yang dihasilkan : "<<endl;
	cout<<"Kehadiran x 10%   = "<<nkehadiran<<endl;
	cout<<"Nilai Tugas x 20% = "<<ntugas<<endl;
	cout<<"Nilai UTS x 30%   = "<<nuts<<endl;
	cout<<"Nilai UAS x 40%   = "<<nuas<<endl;
	cout<<endl<<endl;
	cout<<"Jadi mahasiswa yang bernama "<<nama<<" memperoleh nilai akhir mata kuliah "<<matkul<<" sebesar "<<nakhir<<endl<<endl;
	cout<<"Grade nilai yang didapat adalah "<<grade<<endl;
	return 0;
}
