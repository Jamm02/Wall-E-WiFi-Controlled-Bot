# WiFi Controlled Bot

WiFi Controlled Bot - Moves the bot in desired direction at press of a button.

## Table of Contents

* [About the Project](#about-the-project)
  * [Tech Stack](#tech-stack)
  * [File Structure](#file-structure)
* [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
  * [Installation](#installation)
  * [Configuration](#configuration)
* [Usage](#usage)
* [Contributors](#contributors)
* [Acknowledgements and Resources](#acknowledgements-and-resources)
* [License](#license)

<!-- ABOUT THE PROJECT -->
## About The Project
* The Aim of the Project is to add WiFi controll over the motion of the bot using ESP32.

### Tech Stack
The Technologies used for this project are
* [FreeRTOS](https://www.freertos.org/openrtos.html)
* [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/)

### File Structure
    .
    ├── Components                           # Contains files of specific library of functions or Hardware used
    │   ├──sra-board-component               # Library for motor drivers
    ├── frontend                             # Frontend file
    │   ├── index.htnl                       # Code for frontend 
    ├── main                                 # Source files (alternatively `lib` or `app`)
    │   ├──main.c                            # Main Source code to be executed
    |   ├──tuning_http_server.c              # Source code for http server
    |   ├──motion.c                          # Source code for motion of the bot
    |   ├──wifi_handler.c                    # Source code for handling wifi operations
    │   ├──kconfig.projbuild                 # defines the entries of the menu for configuration
    │   ├──CMakeLists.txt                    # contains commands to include the bluetooth library and main.c in esp-idf
    ├── CmakeLists.txt                       # contains commands to include Components and main folder while executing
    ├── LICENSE
    └── README.md 
 



## Getting Started

### Prerequisites
Install ESP-IDF : https://github.com/espressif/esp-idf

### Installation
Clone the project
```
https://github.com/Jamm02/Wall-E-WiFi-Controlled-Bot.git

cd Wall-E-WiFi-Controlled-Bot
```
## Usage

Build
```
idf.py build
```
Flash
```
idf.py -p (PORT) flash monitor

```
### Configuration

```
idf.py menuconfig
```
* `Example Connection Configuration`
  * `WiFi SSID` - Set wifi SSID
  * `WiFi PASSWORD` - Set wifi Password
  

## Contributors
* [Moteen Shah](https://github.com/Jamm02)

## Acknowledgements and Resources
* [SRA VJTI](http://sra.vjti.info)
* [SRA Wall-E Workshop](https://github.com/SRA-VJTI/Wall-E_v2.2)
* Special thanks to [Gautam Agarwal](https://github.com/gautam-dev-maker)
* Jeff Rowberg for the MPU6050 library for esp-idf :
  https://github.com/jrowberg/i2cdevlib/tree/master/ESP32_ESP-IDF   
* https://github.com/nkolban/esp32-snippets
* https://github.com/VedantParanjape/idf-notes-sra

  
## License
The [License](https://github.com/Jamm02/#/blob/master/LICENSE) Used for this Project.
  
  
  
