#pragma once

#ifdef FL_PLATFORM_WINDOWS

extern Flint::Application* Flint::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Flint::CreateApplication();
	app->Run();
	delete app;
}

#endif // LM_PLATFORM_WINDOWS
