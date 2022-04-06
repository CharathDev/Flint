#pragma once

#include "Core.h"

namespace Flint {

	class FLINT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	
	// To be defined in CLIENT
	Application* CreateApplication();
}
