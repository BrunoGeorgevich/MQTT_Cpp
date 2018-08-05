#ifndef MQTT_CLIENT_H
#define MQTT_CLIENT_H

#include <mosquittopp.h>
#include <bits/stdc++.h>

#define MAX_PAYLOAD 50
#define MQTT_PORT 1883
#define DEFAULT_KEEP_ALIVE 60
#define BROKER_ADDRESS "localhost"

#define CLIENT_ID "ROBOT ARM RECEIVER"
#define MQTT_TOPIC "robot_arm_point"

class MQTT_Subscriber : public mosqpp::mosquittopp
{
public:
    MQTT_Subscriber(const char *id, const char *host, int port);
    void on_message(const struct mosquitto_message *message);
};

#endif //MQTT_CLIENT_H
