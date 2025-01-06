/**
 * @file main.c
 * @author Lowie Deferme <lowie.deferme@kuleuven.be>
 * @brief Capbot zephyr API example
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(capbot, LOG_LEVEL_DBG);

void main(void)
{
    for (;;)
    {
        LOG_INF("Hello world");
        k_sleep(K_MSEC(1000));
    }
}
