#pragma once
#include "spaceship.hpp"
#include "obstacle.hpp"
#include "alien.hpp"
#include "mysteryship.hpp"

class Game {
public:
	Game();
	~Game();
	void Draw();
	void Update();
	void HandleInput();
	bool run;
	int lives;
	int score;
	int highscore;
	int level;
	Music music;
private:
	void DeleteInactiveLasers();
	std::vector<Obstacle> CreateObstacles();
	std::vector<Alien> CreateAliens();
	void MoveAliens();
	void MoveDownAliens(int distance);
	void AlienShootLaser();
	void CheckForCollisions();
	void GameOver();
	void Reset();
	void InitGame();
	void LevelUp();
	void CheckForHighScore();
	void SaveHighScoreToFile(int highscore);
	int LoadHighScoreFromFile();
	Spaceship spaceship;
	std::vector<Obstacle> obstacles;
	std::vector<Alien> aliens;
	float aliensDirection;
	std::vector<Laser> alienLasers;
	constexpr static float alienLaserShootInterval = 0.35;
	float timeLastAlienFired;
	MysteryShip mysteryship;
	float mysteryShipSpawnInterval;
	float timeLastSpawn;
	Sound explosionSound;
};