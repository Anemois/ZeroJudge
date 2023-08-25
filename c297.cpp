#include <iostream>
#include <string>
using namespace std;

int score = 0;

void reset_bau(int ara[4]){
	for(int pls=0; pls<4; pls++){
		ara[pls] = 0;
	}
}

void cout_bau(int arra[4]){
	cout << "{";
	for(int ii=0; ii<4; ii++){
		cout << arra[ii];
		if(ii!=3){
			cout << ", ";
		}
	}
	cout << "}" << endl;
}

string get_hit(string &hit){
	int x;
	string hi[5];
	
	for (int I=0; I<9; I++){
		cin >> x;
		string h;
		for(int K=0; K<x; K++){
			cin >> h;
			hi[K].append(h);
		}
	}
	for (int I=0; I<5; I++){
		hit.append(hi[I]);
	}
	return hit;
}

void check_bau(int array[], int num){
	//cout_bau(array);
	for(int i=3; i>=0; i--){
		if (array[i] == 1){
			if(i+num >= 4){
				score++;
				array[i] = 0;
			}
			else{
				//cout << "yo";
				array[i+num] = 1;
				array[i] = 0;
			}
		} 
	}
}

int main()
{
	string hits;
	get_hit(hits);
	int out=0;
	int limit;
	int bau[4] = {0};
	cin >> limit;
	for(int i=0; i<hits.length(); i=i+2){
		if (out>=limit)  break;
		if(hits[i+1] == 'O'){
			out++;
			if(out%3==0) reset_bau(bau);
			continue;
		}
		bau[0]=1;
		switch(hits[i]){
			case '1':
				check_bau(bau, 1);
				break;
			case '2':
				check_bau(bau, 2);
				break;
			case '3':
				check_bau(bau, 3);
				break;
			case 'H':
				check_bau(bau, 4);
				break;
		}
	}
	cout << score;
	return 0;
}