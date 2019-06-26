#pragma once
//header file for creating our Koala file for us
//

#ifdef KA_PLATFORM_WINDOWS

extern Koala::Application* Koala::CreateApplication(); //to be implemented within client, ie. application.h

//function to be defined elsewhere that will be returned for us
//this creates our application by calling the CreateApplication function stored in SandboxApp
int main(int argc, char** argv)
{
	printf("This is the koala engine!");
	auto app = Koala::CreateApplication();
	app->Run();
	delete app;
}

#endif