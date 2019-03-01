#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
    string score;
    double score[20];
	int i = 0;
	int j = 1;
	ifstream f2;
	f2.open("score1.txt");
	while(getline(f2,score)){
		score[i] = atof(score.c_str());
		i++;
	
	}
	
	
	
	
	return 0;
}


sort( score,20);

ofstream f1;
f1.open("result.txt");
for(int i = 0;i < 20; i++){
	for()
}
