# ESPHome, Let's build a room sensor, Part 6

This series of tutorials is specifically designed for intermediate ESPHome users who have already completed my tutorial on "Creating a Room Sensor from Scratch" and are looking to take their skills to the next level.

In other words, this is the intermediate version of my popular "ESPHome Basic setup for all devices".

In this tutorial, we will discuss modularising our code and the standards and conventions I use in my coding and why. 

## Video

### Part 1

[![Watch the video](/Coding_Practices_Tips_and_Tricks/images/Splash_Screen_1_1.jpg)](https://youtu.be/G9WRg6jk7xk)

### Part 2

[![Watch the video](/Coding_Practices_Tips_and_Tricks/images/Splash_Screen_1_2.jpg)](https://youtu.be/G9WRg6jk7xk)

## Code standardisation by ChatGPT

- **Code standardisation** involves establishing consistent coding practices and guidelines within the development of a project, fostering a structured approach to writing and maintaining code.
- This practice enhances code quality and security and serves as a proactive measure against potential risks associated with inconsistent coding styles, miscommunications, and issues slipping through to production.
- By adhering to established coding practices, developers create a consistent and high-quality codebase, minimising the chances of introducing common issues and bugs.
- Overall, the benefits of standardisation in software development are clear.
- By increasing efficiency, consistency, and quality, standardisation can help accelerate innovation and improve the overall development process.
- It provides guidance and support for the software industry, reduces development and testing costs, and ensures better collaboration among the development community.
- So, embracing code standardisation is not just about adhering to rules; it’s an investment in the longevity and resilience of software systems.
- Remember, standardised code isn’t just about uniformity; it’s about building robust, reliable software that stands the test of time.

## Substitution code

    substitutions:
        device_internal_name: esphome_device_name
        device_wifi_name: esphome-device-name
        device_friendly_name: ESPHome Device Name
        device_ip_address: 192.168.0.xxx
        device_sampling_time: 30s
        region: Africa/Johannesburg

## Other useful or mentioned links

- [Configuration type on ESPHome](https://esphome.io/guides/configuration-types.html)
- [Let's rework our Room Sensor Package Code!](https://youtube.com/live/52_ZJmTz3bs)
- [Let's build a room sensor - Part 0](/Lets_build_a_room_sensor/Part%200/README.md)
- [Installing and configuring Home Assistant](/Tutorial%201%20-%20Basic%20Setup%20for%20all%20Devices/README.md)
- [Let's install the ESPHome Add-on](https://youtu.be/zwykvV82SGw?si=XLMDUKdHiqi_dprt)
- [Let's install the Studio Code Add-on](https://youtu.be/oKdITXid-5Y)
- [Let's install the Samba Share Add-On](https://youtu.be/Vu_oxefjd0I)
- [Lat's install Microsoft Visual Studio Code Desktop](https://youtu.be/6NdY1y3NYL8)
