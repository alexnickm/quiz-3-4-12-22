#include<iostream>
using namespace std;
int main() {
	int month;
	cout << "pick a month number" << endl;
	cin >> month;
	if (month == 1)
		cout << "There are 31 days in this month" << endl;
	else if (month == 2)
		cout << "There are 28 days in this month" << endl;
	else if (month == 3)
		cout << "There are 31 days in this month" << endl;
	else if (month == 4)
		cout << "There are 30 days in this month" << endl;
	else if (month == 5)
		cout << "There are 31 days in this month" << endl;
	else if (month == 6)
		cout << "There are 30 days in this month" << endl;
	else if (month == 7)
		cout << "There are 31 days in this month" << endl;
	else if (month == 8)
		cout << "There are 31 days in this month" << endl;
	else if (month == 9)
		cout << "There are 30 days in this month" << endl;
	else if (month == 10)
		cout << "There are 31 days in this month" << endl;
	else if (month == 11)
		cout << "There are 30 days in this month" << endl;
	else
		cout << "There are 31 days in this month" << endl;
	cout << endl << endl << endl;


	char input;
	int room = 1;
	do {
		switch (room) {
		case 1:
			cout << "You are in room 1, you can go north, east, or west " << endl;
			cin >> input;
			if (input == 'n')
				room = 2;
			else if (input == 'w')
				room = 3;
			else if (input == 'e')
				room = 4;
			else
				cout << "Not an option dummy" << endl;
			break;
		case 2:
			cout << "You are in room 2, you can go south" << endl;
			cin >> input;
			if (input == 's')
				room = 1;
			else
				cout << "not a option dummy" << endl;
			break;
		case 3:
			cout << "You are in room 3, you can go east" << endl;
			cin >> input;
			if (input == 'e')
				room = 1;
			else
				cout << "not a option dummy" << endl;
			break;
		case 4:
			cout << "You are in room 4 you can go south and west" << endl;
			cin >> input;
			if (input == 's')
				room = 5;
			else if (input == 'w')
				room = 1;
			else
				cout << "not a option dummy" << endl;
			break;
		case 5:
			cout << "You are in room 5, you can go north." << endl;
			cin >> input;
			if (input == 'n')
				room = 4;
			else
				cout << "not a option dummy" << endl;
			break;
		}
	} while (input != 'q');

}
