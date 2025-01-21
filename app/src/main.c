/**
 * @file main.c
 * @author Lowie Deferme <lowie.deferme@kuleuven.be>
 * @brief CapBot drive example
 */

#include "capbot.h"
#include <zephyr/kernel.h>

#define DELAY K_MSEC(1000)

int main(void)
{
    if (cb_motor_init())
    {
        return -1;
    }

    for (;;)
    {
        cb_drive_forw(20);
        k_sleep(DELAY);
        cb_drive_back(20);
        k_sleep(DELAY);
        cb_drive_right(60);
        k_sleep(DELAY);
        cb_drive_left(60);
        k_sleep(DELAY);
        cb_rotate_cw(80);
        k_sleep(DELAY);
        cb_rotate_ccw(80);
        k_sleep(DELAY);
        cb_stop();
        k_sleep(DELAY);
    }

    // Unreachable
    return 0;
}
