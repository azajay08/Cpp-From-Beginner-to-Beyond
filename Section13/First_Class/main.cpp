#include <iostream>

using namespace std;

class Player {
public:
	string name;
	int health;
	
	void talk(string phrase) { cout << name << " says " << phrase << endl;}
};

int main()
{
	Player *player1 = new Player;
	player1->name = "Aaron";
	player1->health = 10;
	
	player1->talk("Hello");
	
	cout << player1->health << endl;
	cout << player1->name << endl;
	
	delete player1;
	return 0;
}

