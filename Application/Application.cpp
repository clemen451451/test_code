
#include <iostream>

class Player
{
	private:
		std::string name;
		int scores;

	public:
		Player() : name("None"), scores(0)
		{}

		Player(std::string _name, int _scores) : name(_name), scores(_scores)
		{}

	public:
		std::string Name() const { return name; };
		int Scores() const { return scores; };

	public:

		void SetName(std::string _name)
		{
			name = _name;
		}

		void SetScores(int _scores)
		{
			scores = _scores;
		}
};

class Administrator
{
	public:

		void InsertPlayers(Player* players, int playersAmount)
		{
			for (int i = 0; i < playersAmount; i++)
			{
				std::string name;
				int scores;

				std::cout << "Enter player name: " << "\n";
				std::cin >> name;

				players[i].SetName(name);

				std::cout << "Enter player scores: " << "\n";
				std::cin >> scores;

				players[i].SetScores(scores);
			}
		}

		void SortingPlayers(Player* players, int playersAmount)
		{
			for (int i = 0; i < playersAmount; i++)
			{
				for (int j = i; j < playersAmount; j++)
				{
					if (players[i].Scores() < players[j].Scores())
					{
						std::string tempName = players[i].Name();
						int tempScores = players[i].Scores();

						players[i].SetScores(players[j].Scores());
						players[j].SetScores(tempScores);

						players[i].SetName(players[j].Name());
						players[j].SetName(tempName);
					}
				}
			}
		}

		void GetPlayersList(Player* players, int playersAmount)
		{
			for (int i = 0; i < playersAmount; i++)
			{
				std::cout << "PlayerInfo: " << players[i].Name() << " (scores: " << players[i].Scores() << ")" << "\n";
			}
		}
};

int main()
{
	Administrator administrator;
	int playersAmount;

	std::cout << "Enter ammount players:";
	std::cin >> playersAmount;

	Player* players { new Player[playersAmount]() };

	administrator.InsertPlayers(players, playersAmount);
	administrator.SortingPlayers(players, playersAmount);
	administrator.GetPlayersList(players, playersAmount);

	delete[] players;
}

