#pragma once

typedef struct {
	int UseFlag;
	int Frames;
	int Handle[64];
} D_ANIMATION;

int LoadAnimation(const char* Filename, int Width, int Height, int Frames);
int DeleteAnimation(int Handle);

class ANIMATION {
public:
	ANIMATION();
	void Set(int Handle, float Speed = 1.0F, int LoopFlag = 0);
	void Seek(int FrameTime);
	void Play();
	void Draw(int x, int y);
	int GetFrameTime();
	int GetState();
private:
	D_ANIMATION* AniHandle;
	int FrameTime;
	float Speed;
	char LoopFlag;
};