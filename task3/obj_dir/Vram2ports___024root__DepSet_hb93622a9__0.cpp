// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram2ports.h for the primary calling header

#include "verilated.h"

#include "Vram2ports___024root.h"

VL_INLINE_OPT void Vram2ports___024root___sequent__TOP__0(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__ram2ports__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__ram2ports__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__ram2ports__DOT__ram_array__v0;
    // Body
    __Vdlyvset__ram2ports__DOT__ram_array__v0 = 0U;
    if (vlSelf->rd_en) {
        vlSelf->dout = vlSelf->ram2ports__DOT__ram_array
            [vlSelf->rd_addr];
    }
    if (vlSelf->wr_en) {
        __Vdlyvval__ram2ports__DOT__ram_array__v0 = vlSelf->din;
        __Vdlyvset__ram2ports__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__ram2ports__DOT__ram_array__v0 
            = vlSelf->wr_addr;
    }
    if (__Vdlyvset__ram2ports__DOT__ram_array__v0) {
        vlSelf->ram2ports__DOT__ram_array[__Vdlyvdim0__ram2ports__DOT__ram_array__v0] 
            = __Vdlyvval__ram2ports__DOT__ram_array__v0;
    }
}

void Vram2ports___024root___eval(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vram2ports___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vram2ports___024root___eval_debug_assertions(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->wr_en & 0xfeU))) {
        Verilated::overWidthError("wr_en");}
    if (VL_UNLIKELY((vlSelf->rd_en & 0xfeU))) {
        Verilated::overWidthError("rd_en");}
    if (VL_UNLIKELY((vlSelf->wr_addr & 0xfe00U))) {
        Verilated::overWidthError("wr_addr");}
    if (VL_UNLIKELY((vlSelf->rd_addr & 0xfe00U))) {
        Verilated::overWidthError("rd_addr");}
}
#endif  // VL_DEBUG
