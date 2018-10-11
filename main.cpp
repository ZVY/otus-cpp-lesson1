#include "lib.h"
#include <spdlog/spdlog.h>

int main()
{
    auto logger = spdlog::stdout_logger_mt("console");
    logger->set_pattern("%v");
    logger->info("\nbuild {} {}", version(),"\nHello, World!\n");

    return 0;
}