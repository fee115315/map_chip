#pragma once

#include<vector>

class Map
{
public:
	Map();
	virtual ~Map();

	//グラフィックデータのロード、アンロード
	void load();
	void unload();

	//
	void updata();

	//描画
	void draw();

private:
	//マップの描画
	void drawMap(int offsetX,int offsetY);


	//マップチップ編集用カーソルの表示
	void drawCursor();

private:
	int chipNumX();
	int chipNumY();
	int chipNum();

	//マップデータの入出力
	void outputData(); //マップのデータを出力する
	void readData();   //マップのデータを読み込む

private:
	// グラフィックデータ
	int m_handle;
	int m_graphWidth;
	int m_graphHeight;

	//マップチップ編集用データ
	int m_cursorNo;
	std::vector<int> m_mapData;

	//スクロールする
	int m_scrollX;
	int m_scrollY;
};