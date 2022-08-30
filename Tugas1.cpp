#include <iostream>

class Agent {
	std::string name;
	int health;
	int pos_x, pos_y;

	public :
	Agent(std::string _name = "null", int _health = 0) {
		name = _name;
		health = _health;
	}
	void SetPost(int x = 0, int y = 0) {
		pos_x = x; pos_y = y;	
	}
	int GetPos() {
		return pos_x;
	}
	void Info() {
		std::cout << "Name : " << name <<"\t Health : " << health << std::endl; 
	}
};

class Player {
	int direction;
	int id;
	int strength;
	
	public :
	Player(int _id = 0, int _direction = 0) {
		id = _id;
		direction = _direction;
	}
	void AddStrength(int str) {
		strength += str;
	}
	void InfoPlayer() {
		std::cout << "Player ID : " << id << "\tdirection :" << direction << std::endl;
	}
};


int main() {
	Agent  agent1 = Agent();
	Agent agent2 = Agent("cobaagent", 100);
	
	Player player1 = Player();
	Player player2 = Player(10, 5);
	
	agent1.Info();
	agent2.Info();
	
	player1.InfoPlayer();
	player2.InfoPlayer();
	
	return 0;
}
