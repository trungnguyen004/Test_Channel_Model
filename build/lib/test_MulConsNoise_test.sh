#!/bin/sh
export VOLK_GENERIC=1
export GR_DONT_LOAD_PREFS=1
export srcdir=/home/jason/gr-MulConsNoise/lib
export PATH=/home/jason/gr-MulConsNoise/build/lib:$PATH
export LD_LIBRARY_PATH=/home/jason/gr-MulConsNoise/build/lib:$LD_LIBRARY_PATH
export PYTHONPATH=$PYTHONPATH
test-MulConsNoise 
