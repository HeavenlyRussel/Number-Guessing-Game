#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <windows.h>
using namespace std;

int guess, try_again, start_menu_choices;

int main(void) {
	while (1) {
		srand(time(0));
		int the_right_number = rand() % 100 + 1;
		
		system("cls");
		
		cout << "Welcome to my number guessing game!";
		cout << "\n\n" << "1. Play";
		cout << "\n\n" << "2. Exit" << "\n\n";
		cout << "Enter your choice here: ";
		
		cin >> start_menu_choices;
		
		if (start_menu_choices == 1) {
			system("cls");
			
			while (1) {
				system("cls");
				cout << "Guess the number now!" << "\n\n" << "Number: ";
				cin >> guess;
				
				if (guess == the_right_number) {
					system("cls");
					cout << "Correct!" << "\n";
					cout << "\n" << "Do you want to try again?" << "\n";
					cout << "\n" << "1. Yes" << "\n";
					cout << "\n" << "2. No" << "\n";
					cout << "\n" << "Enter your choice here: ";
					
					while (1) {
						cin >> try_again;
						
						if (try_again == 1) {
							the_right_number = rand() % 100 + 1;
							system("cls");
							break;
						}
						else if (try_again == 2) {
							return 0;
						}
						else {
							if (cin.fail()) {
								cin.clear();
								cin.ignore(1000, '\n');
								system("cls");
								cout << "Invalid input!";
								Sleep(2500);
								system("cls");
								cout << "Do you want to try again?" << "\n";
								cout << "\n" << "1. Yes" << "\n";
								cout << "\n" << "2. No" << "\n";
								cout << "\n" << "Enter your choice here: ";
							}
							else {
								system("cls");
								cout << "Invalid input!";
								Sleep(2500);
								system("cls");
								cout << "Do you want to try again?" << "\n";
								cout << "\n" << "1. Yes" << "\n";
								cout << "\n" << "2. No" << "\n";
								cout << "\n" << "Enter your choice here: ";
							}
						}
					} 
				}
				else {
					system("cls");
					if (cin.fail()) {
						cin.clear();
						cin.ignore(1000, '\n');
						system("cls");
						cout << "Invalid input!";
						Sleep(2500);
					}
					else {
						system("cls");
						
						if (guess > 100 || guess < 0) {
							cout << "Oh come on" << "\n";
							cout << "\n" << "Guess only from 1 to 100";
							Sleep(2500);
						}
						else {
							int the_right_number_up = the_right_number + 10;
							int the_right_number_down = the_right_number - 10;
							
							if (guess < the_right_number_up && guess > the_right_number_down) {
								cout << "Almost there!";
							}
							else {
								cout << "Not even close...";
							}
							
							// cout << "\n" << the_right_number;
							Sleep(2500);
						}
					}
				}
			}
		}
		else if (start_menu_choices == 2) {
			return 0;
		}
		else {
			if (cin.fail()) {
				cin.clear();                 
				cin.ignore(1000, '\n');
				system("cls");
				cout << "Invalid input!";
				Sleep(2500);
			}
			else {
				system("cls");
				cout << "Invalid input!";
				Sleep(2500);
			}
		}
	}
}