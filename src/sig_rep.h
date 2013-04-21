/*
 * Copyright 2013, Pranav Kant <pranav913@gmail.com>
 *
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2.
 */

#ifndef __SIG_REP_H__
#define __SIG_REP_H__

#include <systemc.h>

SC_MODULE(SigRep){
        sc_in<bool> in0;
        sc_in<bool> in1;
	
        sc_out<bool> out01;
        sc_out<bool> out02;
        sc_out<bool> out11;
        sc_out<bool> out12;

        void work(void);

        SC_CTOR(SigRep){
                SC_THREAD(work);
                sensitive << in0 << in1;
        }
};

#endif
