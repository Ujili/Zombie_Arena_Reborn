#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Player
{
private:
	const float START_SPEED = 200;
	const float START_HEALTH = 100;

	//Where is the player
	Vector2f m_Position;

	//For the sprite
	Sprite m_Sprite;

	//And of course a texture!
	//Placeholder for future changes!
	Texture m_Texture;

	//Screen resolution
	Vector2f m_Resolution;

	//Arena size
	IntRect m_Arena;

	//Each tile of the arena
	int m_Tilesize;

	//Player direction
	bool m_UpPressed;
	bool m_DownPressed;
	bool m_LeftPressed;
	bool m_RightPressed;

	//Player health
	int m_Health;
	int m_MaxHealth;

	//Last hit on player
	Time m_LastHit;

	//Speeed!!
	float m_Speed;

	//Public functions to follow!
public:

	Player();

	void spawn(IntRect arena, Vector2f resolution, int tileSize);

	//Call this at the end of every game
	void resetPlayerStats();

	//Handle getting hit
	bool hit(Time timeHit);

	//How long ago was last hit
	Time getLastHitTime();

	//Where is the player
	FloatRect getPosition();

	//Where is the center of the player
	Vector2f getCenter();

	//What angle is the player facing
	float getRotation();

	//Send a copy of the sprite to the main function
	Sprite getSprite();

	//These move the player
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();

	//Stop the player from moving
	void stopLeft();
	void stopRight();
	void stopUp();
	void stopDown();

	//Update function, once per frame
	void update(float elapsedTime, Vector2i mousePosition);

	//Get a speeeeed boooooost!
	void upgradeSpeed();

	//Healing
	void upgradeHealth();

	//Increase max health
	void increaseHealthLevel(int amount);

	//What is current health?
	int getHealth();

};