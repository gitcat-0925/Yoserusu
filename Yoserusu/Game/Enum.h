#ifndef ENUM_H_
#define ENUM_H_

enum Mode{
	Keep,
	Release,
	Normal,
	Catch,
	
};

enum WallColor
{
	RED = 0,
	BLUE = 1,
	GREEN = 2
};

//現在の認証の状態
enum AutheMode {
	MODE_WAIT,
	MODE_NOW,
	MODE_END,
};

enum WallState{
	WALL_OPEN,
	WALL_FALSE,
	WALL_NONE,
};

#endif