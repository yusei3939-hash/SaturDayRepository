#pragma once
#include"Config.h"
class Collision
{
private:
	int x;
	int v;
	int widht;
	int height;

public:
	Collision();

	//短形の位置と大きさを設定
	void SetRect(int x, int y);

	//短形に位置だけ変更する
	void SetPosition(int x, int y);

	//短形同士が重なっているか調べる
	bool IsHit(const Collision& other)const;

	//衝突したら短形を指定された方向へ押し戻す
	void Fixposition(const Collision& block, unsigned char blockInfo);
	//Get関数

	int GetX()const;
	int GetY()const;
	int GetWidht()const;
	int GetHeight()const;


};

