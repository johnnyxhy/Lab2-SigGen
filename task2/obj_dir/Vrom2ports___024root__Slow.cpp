// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrom2ports.h for the primary calling header

#include "verilated.h"

#include "Vrom2ports__Syms.h"
#include "Vrom2ports___024root.h"

void Vrom2ports___024root___ctor_var_reset(Vrom2ports___024root* vlSelf);

Vrom2ports___024root::Vrom2ports___024root(Vrom2ports__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrom2ports___024root___ctor_var_reset(this);
}

void Vrom2ports___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrom2ports___024root::~Vrom2ports___024root() {
}
