#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int inter(int a, int b){
	return a*b;
}

int main(){
	srand(time(NULL));
	int mass [100];
	for (int i = 0; i < 100; i++){
		mass[i] = (rand() % 100);
	}
	for (int i = 0; i < 100; i++){
		cout<<mass[i]<<'\t';
	}
	int count = 0;
	int dva =0;
	int tri =0;
	for(int i = 0; i<100; i++){
		count = 0;
		for(int k = 0; k<100; k++){
			if(i==mass[k]){
				count++;
			}
		}
		if(count != 0){
			if(count/2>=1){
				cout << "Massive include " << count/2 << " doubles of "<< i << endl;
				dva+=count/2;
				if(count/3>=1){
					cout << "Massive include " << count/3 << " triples of "<< i << endl;
					tri+=count/3;
				}
			}
		}
	}
	cout<<"Triples = "<< tri <<'\t'<<"Doubles = "<<dva; 
}
