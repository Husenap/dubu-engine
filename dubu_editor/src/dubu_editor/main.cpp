#include <iostream>

#include <dubu_engine/dubu_engine.h>

int main() {
	auto engine = std::make_unique<dubu::engine::Engine>();

	engine->Start();

	return 0;
}