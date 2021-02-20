// Redefine

#undef MQTT_STATUS_ONLINE
#define MQTT_STATUS_ONLINE          "online" 
#undef MQTT_STATUS_OFFLINE
#define MQTT_STATUS_OFFLINE         "offline"

#undef SENSOR_DEBUG
#define SENSOR_DEBUG                1
#undef SENSOR_READ_INTERVAL
#define SENSOR_READ_INTERVAL        10
#undef SENSOR_REPORT_EVERY
#if (defined(DIGITAL_SUPPORT) && DIGITAL_SUPPORT) || (defined(IR_RX_PIN) && IR_RX_PIN)
#define SENSOR_REPORT_EVERY         1
#else
#define SENSOR_REPORT_EVERY         6
#endif
#undef HEARTBEAT_REPORT_IP
#undef HEARTBEAT_REPORT_MAC
#undef HEARTBEAT_REPORT_RSSI
#undef HEARTBEAT_REPORT_UPTIME
#undef HEARTBEAT_REPORT_DATETIME
#undef HEARTBEAT_REPORT_FREEHEAP
#undef HEARTBEAT_REPORT_VCC
#undef HEARTBEAT_REPORT_RELAY
#undef HEARTBEAT_REPORT_LIGHT
#undef HEARTBEAT_REPORT_HOSTNAME
#undef HEARTBEAT_REPORT_APP
#undef HEARTBEAT_REPORT_VERSION
#undef HEARTBEAT_REPORT_BOARD
#undef HEARTBEAT_REPORT_SSID
#undef HEARTBEAT_REPORT_LOADAVG
#define HEARTBEAT_REPORT_IP         0
#define HEARTBEAT_REPORT_MAC        0
#define HEARTBEAT_REPORT_RSSI       0
#define HEARTBEAT_REPORT_UPTIME     0
#define HEARTBEAT_REPORT_DATETIME   0
#define HEARTBEAT_REPORT_FREEHEAP   0
#define HEARTBEAT_REPORT_VCC        0
#define HEARTBEAT_REPORT_RELAY      0
#define HEARTBEAT_REPORT_LIGHT      0
#define HEARTBEAT_REPORT_HOSTNAME   0
#define HEARTBEAT_REPORT_APP        0
#define HEARTBEAT_REPORT_VERSION    0
#define HEARTBEAT_REPORT_BOARD      0
#define HEARTBEAT_REPORT_SSID       0
#define HEARTBEAT_REPORT_LOADAVG    0