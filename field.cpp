#include <iostream>
using std::cout;
using std::cin;

void print(char cols[10], int rows[10]){
	for (int i = 0; i < 10; i++) {
		rows[i] = i + 1;
		cout << ' ' << rows[i] << '_' << ' ';
		
	}
	cout << '\n';
	for (int i = 0; i < 10; i++) {
		cols[i] = i + 'A';
		cout << cols[i] << '|' << '\n';
	}
	
}	
	
