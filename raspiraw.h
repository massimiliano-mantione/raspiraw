#include <stdlib.h>

typedef enum RASPIRAW_INIT_CODE {
    RASPIRAW_OK = 0,
    RASPIRAW_BAD_CMD_LINE = -1,
    RASPIRAW_NO_SENSOR_FOUND = -2,
    RASPIRAW_INVALID_SENSOR_MODE = -3,
    RASPIRAW_AWB_ERROR = -4,
    RASPIRAW_VCOS_ERROR = -5,
    RASPIRAW_MMAL_ERROR = -6,
    RASPIRAW_GENERIC_ERROR = -7
} RASPIRAW_INIT_CODE;

typedef void (*RASPIRAW_FRAME_PROCESSOR)(void*, size_t);

extern RASPIRAW_INIT_CODE raspiraw_init(
    int argc,
    char** argv,
    int do_sleep,
    RASPIRAW_FRAME_PROCESSOR frame_processor,
    RASPIRAW_FRAME_PROCESSOR yuv_frame_processor);

extern void raspiraw_stop();
