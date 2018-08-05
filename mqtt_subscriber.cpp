#include "mqtt_subscriber.h"

#ifdef DEBUG
#include <iostream>
#endif

MQTT_Subscriber::MQTT_Subscriber(const char *id, const char *host, int port) : mosquittopp(id)
{
    int keepalive = DEFAULT_KEEP_ALIVE;
    connect(host, port, keepalive);
}

void MQTT_Subscriber::on_message(const struct mosquitto_message *message) {
    int payload_size = MAX_PAYLOAD + 1;
    char buf[payload_size];
    memset(buf, 0, payload_size * sizeof(char));
    /* Copy N-1 bytes to ensure always 0 terminated. */
    memcpy(buf, message->payload, MAX_PAYLOAD * sizeof(char));
    printf("%s\n", buf);
}
