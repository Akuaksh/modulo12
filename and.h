/*
 * Copyright 2013, Pranav Kant <pranav913@gmail.com>
 *
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2.
 */

#ifndef __AND_H__
#define __AND_H__

#include <systemc.h>

SC_MODULE(And){
        sc_in<bool> in0;
        sc_in<bool> in1;
	
        sc_out<bool> out0;
        sc_out<bool> out1;
        sc_out<bool> out2;
        sc_out<bool> out3;

        void work(void);
        SC_CTOR(And){
                SC_THREAD(work);
                sensitive << in0 << in1;
        }
};

#endif
