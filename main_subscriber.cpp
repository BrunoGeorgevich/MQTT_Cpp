#include "mqtt_subscriber.h"

int main()
{
    class MQTT_Subscriber *mqtt_client;
    int rc;

    char client_id[] = CLIENT_ID;
    char host[] = BROKER_ADDRESS;
    int port = MQTT_PORT;

    bool resubscribe = true;
    mqtt_client = new MQTT_Subscriber(client_id, host, port);

    mosqpp::lib_init();

    while(true)
    {
        rc = mqtt_client->loop();

        if (rc) mqtt_client->reconnect();
        else if(resubscribe) mqtt_client->subscribe(NULL, MQTT_TOPIC);

	resubscribe = rc ? true : false;
    }
    mosqpp::lib_cleanup();
    return 0;
}

