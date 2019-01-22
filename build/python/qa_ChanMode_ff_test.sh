#!/bin/sh
export VOLK_GENERIC=1
export GR_DONT_LOAD_PREFS=1
export srcdir=/home/jason/gr-MulConsNoise/python
export PATH=/home/jason/gr-MulConsNoise/build/python:$PATH
export LD_LIBRARY_PATH=/home/jason/gr-MulConsNoise/build/lib:$LD_LIBRARY_PATH
export PYTHONPATH=/home/jason/gr-MulConsNoise/build/swig:$PYTHONPATH
/usr/bin/python2 /home/jason/gr-MulConsNoise/python/qa_ChanMode_ff.py 
