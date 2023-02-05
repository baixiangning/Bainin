#pragma once

#ifdef BN_PLATFORM_WINDOWS

	extern Bainin::Application* Bainin::CreateApplication();
	
	int main(int argc,char** argv)
	{
		auto app = Bainin::CreateApplication();
		app->Run();
		delete app;
	}
#endif 