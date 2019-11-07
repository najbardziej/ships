#pragma once
#include "Connection.h"
#include "Field.h"

class Game
{
	private:
		int priority;
		int enemyPriority;
		int listOfShips[1] = { 4 };//, 3, 3, 2, 2, 2, 1, 1, 1, 1};
		Connection* connection = NULL;
		Field myField;
		Field enemyField;
		void shoot();
		void waitForShot();
		void setupFields();
		void step();
		void draw();
	public:
		Game(Connection *connection);
		void End();
		void Start();
		~Game();
};
