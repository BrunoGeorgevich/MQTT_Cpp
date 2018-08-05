#include "mqtt_publisher.h"

int main() {
    MQTT_Publisher *publisher = new MQTT_Publisher;
    bool messageWasSended = publisher->send_message("Teste");
    std::cout << "MESSAGE WAS SENDED? " << messageWasSended << std::endl;
    return 0;
}
