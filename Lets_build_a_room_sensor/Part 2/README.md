[![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/B0B7VM3UP)
# ESPHome, Let's build a room sensor, Part 2

In this video we will dive into a bit of I2C and add a BH1750 Light Sensor Module

## Video

[![Watch the video](/Lets_build_a_room_sensor/Part%202/Images/Let's%20build%20a%20room%20sensor%20-%20Part%202%20-%20BH1750%20I2C%20Light%20Sensor.png)](https://youtu.be/U4Ja7jZ9PFM)

## Bill of Materials

- Everything from [Part 1](/Lets_build_a_room_sensor/Part%201/README.md)
- BH1750 I2C Ambient Light Sensor Module
    - [South Africa - Micro Robotics](https://www.robotics.org.za/BH1750)
    - [US - Amazon](https://www.amazon.com/SHILLEHTEK-Pre-Soldered-Intensity-Raspberry-Microcontrollers/dp/B0CN55S7Z9/)
    - [UK - Amazon](https://www.amazon.co.uk/DollaTek-GY-302-BH1750-Intensity-Illumination/dp/B07DJ4SNJ2)

## Code

### I2C YAML Code

   	################################################################################
    # I2C
    ################################################################################
    i2c:
      sda: GPIO21
      scl: GPIO22
      scan: true
      id: ${device_internal_name}_i2c_bus_1

ESPHome Reference page [ESPhome I2C Bus](https://esphome.io/components/i2c)

### BH1750 I2C Ambient Light Sensor Module

    - platform: bh1750
      name: Illuminance
      id: ${device_internal_name}_illuminance
      address: 0x23
      update_interval: ${device_sampling_time}

ESPHome Reference page [ESPHome BH1750 AMbient Light Sensor page](https://esphome.io/components/sensor/bh1750.html)

Full code for Part 2 is  [Here](/Lets_build_a_room_sensor/Part%202/esphome-room-sensors.yaml)

## Links mentioned in the video

- [Let's build a room sensor - Part 1](/Lets_build_a_room_sensor/Part%201/README.md)
- [Installing and configuring Home Assistant](/Tutorial%201%20-%20Basic%20Setup%20for%20all%20Devices/README.md)
- [Let's install the ESPHome Add-on](https://youtu.be/zwykvV82SGw?si=XLMDUKdHiqi_dprt)
