#pragma once

#include<vector>

class Map
{
public:
	Map();
	virtual ~Map();

	//�O���t�B�b�N�f�[�^�̃��[�h�A�A�����[�h
	void load();
	void unload();

	//
	void updata();

	//�`��
	void draw();

private:

	//�}�b�v�`�b�v�ҏW�p�J�[�\���̕\��
	void drawCursor();

private:
	int chipNumX();
	int chipNumY();
	int chipNum();

	//�}�b�v�f�[�^�̓��o��
	void outputData(); //�}�b�v�̃f�[�^���o�͂���
	void readData();   //�}�b�v�̃f�[�^��ǂݍ���

private:
	// �O���t�B�b�N�f�[�^
	int m_handle;
	int m_graphWidth;
	int m_graphHeight;

	//�}�b�v�`�b�v�ҏW�p�f�[�^
	int m_cursorNo;
	std::vector<int> m_mapData;

};