# ESPHome, Let's build a room sensor, Part 4

In this tutorial we will be adding a capacitive switch to our room sensor and building a second ESP32 device with ESPHome to simulate a remote light switch using an automation in Home Assistant, let me demonstrate the end result.

Find the simulator documentation [here](/Lets_build_a_room_sensor/Part%204/Simulator/README.md)

## Video

[![Watch the video](/Lets_build_a_room_sensor/Part%204/Images/Home-Automator-Thumbnail-Part%204.png)](https://youtu.be/Er1koLRFZCo)

## Bill of Materials

- TTP233 Capacitive Touch Sensor
    - [South Africa - DIY Electronics](https://www.diyelectronics.co.za/store/touch/1208-ttp223-capacitive-touch-sensor-module.html)
    - [US - Amazon](https://www.amazon.com/WWZMDiB-TTP223-Capacitive-Calibration-2-5-5-5V/dp/B0BFZXP1D8)
    - [Global - Aliexpress](https://www.aliexpress.com/item/1005006246380749.html)
- 3 jumper leads
    - [South Africa - Micro Robotics](https://www.robotics.org.za/index.php?route=product/product&product_id=1477)
    - [US - Amazon](https://www.amazon.com/EDGELEC-Breadboard-Optional-Assorted-Multicolored/dp/B07GD2BWPY)
    - [Global - Aliexpress](https://www.aliexpress.com/item/1005002984683377.html)
    
## Code

### GPIO Binary sensor code

    ###############################################################################
    # Binary Sensors
    ################################################################################
    - platform: gpio
        pin: GPIO12
        id: ${device_internal_name}_capacitive_light_switch
        icon: mdi:lightbulb 
        name: Capacitive Light Switch

ESPHome Reference page [ESPHome GPIO Binary sensor Page](https://esphome.io/components/binary_sensor/gpio.html)  

Full ESPHome code for Part 4 is [Here](/Lets_build_a_room_sensor/Part%204/esphome-room-sensors.yaml)   
Home Assistant Automation code [Here](/Lets_build_a_room_sensor/Part%204/automation.yaml)

## Other links mentioned in the video

- [Pictogramer](https://pictogrammers.com/library/mdi)
- [Basic Setup for all ESPHome Devices](/Tutorial%201%20-%20Basic%20Setup%20for%20all%20Devices/README.md)
- [Let's build a room sensor - Part 1](/Lets_build_a_room_sensor/Part%201/README.md)
- [Let's build a room sensor - Part 2](/Lets_build_a_room_sensor/Part%202/README.md)
- [Let's build a room sensor - Part 3](/Lets_build_a_room_sensor/Part%203/README.md)
- [Installing and configuring Home Assistant](/Tutorial%201%20-%20Basic%20Setup%20for%20all%20Devices/README.md)
- [Let's install the ESPHome Add-on](https://youtu.be/zwykvV82SGw?si=XLMDUKdHiqi_dprt)
