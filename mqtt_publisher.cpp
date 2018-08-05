#include "mqtt_publisher.h"

MQTT_Publisher::MQTT_Publisher() : mosquittopp(CLIENT_ID)
{
    mosqpp::lib_init();
    connect_async(BROKER_ADDRESS, MQTT_PORT, DEFAULT_KEEP_ALIVE);
    loop_start();
}

MQTT_Publisher::~MQTT_Publisher()
{
    loop_stop();
    mosqpp::lib_cleanup();
}

bool MQTT_Publisher::send_message(const char *_message)
{
    int ret = publish(NULL, MQTT_TOPIC, strlen(_message), _message, false, false);
    return ( ret == MOSQ_ERR_SUCCESS );
}
