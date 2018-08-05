# MQTT_Cpp
An simple publisher and subscriber examples using Cpp and Mosquitto.

## INSTALL
```bash
sudo apt-get install mosquitto* -y &&
cd ~ &&
wget http://mosquitto.org/files/source/mosquitto-1.5.tar.gz &&
tar -xf mosquitto-1.5.tar.gz  &&
cd mosquitto-1.5/ &&
make -j7 &&
sudo make install &&
cd .. &&
sudo rm -r mosquitto-1.5 &&
echo "MOSQUITTO 1.5 IS READY TO BE USED"
```

## RUN
```bash
git clone https://github.com/BrunoGeorgevich/MQTT_Cpp &&
cd MQTT_Cpp &&
g++ main_publisher.cpp mqtt_publisher.cpp -L/usr/local/lib -lmosquittopp -o publisher &&
g++ main_subscriber.cpp mqtt_subscriber.cpp -L/usr/local/lib -lmosquittopp -o subscriber &&
echo "ALL BINARIES WERE GENERATED WITH SUCESS!" &&
echo "TO RUN THE SUBSCRIBER TYPE: ./subscriber" &&
echo "TO RUN THE PUBLISHER TYPE: ./publisher"
```

