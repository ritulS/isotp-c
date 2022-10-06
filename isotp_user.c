#include <stdint.h>
#include "isotp_user.h"

/* required, this must send a single CAN message with the given arbitration
    * ID (i.e. the CAN message ID) and data. The size will never be more than 8
    * bytes. */
int  isotp_user_send_can(const uint32_t arbitration_id,
                            const uint8_t* data, const uint8_t size) {
    // ...
    return 0;
}

/* required, return system tick, unit is millisecond */
uint32_t isotp_user_get_ms(void) {
    return 0;
}

/* optional, provide to receive debugging log messages */
void isotp_user_debug(const char* message, ...) {
    return;
}