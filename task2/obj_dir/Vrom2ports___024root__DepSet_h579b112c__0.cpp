// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrom2ports.h for the primary calling header

#include "verilated.h"

#include "Vrom2ports___024root.h"

VL_INLINE_OPT void Vrom2ports___024root___sequent__TOP__0(Vrom2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom2ports___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->dout2 = vlSelf->rom2ports__DOT__rom_array
        [vlSelf->addr2];
    vlSelf->dout1 = vlSelf->rom2ports__DOT__rom_array
        [vlSelf->addr1];
}

void Vrom2ports___024root___eval(Vrom2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom2ports___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vrom2ports___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vrom2ports___024root___eval_debug_assertions(Vrom2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom2ports___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
