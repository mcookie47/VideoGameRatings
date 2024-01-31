#include <iostream>
#include <string>
#include <sstream> //used to both read strings and write data into strings. Convenient to use stringstream to convert between strings and other numerical types
using namespace std;

//User(s) will enter their favorite video games and give a rating on a scale from 1 to 5 for each category - gameplay, characters, story, graphics, and soundtrack.

struct video_games {
	string name;
	string title;
	int gameplay;
	int characters;
	int story;
	int graphics;
	int soundtrack;
}game_rating[3];

void print_video_game(video_games game);

int main()
{
	string mystr;

	for (int i = 0; i < 3; i++)
	{
		cout << "**************************************************\n";
		cout << "Enter your name: ";
		getline(cin, game_rating[i].name);

		cout << "Enter title :";
		getline(cin, game_rating[i].title);

		cout << "Rating for gameplay (from 1 to 5): ";
		getline(cin, mystr);
		stringstream(mystr) >> game_rating[i].gameplay;

		cout << "Characters: ";
		getline(cin, mystr);
		stringstream(mystr) >> game_rating[i].characters;

		cout << "Story: ";
		getline(cin, mystr);
		stringstream(mystr) >> game_rating[i].story;
	
		cout << "Graphics: ";
		getline(cin, mystr);
		stringstream(mystr) >> game_rating[i].graphics;
	
		cout << "Soundtrack: ";
		getline(cin, mystr);
		stringstream(mystr) >> game_rating[i].soundtrack;
		cout << endl;
	}

	cout << "**************************************************\n";

	for (int i = 0; i < 3; i++)
	{
		print_video_game(game_rating[i]);
	}

	system("pause");
	return 0;
}

void print_video_game(video_games game) {
	cout << game.name << "'s ratings for " << game.title << ":" <<endl;
	cout << "Gameplay: " << game.gameplay << endl
		<< "Characters: " << game.characters << endl
		<< "Story: " << game.story << endl
		<< "Graphics: " << game.graphics << endl
		<< "Soundtrack: " << game.soundtrack << endl << endl;
	cout << "**************************************************\n";
}