//client file for the Koala engine

#include "Koala.h"
//Note to self: Originally had error of "Cannot open Koala.h"; this occured because of an improper directory listing in the properties for this file

/*
namespace Koala {

	__declspec(dllimport) void Print();
}
*/

class Sandbox : public Koala::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Koala::Application* Koala::CreateApplication()
{
	return new Sandbox();
}