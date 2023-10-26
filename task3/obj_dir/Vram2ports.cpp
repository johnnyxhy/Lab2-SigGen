// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vram2ports.h"
#include "Vram2ports__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vram2ports::Vram2ports(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vram2ports__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , wr_en{vlSymsp->TOP.wr_en}
    , rd_en{vlSymsp->TOP.rd_en}
    , din{vlSymsp->TOP.din}
    , dout{vlSymsp->TOP.dout}
    , wr_addr{vlSymsp->TOP.wr_addr}
    , rd_addr{vlSymsp->TOP.rd_addr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vram2ports::Vram2ports(const char* _vcname__)
    : Vram2ports(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vram2ports::~Vram2ports() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vram2ports___024root___eval_initial(Vram2ports___024root* vlSelf);
void Vram2ports___024root___eval_settle(Vram2ports___024root* vlSelf);
void Vram2ports___024root___eval(Vram2ports___024root* vlSelf);
#ifdef VL_DEBUG
void Vram2ports___024root___eval_debug_assertions(Vram2ports___024root* vlSelf);
#endif  // VL_DEBUG
void Vram2ports___024root___final(Vram2ports___024root* vlSelf);

static void _eval_initial_loop(Vram2ports__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vram2ports___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vram2ports___024root___eval_settle(&(vlSymsp->TOP));
        Vram2ports___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vram2ports::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vram2ports::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vram2ports___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vram2ports___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vram2ports::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vram2ports::final() {
    Vram2ports___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vram2ports::hierName() const { return vlSymsp->name(); }
const char* Vram2ports::modelName() const { return "Vram2ports"; }
unsigned Vram2ports::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vram2ports::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vram2ports___024root__trace_init_top(Vram2ports___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vram2ports___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vram2ports___024root*>(voidSelf);
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vram2ports___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vram2ports___024root__trace_register(Vram2ports___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vram2ports::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vram2ports___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
