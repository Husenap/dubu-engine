#pragma once

namespace dubu::engine {

class Engine : public dubu::event::EventSubscriber {
public:
	Engine();

	void Start();

private:
	void Run();

	std::unique_ptr<dubu::window::Window> mWindow;
};

}  // namespace dubu::engine