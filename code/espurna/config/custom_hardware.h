
#ifndef NODEMCU_ID
#define NODEMCU_ID                  0
#endif
#ifndef SONOFF_ID
#define SONOFF_ID                   0
#endif
#ifndef HASSMART_ID
#define HASSMART_ID                 0
#endif

#define MAKE_STRING(e)              #e
#define MAKE_DEVICE(a, b)           MAKE_STRING(a) MAKE_STRING(b)

#undef DEVICE
#if NODEMCU_ID
    #define DEVICE                  MAKE_DEVICE(NodeMCU, NODEMCU_ID)
#elif SONOFF_ID
    #define DEVICE                  MAKE_DEVICE(Sonoff, SONOFF_ID)
#elif HASSMART_ID
    #define DEVICE                  MAKE_DEVICE(Hassmart, HASSMART_ID)
#endif

#if NODEMCU_ID == 1
    #define HOSTNAME                "JingHuaQi1"
    #define IR_SUPPORT              1
    #define IR_RX_PIN               5
    #define IR_TX_PIN               4
    #define IR_USE_RAW              1
    #define RELAY1_PIN              14
    #define RELAY2_PIN              12
    #define RELAY1_MODE_PIN         13
    #define RELAY_PROVIDER          RELAY_PROVIDER_SHARP

    // #define MHZ19_SUPPORT           1
    // #define MHZ19_RX_PIN            3
    // #define MHZ19_TX_PIN            1

    // #undef THINGSPEAK_SUPPORT
    // #define THINGSPEAK_SUPPORT      1
    // #define THINGSPEAK_ENABLED      1
    // #define THINGSPEAK_LEWEI        1
    // #define THINGSPEAK_APIKEY       THINGSPEAK_APIKEY2

    // #define DHT_SUPPORT             1
    // #define DHT_PIN                 2
    // #define DHT_TYPE                DHT_CHIP_DHT11

#elif NODEMCU_ID == 2
    #define HOSTNAME                "JingHuaQi2"
    #define RELAY1_MODE_PIN         5
    #define RELAY1_PIN              4
    #define RELAY2_PIN              0
    #define RELAY1_OFF_PIN          2
    #define RELAY_PROVIDER          RELAY_PROVIDER_SHARP
    #define RELAY_PROVIDER_SHARP_TRIGGER LOW
#elif NODEMCU_ID == 3
    #define HOSTNAME                "JingHuaQi3"
    #define RELAY1_MODE_PIN         5
    #define RELAY1_PIN              4
    #define RELAY2_PIN              0
    #define RELAY1_OFF_PIN          2
    #define RELAY_PROVIDER          RELAY_PROVIDER_SHARP
    #define RELAY_PROVIDER_SHARP_TRIGGER LOW

    // #define PMSX003_SUPPORT         1
    // #define PMS_TYPE                PMS_TYPE_5003S
    // #define PMS_SMART_SLEEP         1
    // #define PMS_USE_SOFT            1

    // #define IR_SUPPORT              1
    // #define IR_RX_PIN               12
    // #define IR_TX_PIN               14
    // #define IR_USE_RAW              1

    #define ANALOG_SUPPORT          1
    #define ANALOG_FACTOR           -1.0
    #define ANALOG_OFFSET           1024
    #define ANALOG_DECIMALS         0

    #define DIGITAL_SUPPORT         1
    #define DIGITAL1_PIN            13
    #define DIGITAL1_PIN_MODE       INPUT
    #define DIGITAL1_DEFAULT_STATE  0
    #define DIGITAL2_PIN            15
    #define DIGITAL2_PIN_MODE       INPUT
    #define DIGITAL2_DEFAULT_STATE  1

#elif NODEMCU_ID == 4
    #define HOSTNAME                "JingHuaQi4"
    #undef THINGSPEAK_SUPPORT    
    #define THINGSPEAK_SUPPORT      1
    #define THINGSPEAK_ENABLED      1
    #define THINGSPEAK_LEWEI        1
    #define THINGSPEAK_APIKEY       THINGSPEAK_APIKEY2

    #define RELAY1_MODE_PIN         5
    #define RELAY1_PIN              4
    #define RELAY2_PIN              0
    #define RELAY1_OFF_PIN          2
    #define RELAY_PROVIDER          RELAY_PROVIDER_SHARP
    #define RELAY_PROVIDER_SHARP_TRIGGER LOW

    #define PMSX003_SUPPORT         1
    #define PMS_TYPE                PMS_TYPE_5003ST
    #define PMS_SMART_SLEEP         1
    #define PMS_USE_SOFT            1

    #define SENSEAIR_SUPPORT        1
    #define SENSEAIR_RX_PIN         1
    #define SENSEAIR_TX_PIN         3
#elif NODEMCU_ID == 5
    #define HOSTNAME                "YinXiang"
    #undef THINGSPEAK_SUPPORT
    #define THINGSPEAK_SUPPORT      1
    #define THINGSPEAK_ENABLED      1
    #define THINGSPEAK_LEWEI        1
    #define THINGSPEAK_APIKEY       THINGSPEAK_APIKEY2

    #define RELAY1_PIN              15
    #define RELAY1_RESET_PIN        15
    #define RELAY1_TYPE             RELAY_TYPE_LATCHED
    #define RELAY_LATCHING_PULSE    200

    #define RELAY_PROVIDER          RELAY_PROVIDER_JBL

    #define MHZ19_SUPPORT           1
    #define MHZ19_RX_PIN            3
    #define MHZ19_TX_PIN            1

    #define DHT_SUPPORT             1
    #define DHT_PIN                 2
    #define DHT_TYPE                DHT_CHIP_DHT11

    // #define DIGITAL_SUPPORT         1
    // #define DIGITAL1_PIN            4
    // #define DIGITAL1_PIN_MODE       INPUT
    // #define DIGITAL1_DEFAULT_STATE  0

    #define I2C_SDA_PIN             4
    #define I2C_SCL_PIN             5
    #define BH1750_SUPPORT          1
#elif NODEMCU_ID == 6
    #define HOSTNAME                "ChuanGanQi"
    #undef THINGSPEAK_SUPPORT
    #define THINGSPEAK_SUPPORT      1
    #define THINGSPEAK_ENABLED      1
    #define THINGSPEAK_LEWEI        1
    #define THINGSPEAK_APIKEY       THINGSPEAK_APIKEY1
    #define PMSX003_SUPPORT         1
    #define PMS_TYPE                PMS_TYPE_5003T
    #define PMS_SMART_SLEEP         1
    #define PMS_USE_SOFT            1
#elif NODEMCU_ID == 7
    #define HOSTNAME                "ChuanGanQi2"
    // #undef THINGSPEAK_SUPPORT
    // #define THINGSPEAK_SUPPORT      1
    // #define THINGSPEAK_LEWEI           1

    // #define IR_SUPPORT              1
    // #define IR_USE_RAW              1
    // #define IR_RX_PIN               5
    // #define IR_TX_PIN               4

    // #define PMSX003_SUPPORT         1
    // #define PMS_TYPE                PMS_TYPE_5003S
    // #define PMS_SMART_SLEEP         1
    // #define PMS_USE_SOFT            1

    #define SENSEAIR_SUPPORT        1
    #define SENSEAIR_RX_PIN         1
    #define SENSEAIR_TX_PIN         3
#elif SONOFF_ID == 1
    #define HOSTNAME                "GuoDaoGuiDeng"
    #define RELAY2_PIN              20 // Fake GPIO
    #define RELAY2_TYPE             RELAY_TYPE_NORMAL
    #define BUTTON3_PIN             3
    #define BUTTON3_MODE            BUTTON_SWITCH | BUTTON_SET_PULLUP | BUTTON_DEFAULT_HIGH
    #define BUTTON3_RELAY           2 // Button3 -> Relay2 (Built-in Button1/2->Relay1)

    #define RELAY3_PIN              21 // Fake GPIO
    #define RELAY3_TYPE             RELAY_TYPE_NORMAL
    #define BUTTON4_PIN             1
    #define BUTTON4_MODE            BUTTON_SWITCH | BUTTON_SET_PULLUP | BUTTON_DEFAULT_HIGH
    #define BUTTON4_RELAY           3 // Button4 -> Relay3
#elif SONOFF_ID == 2
    #define HOSTNAME                "GuoDaoTongDeng"
    #undef BUTTON2_PIN
    #define BUTTON2_PIN             GPIO_NONE
    #undef RELAY2_PIN
    #define RELAY2_PIN              14
    #undef RELAY2_TYPE
    #define RELAY2_TYPE             RELAY_TYPE_NORMAL
    
    #define I2C_SDA_PIN             1
    #define I2C_SCL_PIN             3
    #define BH1750_SUPPORT          1
#elif HASSMART_ID
    #undef MANUFACTURER
    #define MANUFACTURER            "HASSMART"
    #if HASSMART_ID == 1
        #define HOSTNAME            "CanTingTongDeng"
    #elif HASSMART_ID == 2
        #define HOSTNAME            "XiShouJianDeng"
    #else
        #define HOSTNAME            DEVICE
    #endif

    // Buttons
    #undef BUTTON1_PIN
    #define BUTTON1_PIN             0
    #undef BUTTON2_PIN
    #define BUTTON2_PIN             14
    #undef BUTTON1_RELAY
    #define BUTTON1_RELAY           1
    #undef BUTTON2_RELAY
    #define BUTTON2_RELAY           2
    #undef BUTTON1_MODE
    #define BUTTON1_MODE            BUTTON_PUSHBUTTON | BUTTON_DEFAULT_HIGH
    #undef BUTTON2_MODE
    #define BUTTON2_MODE            BUTTON_PUSHBUTTON | BUTTON_DEFAULT_HIGH

    // Relays
    #undef RELAY1_PIN
    #define RELAY1_PIN              12
    #undef RELAY2_PIN
    #define RELAY2_PIN              5
    #undef RELAY1_TYPE 
    #define RELAY1_TYPE             RELAY_TYPE_NORMAL
    #undef RELAY2_TYPE
    #define RELAY2_TYPE             RELAY_TYPE_NORMAL

    // LEDs
    #undef LED1_PIN
    #define LED1_PIN                13
    #undef LED1_PIN_INVERSE
    #define LED1_PIN_INVERSE        0

    #if HASSMART_ID == 1 || HASSMART_ID == 2 || HASSMART_ID == 3
        #undef BUTTON3_PIN
        #define BUTTON3_PIN         GPIO_NONE
    #elif HASSMART_ID == 4 || HASSMART_ID == 5 || HASSMART_ID == 6
        #undef BUTTON3_PIN
        #define BUTTON3_PIN         2
        #undef BUTTON3_RELAY
        #define BUTTON3_RELAY       3
        #undef BUTTON3_MODE
        #define BUTTON3_MODE        BUTTON_PUSHBUTTON | BUTTON_DEFAULT_HIGH
        #define RELAY3_PIN          4
        #define RELAY3_TYPE         RELAY_TYPE_NORMAL
        #if HASSMART_ID == 5
            #undef RELAY2_PIN
            #define RELAY2_PIN      22 // FAKE
            #undef RELAY3_PIN
            #define RELAY3_PIN      23 // FAKE
            #define RELAY4_PIN      4
            #define RELAY4_TYPE     RELAY_TYPE_NORMAL
        #endif
    #endif

#endif
