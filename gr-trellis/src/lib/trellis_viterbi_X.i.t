/* -*- c++ -*- */
/*
 * Copyright 2004 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

// @WARNING@

GR_SWIG_BLOCK_MAGIC(trellis,@BASE_NAME@);

@SPTR_NAME@ trellis_make_@BASE_NAME@ (
    const fsm &FSM,
    const int K,
    const int S0,
    const int SK);


class @NAME@ : public gr_block
{
private:
  @NAME@ (
    const fsm &FSM,
    const int K,
    const int S0,
    const int SK);

public:
    fsm FSM () const { return d_FSM; }
    int K () const { return d_K; }
    int S0 () const { return d_S0; }
    int SK () const { return d_SK; }
    //std::vector<short> trace () const { return d_trace; }
};