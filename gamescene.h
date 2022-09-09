#pragma once
#include "DxLib.h"
#include "input.h"

typedef struct {
	int x, y;
	int width, height;
}Transform;

enum SceneName
{
	TITLE,
	GAMEMAIN,
	GAMEOVER,
};

class GameScene
{
public:
	GameScene();
	~GameScene();
	void Initalize();
	void Update();
	void Draw();

private:
	Input* input_ = nullptr;

	unsigned int sceneNum = 0;
	Transform playerTransform_ = { 0 };

};