#pragma once

#include "core.h"

namespace Koala {

	class KOALA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//to be defined in CLIENT, which means that within SandboxApp, we can just use a modified entry point based on this
	Application* CreateApplication();

}