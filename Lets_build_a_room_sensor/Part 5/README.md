# ESPHome, Let's build a room sensor, Part 5

In this tutorial we will be adding a passive infrared sensor to detect movement and switch a light on and off with an automation.
We will also discuss the key differences between movement and presence and the uses of each situations.

## Video

[![Watch the video](Images/YouTube%20Thumbnail%20-%20ESPHome%20-%20Add%20PIR.jpg)](https://youtu.be/IsnttcmHDSU)

## Bill of Materials

Some of these links maybe affilites and I may make a percentage on it, it will not cost you any more.
- Passive Infrared Sensor
    - [South Africa - DIY Electronics](https://www.robotics.org.za/HC-SR501)
    - [US - Amazon](https://amzn.to/4eEAye8)
    - [Global - Aliexpress](https://www.aliexpress.com/item/1005006336225455.html)
- Alternate, Mini PIR sensor
    - [South Africa - Micro Robotics](https://www.robotics.org.za/HC-SR505)
    - [US - Amazon](https://amzn.to/3KV4rJv)
    - [Global - Aliexpress](https://www.aliexpress.com/item/1005004616033496.html)

## Circuit Diagram

![Circuit Diagram](Images/Room%20Sensor%20Package%204_bb.png)

## Code

### GPIO Binary sensor code

    ###############################################################################
    # Passive Infrared Sensor
    ################################################################################
    # Passive Infrared Sensor
    - platform: gpio
        pin: GPIO14
        id: movement
        name: Movement
        device_class: motion

ESPHome Reference page [ESPHome GGeneric PIR sensor Page](https://devices.esphome.io/devices/Generic-PIR)  

Full ESPHome code for Part 5 is [Here](Part%205/esphome-room-sensors.yaml)   
Home Assistant Automation code [Here](Part%205/automation.yaml)

## Other useful or mentioned links

- [Let's build a room sensor - Part o](/Lets_build_a_room_sensor/Part%200/README.md)
- [Let's build a room sensor - Part 1](/Lets_build_a_room_sensor/Part%201/README.md)
- [Let's build a room sensor - Part 2](/Lets_build_a_room_sensor/Part%202/README.md)
- [Let's build a room sensor - Part 3](/Lets_build_a_room_sensor/Part%203/README.md)
- [Let's build a room sensor - Part 4](/Lets_build_a_room_sensor/Part%204/README.md)
- [Installing and configuring Home Assistant](/Tutorial%201%20-%20Basic%20Setup%20for%20all%20Devices/README.md)
- [Let's install the ESPHome Add-on](https://youtu.be/zwykvV82SGw?si=XLMDUKdHiqi_dprt)
