#include "gamescene.h"
#include "input.h"

GameScene::GameScene()
{
}

GameScene::~GameScene()
{
}

void GameScene::Initalize()
{
	input_ = new Input;
	playerTransform_.x = 100;
	playerTransform_.y = 100;
	playerTransform_.height = 15;
	playerTransform_.width = 15;
}

void GameScene::Update()
{
	input_->Update();

	switch (sceneNum)
	{
	case TITLE:
		break;
	case GAMEMAIN:

		if (input_->GetKeyState(KEY_INPUT_W, KEYS_TOUCH))
		{
			playerTransform_.x += 1;
		}
		break;
	default:
		break;
	}

}

void GameScene::Draw()
{
	DrawFormatString(10, 10, GetColor(255, 255, 255), "TEST");
	DrawBox(playerTransform_.x,playerTransform_.y,playerTransform_.x + playerTransform_.width,playerTransform_.y + playerTransform_.height,GetColor(255,255,255),1);
}