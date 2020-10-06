#include "Engine.h"

namespace dubu::engine {

Engine::Engine() {
	dubu::log::Register<dubu::log::ConsoleLogger>();

	DUBU_LOG_INFO("DUBU ENGINE STARTED!");
}

}  // namespace dubu::engine