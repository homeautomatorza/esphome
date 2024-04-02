# ESPHome, Let's build a room sensor, Part 3

In this video, we are exploring eCO2 and TVOC and adding these sensors to our project and add a horseshoe card to visualize the data.

## Video

[![Watch the video](/Part%203/Images/Home-Automator-Thumbnail.png)](https://youtu.be/rWXk9ZWA1a4?si=zo70sz3tVgois6RE)

## Bill of Materials

- Everything from [Part 2](/Lets_build_a_room_sensor/Part%202/README.md)
- SGP30 air quality sensor module
    - [South Africa - Micro Robotics](https://www.robotics.org.za/AF3709)
    - [US - Amazon](https://www.amazon.com/EC-Buying-Formaldehyde-Monitoring-Multi-Pixel/dp/B0B389LQCQ/)
    - [Global - Aliexpress](https://www.aliexpress.com/item/1005005928384331.html)
- CCS811 air quality sensor module
    - [South Africa - Micro Robotics](https://www.diyelectronics.co.za/store/gas/3648-ccs811-air-quality-sensor-ec02-tvoc.html)
    - [US - Amazon](https://www.amazon.com/MCU-811-Monoxide-Quality-Numerical-Sensors/dp/B0CP798FGT/)
    - [Global - Aliexpress](https://www.aliexpress.com/item/1005006603898777.html)
    
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

### SGP30 I2C Ambient Light Sensor Module
    # SGP30 Air Quality Control Sensor (0x58)
    - platform: sgp30
      eco2:
        name: "eCO2"
        id: ${device_internal_name}_eco2 
        accuracy_decimals: 1
      tvoc:
        name: "TVOC"
        id: ${device_internal_name}_tvoc
        accuracy_decimals: 1
      store_baseline: yes
      address: 0x58
      compensation:
        temperature_source: ${device_internal_name}_temperature
        humidity_source: ${device_internal_name}_humidity
      update_interval: ${device_sampling_time}

### CCS811 I2C Ambient Light Sensor Module
    # CCS811 Air Quality Control Sensor (0x5A)
    - platform: ccs811
      eco2:
        name: "eCO2 Value"
        id: ${device_internal_name}_eco2
      tvoc:
        name: "Total Volatile Organic Compound"
        id: ${device_internal_name}_tvoc
      version:
        name: CCS811 Version
        id: ${device_internal_name}_ccs811_version
      address: 0x5A
      temperature: ${device_internal_name}_temperature
      humidity: ${device_internal_name}_humidity
      update_interval: ${device_sampling_time}

### The code for the horseshoe card
    type: custom:flex-horseshoe-card
    entities:
      - entity: sensor.esphome_room_sensors_eco2
        decimals: 1
        unit: ppm
        area: My Room eCO2
    show:
      horseshoe_style: lineargradient
    layout:
      states:
        - id: 0
          entity_index: 0
          xpos: 50
          ypos: 60
          styles:
            - font-size: 3.5em;
      areas:
        - id: 0
          entity_index: 0
          xpos: 50
          ypos: 35
          styles:
            - font-size: 1.5em;
            - opacity: 0.8;
    horseshoe_scale:
      min: 0
      max: 6000
    color_stops:
      '400': '#07F67F'
      '1000': '#074F2B'
      '2000': '#E21B63'
      '5000': '#DC1F3C'

ESPHome Reference page [ESPHome SGP30 I2C Ambient Light Sensor Module Page](https://www.esphome.io/components/sensor/sgp30.html)   
ESPHome Reference page [ESPHome CCS811 I2C Ambient Light Sensor Module Page](https://www.esphome.io/components/sensor/ccs811.html)

Full code for Part 3 is  [Here](/Lets_build_a_room_sensor/Part%202/esphome-room-sensors.yaml)

## Links mentioned in the video

- [Let's build a room sensor - Part 1](/Lets_build_a_room_sensor/Part%201/README.md)
- [Let's build a room sensor - Part 2](/Lets_build_a_room_sensor/Part%202/README.md)
- [Installing and configuring Home Assistant](/Tutorial%201%20-%20Basic%20Setup%20for%20all%20Devices/README.md)
- [Let's install the ESPHome Add-on](https://youtu.be/zwykvV82SGw?si=XLMDUKdHiqi_dprt)
