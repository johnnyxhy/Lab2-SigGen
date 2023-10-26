// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram2ports.h for the primary calling header

#include "verilated.h"

#include "Vram2ports___024root.h"

VL_ATTR_COLD void Vram2ports___024root___eval_initial(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vram2ports___024root___eval_settle(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vram2ports___024root___final(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___final\n"); );
}

VL_ATTR_COLD void Vram2ports___024root___ctor_var_reset(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->wr_en = VL_RAND_RESET_I(1);
    vlSelf->rd_en = VL_RAND_RESET_I(1);
    vlSelf->wr_addr = VL_RAND_RESET_I(9);
    vlSelf->rd_addr = VL_RAND_RESET_I(9);
    vlSelf->din = VL_RAND_RESET_I(8);
    vlSelf->dout = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->ram2ports__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
}
