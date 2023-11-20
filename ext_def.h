// Language config
#define CURRENT_LANG INTL_LANG

// Wifi config
const char WLANSSID[] PROGMEM = "XXXXXXXXXXX";
const char WLANPWD[] PROGMEM = "XXXXXXXXXXX";


#define TIME_FOR_WIFI_CONFIG 240000;
#define SENDING_INTERVALL_MS 120000;

// BasicAuth config
const char WWW_USERNAME[] PROGMEM = "admin";
const char WWW_PASSWORD[] PROGMEM = "";
#define WWW_BASICAUTH_ENABLED 0

// Sensor Wifi config (config mode)
#define FS_SSID ""
#define FS_PWD "nebuleaircfg"

#define HAS_WIFI 1

//NBIoT

#define HAS_NBIOT 0
#define CONFIG_NBIOT 0

// APN -- Access Point Name. Gateway between GPRS MNO
// and another computer network. E.g. "hologram
const char APN[] PROGMEM = "hologram";  
//const unsigned int OPERATEUR = 20801; // ORANGE!!!!!
const unsigned int OPERATEUR = 20801;
//const unsigned int OPERATEUR = 26202;

#define NBIOT_FORMAT 1  // 0 = json 1 = byte

//LoRaWAN

#define HAS_LORA 0
const char APPEUI[] = "000";
const char DEVEUI [] = "000";
const char APPKEY[] = "000";

// Where to send the data?
#define SEND2SENSORCOMMUNITY 0
#define SSL_SENSORCOMMUNITY 0
#define SEND2MADAVI 0
#define SSL_MADAVI 0
#define SEND2CSV 0
#define SEND2CUSTOM 1
#define SEND2CUSTOM2 0

enum LoggerEntry {
    LoggerSensorCommunity,
    LoggerMadavi,
    LoggerCustom,
    LoggerCustom2,
    LoggerNBIoTJson,
    LoggerNBIoTByte,
    LoggerCount
};

struct LoggerConfig {
    uint16_t destport;
    uint16_t errors;
    void* session;
};

// IMPORTANT: NO MORE CHANGES TO VARIABLE NAMES NEEDED FOR EXTERNAL APIS
static const char HOST_MADAVI[] PROGMEM = "api-rrd.madavi.de";
static const char URL_MADAVI[] PROGMEM = "/data.php";
#define PORT_MADAVI 80
#define PORT_DUSTI 80

static const char HOST_SENSORCOMMUNITY[] PROGMEM = "api.sensor.community";
static const char URL_SENSORCOMMUNITY[] PROGMEM = "/v1/push-sensor-data/";
#define PORT_SENSORCOMMUNITY 80

static const char NTP_SERVER_1[] PROGMEM = "ntp-p1.obspm.fr";
static const char NTP_SERVER_2[] PROGMEM = "ntp.obspm.fr";

// define own API
static const char HOST_CUSTOM[] PROGMEM = "data.nebuleair.fr";
static const char URL_CUSTOM[] PROGMEM = "/wifi.php";
#define PORT_CUSTOM 80
#define USER_CUSTOM ""
#define PWD_CUSTOM ""
#define SSL_CUSTOM 0

// define own API
static const char HOST_CUSTOM2[] PROGMEM = "192.168.234.1";
static const char URL_CUSTOM2[] PROGMEM = "/data.php";
#define PORT_CUSTOM2 80
#define USER_CUSTOM2 ""
#define PWD_CUSTOM2 ""
#define SSL_CUSTOM2 0

// API NBIoT json
static const char HOST_NBIOT_JSON[] PROGMEM = "data.nebuleair.fr";
static const char URL_NBIOT_JSON[] PROGMEM = "/nbiotjson.php";
#define PORT_NBIOT_JSON 80
#define USER_NBIOT_JSON ""
#define PWD_NBIOT_JSON ""
#define SSL_NBIOT_JSON 0

// API NBIoT byte
static const char HOST_NBIOT_BYTE[] PROGMEM = "data.nebuleair.fr";
static const char URL_NBIOT_BYTE[] PROGMEM = "/nbiotbyte.php";
#define PORT_NBIOT_BYTE 80
#define USER_NBIOT_BYTE ""
#define PWD_NBIOT_BYTE ""
#define SSL_NBIOT_BYTE 0


#define PM_SERIAL_RX D39
#define PM_SERIAL_TX D32 
#define NBIOT_SERIAL_RX D36
#define NBIOT_SERIAL_TX D27
#define NO2_SERIAL_RX D16
#define NO2_SERIAL_TX D17 
#define I2C_PIN_SCL D22
#define I2C_PIN_SDA D21
#define LED_PIN D33

// SDS011, the more expensive version of the particle sensor
#define SDS_READ 0
#define SDS_API_PIN 1

// Tera Sensor Next PM sensor
#define NPM_READ 0
// #define NPM_FULLTIME 1
#define NPM_API_PIN 1

// BMP280/BME280, temperature, pressure (humidity on BME280)
#define BMX280_READ 0
#define BMP280_API_PIN 3
#define BME280_API_PIN 11

// CCS811, COV Sensor

#define CCS811_READ 0
// #define CCS811_API_PIN X

// Envea Cairsens NO2

#define ENVEANO2_READ 0
// #define ENVEANO2_API_PIN X

#define HAS_LED_VALUE 1
//#define LEDS_NB 64
//#define LEDS_NB 1 //for monoLED
#define LEDS_NB 8 //for LEDline
//#define LEDS_MATRIX true 
#define LEDS_MATRIX false // for lEDline  
#define BRIGHTNESS 50
#define RGPD 0
#define GAMMA true
#define VALUE_DISPLAYED 2

// Set debug level for serial output?
#define DEBUG 5

static const char URL_API_SENSORCOMMUNITY[] PROGMEM = "https://data.sensor.community/airrohr/v1/sensor/";

//Location

const char LATITUDE[] PROGMEM = "43.296";
const char LONGITUDE[] PROGMEM = "5.369";
