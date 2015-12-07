#include <iostream>
using namespace std;
//Sets the width to the size desired which is 64
const int WIDTH_OUT = 64;
int row[WIDTH_OUT];

/*
Creates the very first row in the program which will
determine the output of the next line which affects
the line that follows and so on.
*/
void setup_row() {
	//Sets the whole row to zeros
	for (int i = 0; i < WIDTH_OUT; ++i) {
		row[i] = 0;
	}
	//Goes back and sets the 31st index to one
	row[31] = 1;
}

/*
This will print the row if the value at the index is a
one or not.  If the value is a one it will return the
symbol '*' or '-' if it is a zero going through the array.w
*/
void print_row() {
	//Loop checks each index to determine what needs to be printed
	for (int i = 0; i < WIDTH_OUT; ++i) {
		cout << (row[i] = 1? '*' : '-');
	}
	//Ends the current line to prepare for the next
	cout << endl;
}

/*
Updates the row based on the values of the last row. It
uses XOR and OR to get a value of either zero or one and
place it at the current index in the array.  There is also
handling for the very begining and end of the line to determine
the value the index will hold.
*/
void update_row() {
	//Makes a new array for the updated row.
	int a[WIDTH_OUT];
	//Loop determines the value the index will hold
	for (int i = 1; i < WIDTH_OUT - 1; ++i) {
		//Checks values to the left and right and sets the value
		a[i] = row[i - 1] ^ (row[i] | row[i + 1]);
	}
	//Handles the very begining and end
	a[0] = row[0] | row[1];
	a[WIDTH_OUT - 1] = row[WIDTH_OUT - 2] ^ row[WIDTH_OUT - 1];
	//Moves the temporary array to the one used in the rest of the app
	for (int i = 0; i < WIDTH_OUT; ++i) {
		row[i] = a[i];
	}
}

int main()
{
	setup_row();
	print_row();
	for (int i = 0; i <= 30; ++i) {
		update_row();
		print_row();
	}
    return 0;
}
