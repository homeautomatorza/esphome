# ESPHome, Let's build a room sensor, Part 4B - Simulator

This page only covers the Simulator built in the Let's add to our room sensor - Part 4 - Capacitive switch and a simulated light.

Find the room sensor documentation [here](/Lets_build_a_room_sensor/Part%204/README.md)

## Video

[![Watch the video](/Lets_build_a_room_sensor/Part%204/Images/Home-Automator-Thumbnail-Part%204.png)](https://youtu.be/Er1koLRFZCo)

## Bill of Materials

- ESP32 Development Board
    - [South Africa - Micro Robotics](https://www.robotics.org.za/ESP32-DEV-CP2102-C)
    - [US - Amazon](https://www.amazon.com/ESP-WROOM-32-Development-Microcontroller-Integrated-Compatible/dp/B07WCG1PLV)
    - [Global - Aliexpress](https://www.aliexpress.com/item/1005004407854271.html)
- ESP8266 Development Board
    - [South Africa - Micro Robotics](https://www.robotics.org.za/D1-MINI-V4-USBC)
    - [US - Amazon](https://www.amazon.com/HiLetgo-Internet-Development-Wireless-Micropython/dp/B081CSJV2V)
    - [Global - Aliexpress](https://www.aliexpress.com/item/1005006215841284.html)
- White LED
    - [South Africa - Micro Robotics](https://www.robotics.org.za/LED-05-BW)
    - [US - Amazon](https://www.amazon.com/BOJACK-Colors-Lights-Assored-Transparent) Assortment
    - [Global - Aliexpress](https://www.aliexpress.com/item/32505130071.html)
- 330Ω Resistor
    - [South Africa - Micro Robotics](https://www.robotics.org.za/RES-330E-50)
    - [US - Amazon](https://www.amazon.com/BOJACK-Values-Resistor-Resistors-Assortment/dp/B08FHPJ5G8) Assortment
    - [Global - Aliexpress](https://www.aliexpress.com/item/32952657927.html)
- 3 jumper leads
    - [South Africa - Micro Robotics](https://www.robotics.org.za/index.php?route=product/product&product_id=1477)
    - [US - Amazon](https://www.amazon.com/EDGELEC-Breadboard-Optional-Assorted-Multicolored/dp/B07GD2BWPY)
    - [Global - Aliexpress](https://www.aliexpress.com/item/1005002984683377.html)
    
## Circuit Diagram

![Circuit Diagram](/Lets_build_a_room_sensor/Part%204/Simulator/Images/Simulator.png)

## Code

### GPIO Output code

    ################################################################################
    # Output
    ################################################################################
    output:
      - platform: gpio
        pin: GPIO012
        #name: Light Simulation LED
        id: light_simulation_led

[ESPHome Reference: GPIO Output Page](https://esphome.io/components/output/gpio.html)  

### Binary Light code

    ################################################################################
    # Light
    ################################################################################
    light:
      - platform: binary
        name: "Simulated Light"
        output: light_simulation_led

[ESPHome Reference: Binary Light Page](https://esphome.io/components/light/binary.html)  

Simulator code is [Here](/Lets_build_a_room_sensor/Part%204/Simulator/ESPHome_Simulator.yaml)   
Home Assistant Automation code [Here](/Lets_build_a_room_sensor/Part%204/automation.yaml)

## Other links mentioned in the video

- [Basic Setup for all ESPHome Devices](/Tutorial%201%20-%20Basic%20Setup%20for%20all%20Devices/README.md)
