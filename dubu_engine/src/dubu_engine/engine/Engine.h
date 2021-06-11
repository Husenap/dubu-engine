#pragma once

#include <dubu_window/dubu_window.h>

namespace dubu::engine {

class Engine : public dubu::event::EventSubscriber {
public:
	Engine();

	void Start();

private:
	void Run();

	std::unique_ptr<dubu::window::IWindow> mWindow;
};

}  // namespace dubu::engine