#include <iostream>
using namespace std;

class Matriks{
	friend ostream& operator<<(ostream& out, Matriks&);
	friend istream& operator>>(istream& in, Matriks&);
	
	public:
		void input();
		void proses();
		void output();
	
	private:
		int brs, klm, n, asc;
		int data[24];
		int matrik[4][6];
};

void Matriks::input(){
	cout<<"\t\t\t\tStudi Kasus 9\n";
	cout<<"Masukkan banyak bilangan : ";
	cin>>n;
	
	for (int i=0; i<n; i++) {
		cout<<"Data ke- " <<i+1 <<" = ";
		cin>>data[i];
	}
	cout<<endl;
}

void Matriks::proses(){
	for(int c=0; c<n-c; c++) {
        for(int d=c+1; d<n; d++) {
            if(data[c] > data[d]) {
                asc = data[c];
                data[c]  = data[d];
                data[d] = asc;
            }
        }
    }
    
    int i = 0;
    while(i < 20) {
    	for(int c=0; c<4; c++) {
        	for(int d=0; d<6; d++) {
            	matrik[c][d] = data[i];
            	i++;
        	}
    	}
	}
}

void Matriks::output(){
	cout<< "Hasil Pengurutan : ";
    for(int i=0; i<n; i++) {
        cout<<data[i] <<"  ";
    }
    
    cout<<endl;
    cout<<"Tampilan nomor buku pada rak : ";
    cout<<endl;
    for(int i=0; i<4; i++) {
       	for(int j=0; j<6; j++) {
          	cout<<matrik[i][j] <<"  ";
        }
        cout<<endl;
    }
}

int main(void){
	Matriks run;
	run.input();
	run.proses();
	run.output();
}
