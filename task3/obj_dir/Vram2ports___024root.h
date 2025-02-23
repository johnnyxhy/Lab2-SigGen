// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vram2ports.h for the primary calling header

#ifndef VERILATED_VRAM2PORTS___024ROOT_H_
#define VERILATED_VRAM2PORTS___024ROOT_H_  // guard

#include "verilated.h"

class Vram2ports__Syms;

class Vram2ports___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(wr_en,0,0);
    VL_IN8(rd_en,0,0);
    VL_IN8(din,7,0);
    VL_OUT8(dout,7,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(wr_addr,8,0);
    VL_IN16(rd_addr,8,0);
    VlUnpacked<CData/*7:0*/, 512> ram2ports__DOT__ram_array;

    // INTERNAL VARIABLES
    Vram2ports__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vram2ports___024root(Vram2ports__Syms* symsp, const char* name);
    ~Vram2ports___024root();
    VL_UNCOPYABLE(Vram2ports___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
