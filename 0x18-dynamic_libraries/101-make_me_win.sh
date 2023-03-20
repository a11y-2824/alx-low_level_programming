#!/bin/bash
wget https://github.com/a11y-2824/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libinject.so
export LD_PRELOAD=../inject.so
