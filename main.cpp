#include "lib.h"
#include <spdlog/spdlog.h>

int main()
{
    auto logger = spdlog::stdout_logger_mt("console");
    logger->set_pattern("%v");
    logger->info("build {}", version());
	logger->info("Hello, World!")

    return 0;
}