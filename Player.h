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


};