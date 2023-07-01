#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string bus[5][5];
	
	int row = 0, column = 0;
	
	ofstream file("D:\\Documents\\bus-reservation\\bus-reservation.txt");
	
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			bus[i][j] = "X\t";
		}
	}
	
	while (true) {
		for (int i = 0; i <= 4; i++) {
			for (int j = 0; j <= 4; j++) {
				cout<<bus[i][j];
			}
			cout<<endl;
		}
		
		cout<<"Row: ";
		
		cin>>row;
		
		cout<<endl;
		
		if (row <= 5 && row > 0) {
			row = row - 1;
		}		
		else {
			cout<<"naw dawg aw hell no man"<<endl;
			return 1;
		}
				
		cout<<"Column: ";
		
		cin>>column;
		
		cout<<endl;
		
		if (column <= 5 && column > 0) {
			column = column - 1;
		}		
		else {			
			cout<<"naw foo wut da hell"<<endl;
			return 1;
		}
		
		string choice;
		
		cout<<"Would you like to save? [Y/N]"<<endl;
		
		cin>>choice;
		
		bus[row][column] = "O\t";
		
		if (choice == "Y") {
			for (int i = 0; i <= 4; i++) {
				for (int j = 0; j <= 4; j++) {
					file<<bus[i][j];
				}
				file<<endl;
			}
		}
		else if (choice != "N") {
			cout<<"naw dawg"<<endl;
			return 1;
		}
		
		
		
		break;
	}

	return 0;
}
