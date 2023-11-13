#!/bin/bash
wget -P /tmp https://github.com/oriokie/alx-low_level_programming/tree/main/0x18-dynamic_libraries/injectlib.so
export LD_PRELOAD=/tmp/injectlib.so
