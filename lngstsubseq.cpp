#include <iostream>
#include <string>

using namespace std;

int maxOut(int x, int y){
	if(x > y){
		return x;
	}
	else{
		return y;
	}
}

int main(){

	string str1, str2;
	cout << "Input Strings" << endl;

	cin >> str1;
	cin >> str2;

	int r, c;
	r = str1.size();
	c = str2.size();

	int Arr[r+1][c+1];

	int i,j;
	for(i = 0; i <= c ; i++){
		Arr[0][i] = 0;
	}
	for(i = 0; i <= r ; i++){
		Arr[i][0] = 0;
	}

	for( i=1; i<=str1.size(); i++){
		for(j=1;j<=str2.size();j++){
			if(str1[i-1]==str2[j-1]){
				Arr[i][j] = Arr[i-1][j-1] + 1; 
			}
			else{
				Arr[i][j] = maxOut(Arr[i-1][j], Arr[i][j-1]);
			}
		}
	}

	cout << "Ans: " << Arr[r][c] << endl;

	cout << "Subssequence elements:" << endl;
	i=r;
	j=c;
	while( i>0 && j>0 ){
			if(Arr[i][j] == Arr[i][j-1]){
				j--;
			}
			else if( Arr[i][j] == Arr[i-1][j]){
				i--;
			}
			else{
				cout << str1[i-1] << endl;
				i--;
				j--;
			}
		}
	
	return 0;
}