#include<Bainin.h>

class Sandbox : public Bainin::Application 
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{
	}

};

Bainin::Application* Bainin::CreateApplication()
{
	return new Sandbox();
}