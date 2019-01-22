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


#ifndef INCLUDED_MULCONSNOISE_CHANMODE_FF_H
#define INCLUDED_MULCONSNOISE_CHANMODE_FF_H

#include <MulConsNoise/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace MulConsNoise {

    /*!
     * \brief <+description of block+>
     * \ingroup MulConsNoise
     *
     */
    class MULCONSNOISE_API ChanMode_ff : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<ChanMode_ff> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of MulConsNoise::ChanMode_ff.
       *
       * To avoid accidental use of raw pointers, MulConsNoise::ChanMode_ff's
       * constructor is in a private implementation
       * class. MulConsNoise::ChanMode_ff::make is the public interface for
       * creating new instances.
       */
      static sptr make(float ampl, float var);
	virtual void d_ampl(float ampl) =0;
	virtual float ampl() =0;
	virtual void d_var(float var) = 0;
	virtual float var() = 0;
    };

  } // namespace MulConsNoise
} // namespace gr

#endif /* INCLUDED_MULCONSNOISE_CHANMODE_FF_H */

