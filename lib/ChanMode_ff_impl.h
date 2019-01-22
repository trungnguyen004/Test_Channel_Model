/* -*- c++ -*- */
/* 
 * Copyright 2019 Jason Nguyen.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_MULCONSNOISE_CHANMODE_FF_IMPL_H
#define INCLUDED_MULCONSNOISE_CHANMODE_FF_IMPL_H

#include <MulConsNoise/ChanMode_ff.h>
#include <gnuradio/random.h>

namespace gr {
  namespace MulConsNoise {

    class ChanMode_ff_impl : public ChanMode_ff
    {
     private:
      float my_ampl;		//
      float my_var;
      gr::random d_rng;

     public:
      ChanMode_ff_impl(float ampl, float var);
      ~ChanMode_ff_impl();

	void d_ampl(float ampl) {my_ampl = ampl;}
	float ampl() {return my_ampl;}
	void d_var(float var) {my_var = var;}
	float var() {return my_var;}

      // Where all the action really happens

      int general_work(int noutput_items,
           gr_vector_int &ninput_items,
           gr_vector_const_void_star &input_items,
           gr_vector_void_star &output_items);
    };

  } // namespace MulConsNoise
} // namespace gr

#endif /* INCLUDED_MULCONSNOISE_CHANMODE_FF_IMPL_H */

