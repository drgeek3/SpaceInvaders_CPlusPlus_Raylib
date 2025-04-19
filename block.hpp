#pragma once
#include <raylib.h>

class Block {
public:
	Block(Vector2 position);
	Rectangle getRect();
	void Draw();
private:
	Vector2 position;
};
