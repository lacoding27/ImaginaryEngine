#include <Imaginary.h>


class Sandbox : public ImaginaryEngine::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}

	
};



ImaginaryEngine::Application* ImaginaryEngine::CreateApplication()
{
	return new Sandbox();
}




