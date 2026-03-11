#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void random_ip(){
	srand ((long int)clock());
	ofstream fout("randfile.txt");
	for(int i=1;i<=10000;i++)
		fout<<rand()%100<<"\t";
	fout.close();
}
void asc_ip(){
	ofstream fout("ascfile.txt");
	for(int i=1;i<=10000;i++)
		fout<<i<<"\t";
	fout.close();
}
void desc_ip(){
	ofstream fout("descfile.txt");
	for(int i=1;i<=10000;i++)
		fout<<10000-i<<"\t";
	fout.close();
}
void equal_ip(){
	ofstream fout("equalfile.txt");
	for(int i=1;i<=10000;i++)
		fout<<10<<"\t";
	fout.close();
}
int main(){
	random_ip();
	asc_ip();
	desc_ip();
	equal_ip();
}
