#pragma once
#include "../Login/SbLoginManager.h"

class MainBeetle
{
public:
	MainBeetle();
	~MainBeetle();
	void Init();
	SbLoginManager& GetLoginMgr() {
		return _LoginMgr;
	}
private:
	SbLoginManager _LoginMgr;
};

extern MainBeetle mainBeetle;

