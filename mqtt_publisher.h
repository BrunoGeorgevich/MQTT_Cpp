#ifndef MQTT_PUBLISHER_H
#define MQTT_PUBLISHER_H

#include <mosquittopp.h>
#include <bits/stdc++.h>

#define MAX_PAYLOAD 50
#define MQTT_PORT 1883
#define DEFAULT_KEEP_ALIVE 60
#define BROKER_ADDRESS "localhost"

#define CLIENT_ID "ROBOT ARM SENDER"
#define MQTT_TOPIC "robot_arm_point"

class MQTT_Publisher : public mosqpp::mosquittopp
{
public:
    MQTT_Publisher();
    ~MQTT_Publisher();
    bool send_message(const char * _message);
};

#endif // MQTT_PUBLISHER_H
