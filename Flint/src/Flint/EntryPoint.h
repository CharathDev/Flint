#pragma once

#ifdef FL_PLATFORM_WINDOWS

extern Flint::Application* Flint::CreateApplication();

int main(int argc, char** argv)
{	
	Flint::Log::Init();
	FL_CORE_WARN("Initialized Log!");
	int a = 5;
	FL_INFO("Hello! Var={0}", a);

	auto app = Flint::CreateApplication();
	app->Run();
	delete app;
}

#endif // LM_PLATFORM_WINDOWS
