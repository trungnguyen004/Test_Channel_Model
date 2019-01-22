/* -*- c++ -*- */

#define MULCONSNOISE_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "MulConsNoise_swig_doc.i"

%{
#include "MulConsNoise/ChanMode_ff.h"
%}


%include "MulConsNoise/ChanMode_ff.h"
GR_SWIG_BLOCK_MAGIC2(MulConsNoise, ChanMode_ff);
