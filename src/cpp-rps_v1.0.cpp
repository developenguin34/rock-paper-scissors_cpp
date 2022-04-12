#include <iostream>
#include <cstdlib>
using namespace std;
string choices[3] = { "rock","paper","scissors" };
string rock = choices[0];
string paper = choices[1];
string scissors = choices[2];
string choice;
int player_score=0;
int cpu_score=0;
int tour;
int main() {
	cout << "How many round will you play:";
	cin >> tour;
	for (int i = 0; i < tour; i++) {
		int element = rand() %4;
		string ai_choice= choices[element];
		cout << "Select one of rock, paper, scissors" << endl;
		cin >> choice;
		if (choice == rock) {
			if (ai_choice == rock) {
				cout << "Nobody won this round."<<endl;
				cout<<"CPU's choice:"<<ai_choice<<endl;
			}
			else if (ai_choice == paper) {
				cout << "You lost this round"<<endl;
				cout<<"CPU's choice:"<<ai_choice<<endl;
				cpu_score += 1;
			}
			else {
				cout << "You won this round." << endl;
				cout<<"CPU's choice:"<<ai_choice<<endl;
				player_score += 1;
			}
		}if (choice == paper) {
			if (ai_choice == paper) {
				cout << "Nobody won this round." << endl;
				cout<<"CPU's choice:"<<ai_choice<<endl;
			}
			else if(ai_choice==scissors){
				cout << "You lost this round." << endl;
				cout<<"CPU's choice:"<<ai_choice<<endl;
				cpu_score += 1;
			}
			else {
				cout << "You won this round."<<endl;
				cout<<"CPU's choice:"<<ai_choice<<endl;
				player_score += 1;
			}
		if (choice == scissors) {
			if (ai_choice == scissors) {
				cout << "Nobody won this round." << endl;
				cout<<"CPU's choice:"<<ai_choice<<endl;
			}
			else if (ai_choice == rock) {
				cout << "You lost this round." << endl;
				cout<<"CPU's choice:"<<ai_choice<<endl;
				cpu_score += 1;
			}
			else {
				cout << "You won this round." << endl;
				cout<<"CPU's choice:"<<ai_choice<<endl;
				player_score += 1;
			}
		}
		}

	}
	cout << "Player Score:" << player_score << "\n" << "CPU Score:" << cpu_score;
}
