// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrom2ports.h"
#include "Vrom2ports__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrom2ports::Vrom2ports(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrom2ports__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , addr1{vlSymsp->TOP.addr1}
    , addr2{vlSymsp->TOP.addr2}
    , dout1{vlSymsp->TOP.dout1}
    , dout2{vlSymsp->TOP.dout2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrom2ports::Vrom2ports(const char* _vcname__)
    : Vrom2ports(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrom2ports::~Vrom2ports() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vrom2ports___024root___eval_initial(Vrom2ports___024root* vlSelf);
void Vrom2ports___024root___eval_settle(Vrom2ports___024root* vlSelf);
void Vrom2ports___024root___eval(Vrom2ports___024root* vlSelf);
#ifdef VL_DEBUG
void Vrom2ports___024root___eval_debug_assertions(Vrom2ports___024root* vlSelf);
#endif  // VL_DEBUG
void Vrom2ports___024root___final(Vrom2ports___024root* vlSelf);

static void _eval_initial_loop(Vrom2ports__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vrom2ports___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vrom2ports___024root___eval_settle(&(vlSymsp->TOP));
        Vrom2ports___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vrom2ports::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrom2ports::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrom2ports___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vrom2ports___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vrom2ports::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vrom2ports::final() {
    Vrom2ports___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrom2ports::hierName() const { return vlSymsp->name(); }
const char* Vrom2ports::modelName() const { return "Vrom2ports"; }
unsigned Vrom2ports::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vrom2ports::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vrom2ports___024root__trace_init_top(Vrom2ports___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrom2ports___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrom2ports___024root*>(voidSelf);
    Vrom2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vrom2ports___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vrom2ports___024root__trace_register(Vrom2ports___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrom2ports::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrom2ports___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
