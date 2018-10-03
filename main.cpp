#include "lib.h"
#include <iostream>

#include <spdlog/spdlog.h>

int main()
{
    auto logger = spdlog::stdout_logger_mt("console");
    logger->info("build {}", version());
    std::cout << "Hello, World!";

    return 0;
}
