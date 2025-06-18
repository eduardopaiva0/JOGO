#include<iostream>
using namespace std;

int main(){
	int numOcult,in1,in2,numMin,numMax;
	numMin = 1;
	numMax = 100;
	bool cancelar = true;
	do{
		cout << "Digite o numero oculto entre 1 e 100: ";
		cin >> numOcult;
	}while(numOcult <= 1 || numOcult >= 100);
	
	while(in1 != numOcult && in2 != numOcult){
		in2 = 0;
		do{
			cout << "Jogador 1 digite um numero entre " << numMin << " e " << numMax << " : ";
			cin >> in1;
		}while(in1 <= numMin || in1 >= numMax);
		if(in1 > numOcult){
			numMax = in1;
		}else if(in1 < numOcult){
			numMin = in1;
		}else{
			cout << "Jogador 1 perdeu!";
			cancelar = false;
			in2 = numOcult;
		}
	
		while(in2 <= numMin || in2 >= numMax){
			cout << "Jogador 2 digite um numero entre " << numMin << " e " << numMax << " : ";
			cin >> in2;
		}
		if(in2 > numOcult){
			numMax = in2;
		}else if(in2 < numOcult){
			numMin = in2;
		}else if(cancelar){
			cout << "Jogador 2 perdeu!";
			in2 = numOcult;
		}
		
	}
}