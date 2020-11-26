#pragma once
#include <string>

class SbLoginManager
{
public:
	SbLoginManager();
	~SbLoginManager();
	std::string Id() const { return _Id; }
	void Id(std::string val) { _Id = val; }
	std::string Pwd() const { return _Pwd; }
	void Pwd(std::string val) { _Pwd = val; }
	std::string Cert() const { return _Cert; }
	void Cert(std::string val) { _Cert = val; }
private:
	int _LoginState = 0;
	std::string _Id;
	std::string _Pwd;
	std::string _Cert;
};

