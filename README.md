# Hardwareinstallatie
developer: Mohamed Lahmar

Usage
To get started clone this repo or download zip and extract on your local machine. To clone using git:

$ git clone https://github.com/MohamedLahmar/Hardwareinstallatie
Open the config.sh file and set the location of your Arduino binary, serial port, serial speed, Arduino board and optionally a serial monitor program and editor. When done source the config.sh file to load the configuration.

$ source config.sh

The configuration file adds several environmental variables and aliases for verifying (compiling), uploading (compile and flash) and running a serial monitor.

To verify your sketch run:

$ verify
To upload your sketch run:

$ upload
