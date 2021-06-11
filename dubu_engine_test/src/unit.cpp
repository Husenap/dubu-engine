#include <dubu_engine/dubu_engine.h>
#include <gtest/gtest.h>

TEST(dubu_engine, engine) {
	auto engine = std::make_unique<dubu::engine::Engine>();
}
