#!/bin/bash
wget -P /tmp/ https://raw.github.com/badepojulateef/alx-low_level_programming/main/0x18-dynamic_libraries/random.so
export LD_PRELOAD=/tmp/random.so
