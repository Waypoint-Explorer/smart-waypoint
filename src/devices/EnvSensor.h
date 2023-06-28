#ifndef __ENV_SENSOR__
#define __ENV_SENSOR__

#include "Arduino.h"
#include "bsec.h"
#include "model/EnvData.h"
#include "utility/Logger.h"

class EnvSensor {
   public:
    Bsec sensor;

    /// @brief Init sensor
    bool init();

    /// @brief Ger environmental data from sensor
    /// @return environmental data
    EnvData getEnvData();

   private:
    bool checkSensor();
    uint8_t bsecState[BSEC_MAX_STATE_BLOB_SIZE] = {
        2,   9,   4,   1,   61,  0,   0,   0,   0,   0,   0,  0,   131,
        0,   0,   0,   56,  0,   1,   0,   61,  47,  209, 64, 166, 49,
        209, 64,  105, 56,  205, 64,  58,  55,  205, 64,  0,  0,   0,
        0,   44,  1,   20,  20,  0,   0,   64,  64,  0,   0,  64,  64,
        0,   0,   0,   0,   3,   0,   23,  168, 95,  63,  20, 0,   0,
        225, 68,  0,   0,   225, 68,  1,   12,  0,   2,   0,  95,  69,
        122, 66,  123, 33,  104, 66,  16,  0,   3,   0,   9,  228, 177,
        64,  32,  87,  236, 65,  243, 28,  132, 66,  27,  0,  5,   0,
        0,   92,  198, 166, 184, 0,   0,   0,   0,   0,   0,  0,   98,
        24,  141, 82,  1,   1,   0,   202, 102, 56,  83,  12, 0,   9,
        0,   0,   92,  198, 166, 184, 0,   0,   0,   8,   0,  10,  0,
        117, 83,  234, 65,  0,   0,   0,   0,   140, 128, 0,  0};
};

#endif