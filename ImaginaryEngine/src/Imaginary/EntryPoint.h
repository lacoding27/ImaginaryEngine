#pragma once

#ifdef IMAGINARY_PLATFORM_WINDOWS

extern ImaginaryEngine::Application* ImaginaryEngine::CreateApplication();

int main(int argc, char** argv) 
{

	
	auto app = ImaginaryEngine::CreateApplication(); 
	app->Run();
	delete app;

}


#endif