#include "Engine.h"

namespace dubu::engine {

Engine::Engine() {}

void Engine::Start() {
	dubu::log::Register<dubu::log::ConsoleLogger>();

	DUBU_LOG_INFO("dubu-engine starting...");

	mWindow =
	    std::make_unique<dubu::window::GLFWWindow>(800, 600, "dubu-engine");
	Subscribe<dubu::window::EventResize>(
	    [](const auto& e) {
		    DUBU_LOG_INFO("Window resized: ({}, {})", e.width, e.height);
	    },
	    *mWindow);

	DUBU_LOG_INFO("dubu-engine started!");

	Run();
}

void Engine::Run() {
	while (!mWindow->ShouldClose()) {
		mWindow->PollEvents();
	}
}

}  // namespace dubu::engine