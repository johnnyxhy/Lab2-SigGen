// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrom2ports__Syms.h"


void Vrom2ports___024root__trace_chg_sub_0(Vrom2ports___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrom2ports___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom2ports___024root__trace_chg_top_0\n"); );
    // Init
    Vrom2ports___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrom2ports___024root*>(voidSelf);
    Vrom2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrom2ports___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vrom2ports___024root__trace_chg_sub_0(Vrom2ports___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom2ports___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgCData(oldp+1,(vlSelf->addr1),8);
    bufp->chgCData(oldp+2,(vlSelf->addr2),8);
    bufp->chgCData(oldp+3,(vlSelf->dout1),8);
    bufp->chgCData(oldp+4,(vlSelf->dout2),8);
}

void Vrom2ports___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom2ports___024root__trace_cleanup\n"); );
    // Init
    Vrom2ports___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrom2ports___024root*>(voidSelf);
    Vrom2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
