#pragma once

#include "Core.h"

namespace GameEngine {

	class GAMEENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// TO BE DEFINED IN CLIENT
	Application* CreateApplication();
}