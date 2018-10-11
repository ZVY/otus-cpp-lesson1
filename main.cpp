#include "lib.h"
#include <spdlog/spdlog.h>

int main()
{
    auto logger = spdlog::stdout_logger_mt("console");
    logger->info("\n\nbuild {} {}", version(),"\nHello, World!\n");

    return 0;
}