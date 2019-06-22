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

extern RASPIRAW_INIT_CODE raspiraw_init(int argc, char** argv, int do_sleep);
extern void raspiraw_stop();
