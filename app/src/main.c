/**
 * @file main.c
 * @author Lowie Deferme <lowie.deferme@kuleuven.be>
 * @brief CapBot drive example
 */

#include "capbot.h"
#include <zephyr/kernel.h>

void main(void)
{
    for (;;)
    {
        k_sleep(K_MSEC(1000));
    }
}
