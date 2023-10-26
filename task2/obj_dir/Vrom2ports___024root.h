// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrom2ports.h for the primary calling header

#ifndef VERILATED_VROM2PORTS___024ROOT_H_
#define VERILATED_VROM2PORTS___024ROOT_H_  // guard

#include "verilated.h"

class Vrom2ports__Syms;

class Vrom2ports___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(addr1,7,0);
    VL_IN8(addr2,7,0);
    VL_OUT8(dout1,7,0);
    VL_OUT8(dout2,7,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*7:0*/, 256> rom2ports__DOT__rom_array;

    // INTERNAL VARIABLES
    Vrom2ports__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrom2ports___024root(Vrom2ports__Syms* symsp, const char* name);
    ~Vrom2ports___024root();
    VL_UNCOPYABLE(Vrom2ports___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
