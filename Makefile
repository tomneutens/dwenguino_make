ARDUINO_DIR = $(shell pwd)
ARDUINO_SKETCHBOOK = $(shell pwd)
ARDUINO_LIBS = Dwenguino Wire SPI LiquidCrystal dht EEPROM LinxDwenguino NewPing Servo SoftwareSerial
ARDUINO_VERSION = 185
BOARD_TAG = dwenguino
MONITOR_PORT = /dev/ttyACM*
ISP_PORT          = /dev/ttyACM*
BOARD_TAG         = Dwenguino
ARDMK_VENDOR      = dwenguino
ALTERNATE_CORE    = dwenguino
ARDUINO_VAR_PATH  = ./hardware/dwenguino/avr/variants
ARDUINO_CORE_PATH = ./hardware/dwenguino/avr/cores/dwenguino
USER_LIB_PATH = ./hardware/dwenguino/avr/libraries
ARCHITECTURE = avr

ARDUINO_QUIET = True

include ./Arduino.mk
