#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f sigdelay.vcd

verilator -Wall --cc --trace counter.sv --exe sigdelay_tb.cpp
verilator -Wall --cc --trace ram2ports.sv --exe sigdelay_tb.cpp
verilator -Wall --cc --trace sigdelay.sv --exe sigdelay_tb.cpp

make -j -C obj_dir/ -f Vsigdelay.mk Vsigdelay

obj_dir/Vsigdelay