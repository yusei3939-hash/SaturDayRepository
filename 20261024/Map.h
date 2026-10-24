#pragma once
#include<vector>
#include"Config.h"
class Map
{
private:
	//ファイル読み込み
	bool LoadMap(const char* filePath, std::vector < std::vector<int>>& mapDate);

	void DrawLayer(const std::vector<std::vector<int>>& mapData)const;

	bool IsValidMapPosition(int mapX, int mapY);

	int chipImages[Config::MAP_CHIP_IMAGE_COUNT];
	//マップの内容
	std::vector<std::vector<int>>backMap;
	std::vector<std::vector<int>>baseMap;
	std::vector<std::vector<int>>nearMap;


	int mapXNum;
	int mapYNum;
	bool isInitialized;
public:
	Map();
	~Map();

	//画像とCSVを読み込み
	

	/// <summary>
	/// 画像読み込みの初期化
	/// </summary>
	/// <returns>初期化内容</returns>
	bool Init();


	void Draw()const;

	//DxLib終了前に呼び出して画像
	void Finalize();

};

