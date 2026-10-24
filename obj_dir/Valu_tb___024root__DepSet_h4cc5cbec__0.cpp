// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"
#include "Valu_tb__Syms.h"
#include "Valu_tb___024root.h"

VL_INLINE_OPT VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ alu_tb__DOT__unnamedblk1__DOT__N;
    alu_tb__DOT__unnamedblk1__DOT__N = 0;
    IData/*31:0*/ alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__0__op;
    __Vtask_alu_tb__DOT__alu_auto__0__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__0__a;
    __Vtask_alu_tb__DOT__alu_auto__0__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__0__b;
    __Vtask_alu_tb__DOT__alu_auto__0__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__0__expected;
    __Vtask_alu_tb__DOT__alu_auto__0__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__0__result_out;
    __Vtask_alu_tb__DOT__alu_auto__0__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__1__op;
    __Vtask_alu_tb__DOT__alu_auto__1__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__1__a;
    __Vtask_alu_tb__DOT__alu_auto__1__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__1__b;
    __Vtask_alu_tb__DOT__alu_auto__1__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__1__expected;
    __Vtask_alu_tb__DOT__alu_auto__1__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__1__result_out;
    __Vtask_alu_tb__DOT__alu_auto__1__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__2__op;
    __Vtask_alu_tb__DOT__alu_auto__2__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__2__a;
    __Vtask_alu_tb__DOT__alu_auto__2__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__2__b;
    __Vtask_alu_tb__DOT__alu_auto__2__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__2__expected;
    __Vtask_alu_tb__DOT__alu_auto__2__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__2__result_out;
    __Vtask_alu_tb__DOT__alu_auto__2__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__3__op;
    __Vtask_alu_tb__DOT__alu_auto__3__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__3__a;
    __Vtask_alu_tb__DOT__alu_auto__3__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__3__b;
    __Vtask_alu_tb__DOT__alu_auto__3__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__3__expected;
    __Vtask_alu_tb__DOT__alu_auto__3__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__3__result_out;
    __Vtask_alu_tb__DOT__alu_auto__3__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__4__op;
    __Vtask_alu_tb__DOT__alu_auto__4__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__4__a;
    __Vtask_alu_tb__DOT__alu_auto__4__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__4__b;
    __Vtask_alu_tb__DOT__alu_auto__4__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__4__expected;
    __Vtask_alu_tb__DOT__alu_auto__4__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__4__result_out;
    __Vtask_alu_tb__DOT__alu_auto__4__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__5__op;
    __Vtask_alu_tb__DOT__alu_auto__5__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__5__a;
    __Vtask_alu_tb__DOT__alu_auto__5__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__5__b;
    __Vtask_alu_tb__DOT__alu_auto__5__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__5__expected;
    __Vtask_alu_tb__DOT__alu_auto__5__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__5__result_out;
    __Vtask_alu_tb__DOT__alu_auto__5__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__6__op;
    __Vtask_alu_tb__DOT__alu_auto__6__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__6__a;
    __Vtask_alu_tb__DOT__alu_auto__6__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__6__b;
    __Vtask_alu_tb__DOT__alu_auto__6__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__6__expected;
    __Vtask_alu_tb__DOT__alu_auto__6__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__6__result_out;
    __Vtask_alu_tb__DOT__alu_auto__6__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__7__op;
    __Vtask_alu_tb__DOT__alu_auto__7__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__7__a;
    __Vtask_alu_tb__DOT__alu_auto__7__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__7__b;
    __Vtask_alu_tb__DOT__alu_auto__7__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__7__expected;
    __Vtask_alu_tb__DOT__alu_auto__7__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__7__result_out;
    __Vtask_alu_tb__DOT__alu_auto__7__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__8__op;
    __Vtask_alu_tb__DOT__alu_auto__8__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__8__a;
    __Vtask_alu_tb__DOT__alu_auto__8__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__8__b;
    __Vtask_alu_tb__DOT__alu_auto__8__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__8__expected;
    __Vtask_alu_tb__DOT__alu_auto__8__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__8__result_out;
    __Vtask_alu_tb__DOT__alu_auto__8__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__9__op;
    __Vtask_alu_tb__DOT__alu_auto__9__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__9__a;
    __Vtask_alu_tb__DOT__alu_auto__9__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__9__b;
    __Vtask_alu_tb__DOT__alu_auto__9__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__9__expected;
    __Vtask_alu_tb__DOT__alu_auto__9__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__9__result_out;
    __Vtask_alu_tb__DOT__alu_auto__9__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__10__op;
    __Vtask_alu_tb__DOT__alu_auto__10__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__10__a;
    __Vtask_alu_tb__DOT__alu_auto__10__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__10__b;
    __Vtask_alu_tb__DOT__alu_auto__10__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__10__expected;
    __Vtask_alu_tb__DOT__alu_auto__10__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__10__result_out;
    __Vtask_alu_tb__DOT__alu_auto__10__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__11__op;
    __Vtask_alu_tb__DOT__alu_auto__11__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__11__a;
    __Vtask_alu_tb__DOT__alu_auto__11__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__11__b;
    __Vtask_alu_tb__DOT__alu_auto__11__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__11__expected;
    __Vtask_alu_tb__DOT__alu_auto__11__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__11__result_out;
    __Vtask_alu_tb__DOT__alu_auto__11__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__12__op;
    __Vtask_alu_tb__DOT__alu_auto__12__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__12__a;
    __Vtask_alu_tb__DOT__alu_auto__12__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__12__b;
    __Vtask_alu_tb__DOT__alu_auto__12__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__12__expected;
    __Vtask_alu_tb__DOT__alu_auto__12__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__12__result_out;
    __Vtask_alu_tb__DOT__alu_auto__12__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__13__op;
    __Vtask_alu_tb__DOT__alu_auto__13__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__13__a;
    __Vtask_alu_tb__DOT__alu_auto__13__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__13__b;
    __Vtask_alu_tb__DOT__alu_auto__13__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__13__expected;
    __Vtask_alu_tb__DOT__alu_auto__13__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__13__result_out;
    __Vtask_alu_tb__DOT__alu_auto__13__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__14__op;
    __Vtask_alu_tb__DOT__alu_auto__14__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__14__a;
    __Vtask_alu_tb__DOT__alu_auto__14__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__14__b;
    __Vtask_alu_tb__DOT__alu_auto__14__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__14__expected;
    __Vtask_alu_tb__DOT__alu_auto__14__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__14__result_out;
    __Vtask_alu_tb__DOT__alu_auto__14__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__15__op;
    __Vtask_alu_tb__DOT__alu_auto__15__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__15__a;
    __Vtask_alu_tb__DOT__alu_auto__15__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__15__b;
    __Vtask_alu_tb__DOT__alu_auto__15__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__15__expected;
    __Vtask_alu_tb__DOT__alu_auto__15__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__15__result_out;
    __Vtask_alu_tb__DOT__alu_auto__15__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__16__op;
    __Vtask_alu_tb__DOT__alu_auto__16__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__16__a;
    __Vtask_alu_tb__DOT__alu_auto__16__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__16__b;
    __Vtask_alu_tb__DOT__alu_auto__16__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__16__expected;
    __Vtask_alu_tb__DOT__alu_auto__16__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__16__result_out;
    __Vtask_alu_tb__DOT__alu_auto__16__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__17__op;
    __Vtask_alu_tb__DOT__alu_auto__17__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__17__a;
    __Vtask_alu_tb__DOT__alu_auto__17__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__17__b;
    __Vtask_alu_tb__DOT__alu_auto__17__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__17__expected;
    __Vtask_alu_tb__DOT__alu_auto__17__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__17__result_out;
    __Vtask_alu_tb__DOT__alu_auto__17__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__18__op;
    __Vtask_alu_tb__DOT__alu_auto__18__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__18__a;
    __Vtask_alu_tb__DOT__alu_auto__18__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__18__b;
    __Vtask_alu_tb__DOT__alu_auto__18__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__18__expected;
    __Vtask_alu_tb__DOT__alu_auto__18__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__18__result_out;
    __Vtask_alu_tb__DOT__alu_auto__18__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__19__op;
    __Vtask_alu_tb__DOT__alu_auto__19__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__19__a;
    __Vtask_alu_tb__DOT__alu_auto__19__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__19__b;
    __Vtask_alu_tb__DOT__alu_auto__19__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__19__expected;
    __Vtask_alu_tb__DOT__alu_auto__19__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__19__result_out;
    __Vtask_alu_tb__DOT__alu_auto__19__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__20__op;
    __Vtask_alu_tb__DOT__alu_auto__20__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__20__a;
    __Vtask_alu_tb__DOT__alu_auto__20__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__20__b;
    __Vtask_alu_tb__DOT__alu_auto__20__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__20__expected;
    __Vtask_alu_tb__DOT__alu_auto__20__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__20__result_out;
    __Vtask_alu_tb__DOT__alu_auto__20__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__21__op;
    __Vtask_alu_tb__DOT__alu_auto__21__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__21__a;
    __Vtask_alu_tb__DOT__alu_auto__21__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__21__b;
    __Vtask_alu_tb__DOT__alu_auto__21__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__21__expected;
    __Vtask_alu_tb__DOT__alu_auto__21__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__21__result_out;
    __Vtask_alu_tb__DOT__alu_auto__21__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__22__op;
    __Vtask_alu_tb__DOT__alu_auto__22__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__22__a;
    __Vtask_alu_tb__DOT__alu_auto__22__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__22__b;
    __Vtask_alu_tb__DOT__alu_auto__22__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__22__expected;
    __Vtask_alu_tb__DOT__alu_auto__22__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__22__result_out;
    __Vtask_alu_tb__DOT__alu_auto__22__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__23__op;
    __Vtask_alu_tb__DOT__alu_auto__23__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__23__a;
    __Vtask_alu_tb__DOT__alu_auto__23__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__23__b;
    __Vtask_alu_tb__DOT__alu_auto__23__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__23__expected;
    __Vtask_alu_tb__DOT__alu_auto__23__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__23__result_out;
    __Vtask_alu_tb__DOT__alu_auto__23__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__24__op;
    __Vtask_alu_tb__DOT__alu_auto__24__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__24__a;
    __Vtask_alu_tb__DOT__alu_auto__24__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__24__b;
    __Vtask_alu_tb__DOT__alu_auto__24__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__24__expected;
    __Vtask_alu_tb__DOT__alu_auto__24__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__24__result_out;
    __Vtask_alu_tb__DOT__alu_auto__24__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__25__op;
    __Vtask_alu_tb__DOT__alu_auto__25__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__25__a;
    __Vtask_alu_tb__DOT__alu_auto__25__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__25__b;
    __Vtask_alu_tb__DOT__alu_auto__25__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__25__expected;
    __Vtask_alu_tb__DOT__alu_auto__25__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__25__result_out;
    __Vtask_alu_tb__DOT__alu_auto__25__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__26__op;
    __Vtask_alu_tb__DOT__alu_auto__26__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__26__a;
    __Vtask_alu_tb__DOT__alu_auto__26__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__26__b;
    __Vtask_alu_tb__DOT__alu_auto__26__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__26__expected;
    __Vtask_alu_tb__DOT__alu_auto__26__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__26__result_out;
    __Vtask_alu_tb__DOT__alu_auto__26__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__27__op;
    __Vtask_alu_tb__DOT__alu_auto__27__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__27__a;
    __Vtask_alu_tb__DOT__alu_auto__27__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__27__b;
    __Vtask_alu_tb__DOT__alu_auto__27__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__27__expected;
    __Vtask_alu_tb__DOT__alu_auto__27__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__27__result_out;
    __Vtask_alu_tb__DOT__alu_auto__27__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__28__op;
    __Vtask_alu_tb__DOT__alu_auto__28__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__28__a;
    __Vtask_alu_tb__DOT__alu_auto__28__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__28__b;
    __Vtask_alu_tb__DOT__alu_auto__28__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__28__expected;
    __Vtask_alu_tb__DOT__alu_auto__28__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__28__result_out;
    __Vtask_alu_tb__DOT__alu_auto__28__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__29__op;
    __Vtask_alu_tb__DOT__alu_auto__29__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__29__a;
    __Vtask_alu_tb__DOT__alu_auto__29__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__29__b;
    __Vtask_alu_tb__DOT__alu_auto__29__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__29__expected;
    __Vtask_alu_tb__DOT__alu_auto__29__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__29__result_out;
    __Vtask_alu_tb__DOT__alu_auto__29__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__30__op;
    __Vtask_alu_tb__DOT__alu_auto__30__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__30__a;
    __Vtask_alu_tb__DOT__alu_auto__30__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__30__b;
    __Vtask_alu_tb__DOT__alu_auto__30__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__30__expected;
    __Vtask_alu_tb__DOT__alu_auto__30__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__30__result_out;
    __Vtask_alu_tb__DOT__alu_auto__30__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__31__op;
    __Vtask_alu_tb__DOT__alu_auto__31__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__31__a;
    __Vtask_alu_tb__DOT__alu_auto__31__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__31__b;
    __Vtask_alu_tb__DOT__alu_auto__31__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__31__expected;
    __Vtask_alu_tb__DOT__alu_auto__31__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__31__result_out;
    __Vtask_alu_tb__DOT__alu_auto__31__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__32__op;
    __Vtask_alu_tb__DOT__alu_auto__32__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__32__a;
    __Vtask_alu_tb__DOT__alu_auto__32__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__32__b;
    __Vtask_alu_tb__DOT__alu_auto__32__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__32__expected;
    __Vtask_alu_tb__DOT__alu_auto__32__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__32__result_out;
    __Vtask_alu_tb__DOT__alu_auto__32__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__33__op;
    __Vtask_alu_tb__DOT__alu_auto__33__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__33__a;
    __Vtask_alu_tb__DOT__alu_auto__33__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__33__b;
    __Vtask_alu_tb__DOT__alu_auto__33__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__33__expected;
    __Vtask_alu_tb__DOT__alu_auto__33__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__33__result_out;
    __Vtask_alu_tb__DOT__alu_auto__33__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__34__op;
    __Vtask_alu_tb__DOT__alu_auto__34__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__34__a;
    __Vtask_alu_tb__DOT__alu_auto__34__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__34__b;
    __Vtask_alu_tb__DOT__alu_auto__34__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__34__expected;
    __Vtask_alu_tb__DOT__alu_auto__34__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__34__result_out;
    __Vtask_alu_tb__DOT__alu_auto__34__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__35__op;
    __Vtask_alu_tb__DOT__alu_auto__35__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__35__a;
    __Vtask_alu_tb__DOT__alu_auto__35__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__35__b;
    __Vtask_alu_tb__DOT__alu_auto__35__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__35__expected;
    __Vtask_alu_tb__DOT__alu_auto__35__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__35__result_out;
    __Vtask_alu_tb__DOT__alu_auto__35__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__36__op;
    __Vtask_alu_tb__DOT__alu_auto__36__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__36__a;
    __Vtask_alu_tb__DOT__alu_auto__36__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__36__b;
    __Vtask_alu_tb__DOT__alu_auto__36__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__36__expected;
    __Vtask_alu_tb__DOT__alu_auto__36__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__36__result_out;
    __Vtask_alu_tb__DOT__alu_auto__36__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__37__op;
    __Vtask_alu_tb__DOT__alu_auto__37__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__37__a;
    __Vtask_alu_tb__DOT__alu_auto__37__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__37__b;
    __Vtask_alu_tb__DOT__alu_auto__37__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__37__expected;
    __Vtask_alu_tb__DOT__alu_auto__37__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__37__result_out;
    __Vtask_alu_tb__DOT__alu_auto__37__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__38__op;
    __Vtask_alu_tb__DOT__alu_auto__38__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__38__a;
    __Vtask_alu_tb__DOT__alu_auto__38__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__38__b;
    __Vtask_alu_tb__DOT__alu_auto__38__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__38__expected;
    __Vtask_alu_tb__DOT__alu_auto__38__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__38__result_out;
    __Vtask_alu_tb__DOT__alu_auto__38__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__39__op;
    __Vtask_alu_tb__DOT__alu_auto__39__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__39__a;
    __Vtask_alu_tb__DOT__alu_auto__39__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__39__b;
    __Vtask_alu_tb__DOT__alu_auto__39__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__39__expected;
    __Vtask_alu_tb__DOT__alu_auto__39__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__39__result_out;
    __Vtask_alu_tb__DOT__alu_auto__39__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__40__op;
    __Vtask_alu_tb__DOT__alu_auto__40__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__40__a;
    __Vtask_alu_tb__DOT__alu_auto__40__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__40__b;
    __Vtask_alu_tb__DOT__alu_auto__40__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__40__expected;
    __Vtask_alu_tb__DOT__alu_auto__40__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__40__result_out;
    __Vtask_alu_tb__DOT__alu_auto__40__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__41__op;
    __Vtask_alu_tb__DOT__alu_auto__41__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__41__a;
    __Vtask_alu_tb__DOT__alu_auto__41__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__41__b;
    __Vtask_alu_tb__DOT__alu_auto__41__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__41__expected;
    __Vtask_alu_tb__DOT__alu_auto__41__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__41__result_out;
    __Vtask_alu_tb__DOT__alu_auto__41__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__42__op;
    __Vtask_alu_tb__DOT__alu_auto__42__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__42__a;
    __Vtask_alu_tb__DOT__alu_auto__42__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__42__b;
    __Vtask_alu_tb__DOT__alu_auto__42__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__42__expected;
    __Vtask_alu_tb__DOT__alu_auto__42__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__42__result_out;
    __Vtask_alu_tb__DOT__alu_auto__42__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__43__op;
    __Vtask_alu_tb__DOT__alu_auto__43__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__43__a;
    __Vtask_alu_tb__DOT__alu_auto__43__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__43__b;
    __Vtask_alu_tb__DOT__alu_auto__43__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__43__expected;
    __Vtask_alu_tb__DOT__alu_auto__43__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__43__result_out;
    __Vtask_alu_tb__DOT__alu_auto__43__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__44__op;
    __Vtask_alu_tb__DOT__alu_auto__44__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__44__a;
    __Vtask_alu_tb__DOT__alu_auto__44__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__44__b;
    __Vtask_alu_tb__DOT__alu_auto__44__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__44__expected;
    __Vtask_alu_tb__DOT__alu_auto__44__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__44__result_out;
    __Vtask_alu_tb__DOT__alu_auto__44__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__45__op;
    __Vtask_alu_tb__DOT__alu_auto__45__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__45__a;
    __Vtask_alu_tb__DOT__alu_auto__45__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__45__b;
    __Vtask_alu_tb__DOT__alu_auto__45__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__45__expected;
    __Vtask_alu_tb__DOT__alu_auto__45__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__45__result_out;
    __Vtask_alu_tb__DOT__alu_auto__45__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__46__op;
    __Vtask_alu_tb__DOT__alu_auto__46__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__46__a;
    __Vtask_alu_tb__DOT__alu_auto__46__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__46__b;
    __Vtask_alu_tb__DOT__alu_auto__46__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__46__expected;
    __Vtask_alu_tb__DOT__alu_auto__46__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__46__result_out;
    __Vtask_alu_tb__DOT__alu_auto__46__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__47__op;
    __Vtask_alu_tb__DOT__alu_auto__47__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__47__a;
    __Vtask_alu_tb__DOT__alu_auto__47__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__47__b;
    __Vtask_alu_tb__DOT__alu_auto__47__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__47__expected;
    __Vtask_alu_tb__DOT__alu_auto__47__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__47__result_out;
    __Vtask_alu_tb__DOT__alu_auto__47__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__48__op;
    __Vtask_alu_tb__DOT__alu_auto__48__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__48__a;
    __Vtask_alu_tb__DOT__alu_auto__48__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__48__b;
    __Vtask_alu_tb__DOT__alu_auto__48__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__48__expected;
    __Vtask_alu_tb__DOT__alu_auto__48__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__48__result_out;
    __Vtask_alu_tb__DOT__alu_auto__48__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__49__op;
    __Vtask_alu_tb__DOT__alu_auto__49__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__49__a;
    __Vtask_alu_tb__DOT__alu_auto__49__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__49__b;
    __Vtask_alu_tb__DOT__alu_auto__49__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__49__expected;
    __Vtask_alu_tb__DOT__alu_auto__49__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__49__result_out;
    __Vtask_alu_tb__DOT__alu_auto__49__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__50__op;
    __Vtask_alu_tb__DOT__alu_auto__50__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__50__a;
    __Vtask_alu_tb__DOT__alu_auto__50__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__50__b;
    __Vtask_alu_tb__DOT__alu_auto__50__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__50__expected;
    __Vtask_alu_tb__DOT__alu_auto__50__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__50__result_out;
    __Vtask_alu_tb__DOT__alu_auto__50__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__51__op;
    __Vtask_alu_tb__DOT__alu_auto__51__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__51__a;
    __Vtask_alu_tb__DOT__alu_auto__51__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__51__b;
    __Vtask_alu_tb__DOT__alu_auto__51__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__51__expected;
    __Vtask_alu_tb__DOT__alu_auto__51__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__51__result_out;
    __Vtask_alu_tb__DOT__alu_auto__51__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__52__op;
    __Vtask_alu_tb__DOT__alu_auto__52__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__52__a;
    __Vtask_alu_tb__DOT__alu_auto__52__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__52__b;
    __Vtask_alu_tb__DOT__alu_auto__52__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__52__expected;
    __Vtask_alu_tb__DOT__alu_auto__52__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__52__result_out;
    __Vtask_alu_tb__DOT__alu_auto__52__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__53__op;
    __Vtask_alu_tb__DOT__alu_auto__53__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__53__a;
    __Vtask_alu_tb__DOT__alu_auto__53__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__53__b;
    __Vtask_alu_tb__DOT__alu_auto__53__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__53__expected;
    __Vtask_alu_tb__DOT__alu_auto__53__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__53__result_out;
    __Vtask_alu_tb__DOT__alu_auto__53__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__54__op;
    __Vtask_alu_tb__DOT__alu_auto__54__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__54__a;
    __Vtask_alu_tb__DOT__alu_auto__54__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__54__b;
    __Vtask_alu_tb__DOT__alu_auto__54__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__54__expected;
    __Vtask_alu_tb__DOT__alu_auto__54__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__54__result_out;
    __Vtask_alu_tb__DOT__alu_auto__54__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__55__op;
    __Vtask_alu_tb__DOT__alu_auto__55__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__55__a;
    __Vtask_alu_tb__DOT__alu_auto__55__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__55__b;
    __Vtask_alu_tb__DOT__alu_auto__55__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__55__expected;
    __Vtask_alu_tb__DOT__alu_auto__55__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__55__result_out;
    __Vtask_alu_tb__DOT__alu_auto__55__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__56__op;
    __Vtask_alu_tb__DOT__alu_auto__56__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__56__a;
    __Vtask_alu_tb__DOT__alu_auto__56__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__56__b;
    __Vtask_alu_tb__DOT__alu_auto__56__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__56__expected;
    __Vtask_alu_tb__DOT__alu_auto__56__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__56__result_out;
    __Vtask_alu_tb__DOT__alu_auto__56__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__57__op;
    __Vtask_alu_tb__DOT__alu_auto__57__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__57__a;
    __Vtask_alu_tb__DOT__alu_auto__57__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__57__b;
    __Vtask_alu_tb__DOT__alu_auto__57__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__57__expected;
    __Vtask_alu_tb__DOT__alu_auto__57__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__57__result_out;
    __Vtask_alu_tb__DOT__alu_auto__57__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__58__op;
    __Vtask_alu_tb__DOT__alu_auto__58__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__58__a;
    __Vtask_alu_tb__DOT__alu_auto__58__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__58__b;
    __Vtask_alu_tb__DOT__alu_auto__58__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__58__expected;
    __Vtask_alu_tb__DOT__alu_auto__58__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__58__result_out;
    __Vtask_alu_tb__DOT__alu_auto__58__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__59__op;
    __Vtask_alu_tb__DOT__alu_auto__59__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__59__a;
    __Vtask_alu_tb__DOT__alu_auto__59__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__59__b;
    __Vtask_alu_tb__DOT__alu_auto__59__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__59__expected;
    __Vtask_alu_tb__DOT__alu_auto__59__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__59__result_out;
    __Vtask_alu_tb__DOT__alu_auto__59__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__60__op;
    __Vtask_alu_tb__DOT__alu_auto__60__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__60__a;
    __Vtask_alu_tb__DOT__alu_auto__60__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__60__b;
    __Vtask_alu_tb__DOT__alu_auto__60__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__60__expected;
    __Vtask_alu_tb__DOT__alu_auto__60__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__60__result_out;
    __Vtask_alu_tb__DOT__alu_auto__60__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__61__op;
    __Vtask_alu_tb__DOT__alu_auto__61__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__61__a;
    __Vtask_alu_tb__DOT__alu_auto__61__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__61__b;
    __Vtask_alu_tb__DOT__alu_auto__61__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__61__expected;
    __Vtask_alu_tb__DOT__alu_auto__61__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__61__result_out;
    __Vtask_alu_tb__DOT__alu_auto__61__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__62__op;
    __Vtask_alu_tb__DOT__alu_auto__62__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__62__a;
    __Vtask_alu_tb__DOT__alu_auto__62__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__62__b;
    __Vtask_alu_tb__DOT__alu_auto__62__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__62__expected;
    __Vtask_alu_tb__DOT__alu_auto__62__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__62__result_out;
    __Vtask_alu_tb__DOT__alu_auto__62__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__63__op;
    __Vtask_alu_tb__DOT__alu_auto__63__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__63__a;
    __Vtask_alu_tb__DOT__alu_auto__63__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__63__b;
    __Vtask_alu_tb__DOT__alu_auto__63__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__63__expected;
    __Vtask_alu_tb__DOT__alu_auto__63__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__63__result_out;
    __Vtask_alu_tb__DOT__alu_auto__63__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__64__op;
    __Vtask_alu_tb__DOT__alu_auto__64__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__64__a;
    __Vtask_alu_tb__DOT__alu_auto__64__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__64__b;
    __Vtask_alu_tb__DOT__alu_auto__64__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__64__expected;
    __Vtask_alu_tb__DOT__alu_auto__64__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__64__result_out;
    __Vtask_alu_tb__DOT__alu_auto__64__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__65__op;
    __Vtask_alu_tb__DOT__alu_auto__65__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__65__a;
    __Vtask_alu_tb__DOT__alu_auto__65__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__65__b;
    __Vtask_alu_tb__DOT__alu_auto__65__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__65__expected;
    __Vtask_alu_tb__DOT__alu_auto__65__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__65__result_out;
    __Vtask_alu_tb__DOT__alu_auto__65__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__66__op;
    __Vtask_alu_tb__DOT__alu_auto__66__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__66__a;
    __Vtask_alu_tb__DOT__alu_auto__66__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__66__b;
    __Vtask_alu_tb__DOT__alu_auto__66__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__66__expected;
    __Vtask_alu_tb__DOT__alu_auto__66__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__66__result_out;
    __Vtask_alu_tb__DOT__alu_auto__66__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__67__op;
    __Vtask_alu_tb__DOT__alu_auto__67__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__67__a;
    __Vtask_alu_tb__DOT__alu_auto__67__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__67__b;
    __Vtask_alu_tb__DOT__alu_auto__67__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__67__expected;
    __Vtask_alu_tb__DOT__alu_auto__67__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__67__result_out;
    __Vtask_alu_tb__DOT__alu_auto__67__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__68__op;
    __Vtask_alu_tb__DOT__alu_auto__68__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__68__a;
    __Vtask_alu_tb__DOT__alu_auto__68__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__68__b;
    __Vtask_alu_tb__DOT__alu_auto__68__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__68__expected;
    __Vtask_alu_tb__DOT__alu_auto__68__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__68__result_out;
    __Vtask_alu_tb__DOT__alu_auto__68__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__69__op;
    __Vtask_alu_tb__DOT__alu_auto__69__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__69__a;
    __Vtask_alu_tb__DOT__alu_auto__69__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__69__b;
    __Vtask_alu_tb__DOT__alu_auto__69__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__69__expected;
    __Vtask_alu_tb__DOT__alu_auto__69__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__69__result_out;
    __Vtask_alu_tb__DOT__alu_auto__69__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__70__op;
    __Vtask_alu_tb__DOT__alu_auto__70__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__70__a;
    __Vtask_alu_tb__DOT__alu_auto__70__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__70__b;
    __Vtask_alu_tb__DOT__alu_auto__70__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__70__expected;
    __Vtask_alu_tb__DOT__alu_auto__70__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__70__result_out;
    __Vtask_alu_tb__DOT__alu_auto__70__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__71__op;
    __Vtask_alu_tb__DOT__alu_auto__71__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__71__a;
    __Vtask_alu_tb__DOT__alu_auto__71__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__71__b;
    __Vtask_alu_tb__DOT__alu_auto__71__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__71__expected;
    __Vtask_alu_tb__DOT__alu_auto__71__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__71__result_out;
    __Vtask_alu_tb__DOT__alu_auto__71__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__72__op;
    __Vtask_alu_tb__DOT__alu_auto__72__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__72__a;
    __Vtask_alu_tb__DOT__alu_auto__72__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__72__b;
    __Vtask_alu_tb__DOT__alu_auto__72__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__72__expected;
    __Vtask_alu_tb__DOT__alu_auto__72__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__72__result_out;
    __Vtask_alu_tb__DOT__alu_auto__72__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__73__op;
    __Vtask_alu_tb__DOT__alu_auto__73__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__73__a;
    __Vtask_alu_tb__DOT__alu_auto__73__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__73__b;
    __Vtask_alu_tb__DOT__alu_auto__73__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__73__expected;
    __Vtask_alu_tb__DOT__alu_auto__73__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__73__result_out;
    __Vtask_alu_tb__DOT__alu_auto__73__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__74__op;
    __Vtask_alu_tb__DOT__alu_auto__74__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__74__a;
    __Vtask_alu_tb__DOT__alu_auto__74__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__74__b;
    __Vtask_alu_tb__DOT__alu_auto__74__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__74__expected;
    __Vtask_alu_tb__DOT__alu_auto__74__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__74__result_out;
    __Vtask_alu_tb__DOT__alu_auto__74__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__75__op;
    __Vtask_alu_tb__DOT__alu_auto__75__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__75__a;
    __Vtask_alu_tb__DOT__alu_auto__75__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__75__b;
    __Vtask_alu_tb__DOT__alu_auto__75__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__75__expected;
    __Vtask_alu_tb__DOT__alu_auto__75__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__75__result_out;
    __Vtask_alu_tb__DOT__alu_auto__75__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__76__op;
    __Vtask_alu_tb__DOT__alu_auto__76__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__76__a;
    __Vtask_alu_tb__DOT__alu_auto__76__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__76__b;
    __Vtask_alu_tb__DOT__alu_auto__76__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__76__expected;
    __Vtask_alu_tb__DOT__alu_auto__76__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__76__result_out;
    __Vtask_alu_tb__DOT__alu_auto__76__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__77__op;
    __Vtask_alu_tb__DOT__alu_auto__77__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__77__a;
    __Vtask_alu_tb__DOT__alu_auto__77__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__77__b;
    __Vtask_alu_tb__DOT__alu_auto__77__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__77__expected;
    __Vtask_alu_tb__DOT__alu_auto__77__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__77__result_out;
    __Vtask_alu_tb__DOT__alu_auto__77__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__78__op;
    __Vtask_alu_tb__DOT__alu_auto__78__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__78__a;
    __Vtask_alu_tb__DOT__alu_auto__78__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__78__b;
    __Vtask_alu_tb__DOT__alu_auto__78__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__78__expected;
    __Vtask_alu_tb__DOT__alu_auto__78__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__78__result_out;
    __Vtask_alu_tb__DOT__alu_auto__78__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__79__op;
    __Vtask_alu_tb__DOT__alu_auto__79__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__79__a;
    __Vtask_alu_tb__DOT__alu_auto__79__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__79__b;
    __Vtask_alu_tb__DOT__alu_auto__79__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__79__expected;
    __Vtask_alu_tb__DOT__alu_auto__79__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__79__result_out;
    __Vtask_alu_tb__DOT__alu_auto__79__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__80__op;
    __Vtask_alu_tb__DOT__alu_auto__80__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__80__a;
    __Vtask_alu_tb__DOT__alu_auto__80__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__80__b;
    __Vtask_alu_tb__DOT__alu_auto__80__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__80__expected;
    __Vtask_alu_tb__DOT__alu_auto__80__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__80__result_out;
    __Vtask_alu_tb__DOT__alu_auto__80__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__81__op;
    __Vtask_alu_tb__DOT__alu_auto__81__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__81__a;
    __Vtask_alu_tb__DOT__alu_auto__81__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__81__b;
    __Vtask_alu_tb__DOT__alu_auto__81__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__81__expected;
    __Vtask_alu_tb__DOT__alu_auto__81__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__81__result_out;
    __Vtask_alu_tb__DOT__alu_auto__81__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__82__op;
    __Vtask_alu_tb__DOT__alu_auto__82__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__82__a;
    __Vtask_alu_tb__DOT__alu_auto__82__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__82__b;
    __Vtask_alu_tb__DOT__alu_auto__82__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__82__expected;
    __Vtask_alu_tb__DOT__alu_auto__82__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__82__result_out;
    __Vtask_alu_tb__DOT__alu_auto__82__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__83__op;
    __Vtask_alu_tb__DOT__alu_auto__83__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__83__a;
    __Vtask_alu_tb__DOT__alu_auto__83__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__83__b;
    __Vtask_alu_tb__DOT__alu_auto__83__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__83__expected;
    __Vtask_alu_tb__DOT__alu_auto__83__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__83__result_out;
    __Vtask_alu_tb__DOT__alu_auto__83__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__84__op;
    __Vtask_alu_tb__DOT__alu_auto__84__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__84__a;
    __Vtask_alu_tb__DOT__alu_auto__84__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__84__b;
    __Vtask_alu_tb__DOT__alu_auto__84__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__84__expected;
    __Vtask_alu_tb__DOT__alu_auto__84__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__84__result_out;
    __Vtask_alu_tb__DOT__alu_auto__84__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__85__op;
    __Vtask_alu_tb__DOT__alu_auto__85__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__85__a;
    __Vtask_alu_tb__DOT__alu_auto__85__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__85__b;
    __Vtask_alu_tb__DOT__alu_auto__85__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__85__expected;
    __Vtask_alu_tb__DOT__alu_auto__85__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__85__result_out;
    __Vtask_alu_tb__DOT__alu_auto__85__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__86__op;
    __Vtask_alu_tb__DOT__alu_auto__86__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__86__a;
    __Vtask_alu_tb__DOT__alu_auto__86__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__86__b;
    __Vtask_alu_tb__DOT__alu_auto__86__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__86__expected;
    __Vtask_alu_tb__DOT__alu_auto__86__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__86__result_out;
    __Vtask_alu_tb__DOT__alu_auto__86__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__87__op;
    __Vtask_alu_tb__DOT__alu_auto__87__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__87__a;
    __Vtask_alu_tb__DOT__alu_auto__87__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__87__b;
    __Vtask_alu_tb__DOT__alu_auto__87__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__87__expected;
    __Vtask_alu_tb__DOT__alu_auto__87__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__87__result_out;
    __Vtask_alu_tb__DOT__alu_auto__87__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__88__op;
    __Vtask_alu_tb__DOT__alu_auto__88__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__88__a;
    __Vtask_alu_tb__DOT__alu_auto__88__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__88__b;
    __Vtask_alu_tb__DOT__alu_auto__88__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__88__expected;
    __Vtask_alu_tb__DOT__alu_auto__88__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__88__result_out;
    __Vtask_alu_tb__DOT__alu_auto__88__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__89__op;
    __Vtask_alu_tb__DOT__alu_auto__89__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__89__a;
    __Vtask_alu_tb__DOT__alu_auto__89__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__89__b;
    __Vtask_alu_tb__DOT__alu_auto__89__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__89__expected;
    __Vtask_alu_tb__DOT__alu_auto__89__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__89__result_out;
    __Vtask_alu_tb__DOT__alu_auto__89__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__90__op;
    __Vtask_alu_tb__DOT__alu_auto__90__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__90__a;
    __Vtask_alu_tb__DOT__alu_auto__90__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__90__b;
    __Vtask_alu_tb__DOT__alu_auto__90__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__90__expected;
    __Vtask_alu_tb__DOT__alu_auto__90__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__90__result_out;
    __Vtask_alu_tb__DOT__alu_auto__90__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__91__op;
    __Vtask_alu_tb__DOT__alu_auto__91__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__91__a;
    __Vtask_alu_tb__DOT__alu_auto__91__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__91__b;
    __Vtask_alu_tb__DOT__alu_auto__91__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__91__expected;
    __Vtask_alu_tb__DOT__alu_auto__91__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__91__result_out;
    __Vtask_alu_tb__DOT__alu_auto__91__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__92__op;
    __Vtask_alu_tb__DOT__alu_auto__92__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__92__a;
    __Vtask_alu_tb__DOT__alu_auto__92__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__92__b;
    __Vtask_alu_tb__DOT__alu_auto__92__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__92__expected;
    __Vtask_alu_tb__DOT__alu_auto__92__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__92__result_out;
    __Vtask_alu_tb__DOT__alu_auto__92__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__93__op;
    __Vtask_alu_tb__DOT__alu_auto__93__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__93__a;
    __Vtask_alu_tb__DOT__alu_auto__93__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__93__b;
    __Vtask_alu_tb__DOT__alu_auto__93__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__93__expected;
    __Vtask_alu_tb__DOT__alu_auto__93__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__93__result_out;
    __Vtask_alu_tb__DOT__alu_auto__93__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__94__op;
    __Vtask_alu_tb__DOT__alu_auto__94__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__94__a;
    __Vtask_alu_tb__DOT__alu_auto__94__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__94__b;
    __Vtask_alu_tb__DOT__alu_auto__94__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__94__expected;
    __Vtask_alu_tb__DOT__alu_auto__94__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__94__result_out;
    __Vtask_alu_tb__DOT__alu_auto__94__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__95__op;
    __Vtask_alu_tb__DOT__alu_auto__95__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__95__a;
    __Vtask_alu_tb__DOT__alu_auto__95__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__95__b;
    __Vtask_alu_tb__DOT__alu_auto__95__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__95__expected;
    __Vtask_alu_tb__DOT__alu_auto__95__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__95__result_out;
    __Vtask_alu_tb__DOT__alu_auto__95__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__96__op;
    __Vtask_alu_tb__DOT__alu_auto__96__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__96__a;
    __Vtask_alu_tb__DOT__alu_auto__96__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__96__b;
    __Vtask_alu_tb__DOT__alu_auto__96__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__96__expected;
    __Vtask_alu_tb__DOT__alu_auto__96__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__96__result_out;
    __Vtask_alu_tb__DOT__alu_auto__96__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__97__op;
    __Vtask_alu_tb__DOT__alu_auto__97__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__97__a;
    __Vtask_alu_tb__DOT__alu_auto__97__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__97__b;
    __Vtask_alu_tb__DOT__alu_auto__97__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__97__expected;
    __Vtask_alu_tb__DOT__alu_auto__97__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__97__result_out;
    __Vtask_alu_tb__DOT__alu_auto__97__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__98__op;
    __Vtask_alu_tb__DOT__alu_auto__98__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__98__a;
    __Vtask_alu_tb__DOT__alu_auto__98__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__98__b;
    __Vtask_alu_tb__DOT__alu_auto__98__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__98__expected;
    __Vtask_alu_tb__DOT__alu_auto__98__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__98__result_out;
    __Vtask_alu_tb__DOT__alu_auto__98__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__99__op;
    __Vtask_alu_tb__DOT__alu_auto__99__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__99__a;
    __Vtask_alu_tb__DOT__alu_auto__99__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__99__b;
    __Vtask_alu_tb__DOT__alu_auto__99__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__99__expected;
    __Vtask_alu_tb__DOT__alu_auto__99__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__99__result_out;
    __Vtask_alu_tb__DOT__alu_auto__99__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__100__op;
    __Vtask_alu_tb__DOT__alu_auto__100__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__100__a;
    __Vtask_alu_tb__DOT__alu_auto__100__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__100__b;
    __Vtask_alu_tb__DOT__alu_auto__100__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__100__expected;
    __Vtask_alu_tb__DOT__alu_auto__100__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__100__result_out;
    __Vtask_alu_tb__DOT__alu_auto__100__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__101__op;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__101__a;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__101__b;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__101__expected;
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__101__result_out;
    __Vtask_alu_tb__DOT__alu_auto__101__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__102__op;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__102__a;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__102__b;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__102__expected;
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__102__result_out;
    __Vtask_alu_tb__DOT__alu_auto__102__result_out = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__alu_auto__103__op;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__103__a;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__103__b;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__103__expected;
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__alu_auto__103__result_out;
    __Vtask_alu_tb__DOT__alu_auto__103__result_out = 0;
    // Body
    alu_tb__DOT__unnamedblk1__DOT__N = 0x3e8U;
    alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i, alu_tb__DOT__unnamedblk1__DOT__N)) {
        vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a 
            = VL_RANDOM_I();
        vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b 
            = VL_RANDOM_I();
        __Vtask_alu_tb__DOT__alu_auto__0__expected 
            = (vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a 
               + vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b);
        __Vtask_alu_tb__DOT__alu_auto__0__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__0__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__0__op = 0U;
        vlSelfRef.alu_tb__DOT__alu_op = 0U;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__0__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__0__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__0__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__0__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__0__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__0__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__0__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__0__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__0__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__0__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__1__expected 
            = (vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a 
               - vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b);
        __Vtask_alu_tb__DOT__alu_auto__1__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__1__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__1__op = 1U;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__1__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__1__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__1__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__1__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__1__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__1__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__1__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__1__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__1__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__1__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__1__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__2__expected 
            = (vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a 
               & vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b);
        __Vtask_alu_tb__DOT__alu_auto__2__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__2__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__2__op = 2U;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__2__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__2__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__2__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__2__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__2__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__2__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__2__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__2__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__2__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__2__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__2__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__3__expected 
            = (vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a 
               | vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b);
        __Vtask_alu_tb__DOT__alu_auto__3__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__3__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__3__op = 3U;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__3__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__3__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__3__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__3__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__3__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__3__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__3__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__3__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__3__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__3__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__3__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__4__expected 
            = (vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a 
               ^ vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b);
        __Vtask_alu_tb__DOT__alu_auto__4__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__4__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__4__op = 4U;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__4__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__4__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__4__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__4__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__4__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__4__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__4__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__4__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__4__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__4__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__4__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__5__expected 
            = (vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a 
               << (0x1fU & vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b));
        __Vtask_alu_tb__DOT__alu_auto__5__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__5__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__5__op = 5U;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__5__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__5__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__5__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__5__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__5__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__5__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__5__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__5__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__5__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__5__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__5__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__6__expected 
            = (vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a 
               >> (0x1fU & vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b));
        __Vtask_alu_tb__DOT__alu_auto__6__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__6__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__6__op = 6U;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__6__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__6__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__6__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__6__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__6__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__6__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__6__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__6__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__6__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__6__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__6__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__7__expected 
            = VL_SHIFTRS_III(32,32,5, vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a, 
                             (0x1fU & vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b));
        __Vtask_alu_tb__DOT__alu_auto__7__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__7__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__7__op = 7U;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__7__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__7__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__7__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__7__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__7__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__7__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__7__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__7__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__7__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__7__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__7__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__8__expected 
            = (VL_LTS_III(32, vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a, vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b)
                ? 1U : 0U);
        __Vtask_alu_tb__DOT__alu_auto__8__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__8__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__8__op = 8U;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__8__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__8__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__8__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__8__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__8__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__8__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__8__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__8__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__8__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__8__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__8__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__9__expected 
            = ((vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a 
                < vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b)
                ? 1U : 0U);
        __Vtask_alu_tb__DOT__alu_auto__9__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__9__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__9__op = 9U;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__9__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__9__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__9__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__9__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__9__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__9__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__9__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__9__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__9__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__9__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__9__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__10__expected = 0U;
        __Vtask_alu_tb__DOT__alu_auto__10__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__10__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__10__op = 0xaU;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__10__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__10__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__10__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__10__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__10__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__10__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__10__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__10__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__10__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__10__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__10__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__11__expected = 0U;
        __Vtask_alu_tb__DOT__alu_auto__11__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__11__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__11__op = 0xbU;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__11__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__11__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__11__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__11__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__11__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__11__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__11__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__11__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__11__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__11__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__11__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__12__expected = 0U;
        __Vtask_alu_tb__DOT__alu_auto__12__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__12__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__12__op = 0xcU;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__12__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__12__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__12__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__12__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__12__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__12__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__12__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__12__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__12__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__12__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__12__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__13__expected = 0U;
        __Vtask_alu_tb__DOT__alu_auto__13__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__13__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__13__op = 0xdU;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__13__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__13__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__13__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__13__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__13__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__13__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__13__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__13__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__13__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__13__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__13__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__14__expected = 0U;
        __Vtask_alu_tb__DOT__alu_auto__14__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__14__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__14__op = 0xeU;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__14__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__14__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__14__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__14__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__14__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__14__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__14__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__14__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__14__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__14__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__14__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        __Vtask_alu_tb__DOT__alu_auto__15__expected = 0U;
        __Vtask_alu_tb__DOT__alu_auto__15__b = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
        __Vtask_alu_tb__DOT__alu_auto__15__a = vlSelfRef.alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_alu_tb__DOT__alu_auto__15__op = 0xfU;
        vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__15__op;
        vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__15__a;
        vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__15__b;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/alu_tb.sv", 
                                             28);
        __Vtask_alu_tb__DOT__alu_auto__15__result_out 
            = vlSelfRef.alu_tb__DOT__result;
        if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__15__result_out 
                         != __Vtask_alu_tb__DOT__alu_auto__15__expected))) {
            VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                         4,__Vtask_alu_tb__DOT__alu_auto__15__op,
                         32,__Vtask_alu_tb__DOT__alu_auto__15__a,
                         32,__Vtask_alu_tb__DOT__alu_auto__15__b,
                         32,__Vtask_alu_tb__DOT__alu_auto__15__expected,
                         32,__Vtask_alu_tb__DOT__alu_auto__15__result_out);
            vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__fail_count);
        } else {
            vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.alu_tb__DOT__pass_count);
        }
        alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + alu_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
    }
    __Vtask_alu_tb__DOT__alu_auto__16__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__16__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__16__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__16__op = 0U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__16__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__16__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__16__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__16__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__16__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__16__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__16__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__16__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__16__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__16__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__16__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__17__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__17__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__17__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__17__op = 1U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__17__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__17__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__17__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__17__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__17__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__17__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__17__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__17__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__17__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__17__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__17__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__18__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__18__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__18__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__18__op = 2U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__18__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__18__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__18__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__18__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__18__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__18__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__18__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__18__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__18__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__18__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__18__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__19__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__19__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__19__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__19__op = 3U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__19__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__19__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__19__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__19__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__19__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__19__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__19__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__19__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__19__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__19__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__19__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__20__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__20__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__20__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__20__op = 4U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__20__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__20__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__20__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__20__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__20__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__20__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__20__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__20__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__20__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__20__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__20__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__21__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__21__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__21__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__21__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__21__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__21__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__21__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__21__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__21__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__21__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__21__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__21__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__21__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__21__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__21__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__22__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__22__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__22__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__22__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__22__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__22__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__22__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__22__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__22__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__22__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__22__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__22__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__22__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__22__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__22__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__23__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__23__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__23__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__23__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__23__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__23__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__23__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__23__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__23__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__23__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__23__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__23__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__23__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__23__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__23__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__24__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__24__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__24__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__24__op = 8U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__24__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__24__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__24__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__24__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__24__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__24__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__24__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__24__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__24__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__24__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__24__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__25__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__25__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__25__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__25__op = 9U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__25__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__25__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__25__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__25__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__25__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__25__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__25__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__25__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__25__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__25__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__25__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__26__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__26__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__26__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__26__op = 0xaU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__26__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__26__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__26__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__26__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__26__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__26__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__26__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__26__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__26__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__26__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__26__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__27__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__27__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__27__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__27__op = 0xbU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__27__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__27__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__27__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__27__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__27__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__27__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__27__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__27__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__27__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__27__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__27__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__28__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__28__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__28__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__28__op = 0xcU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__28__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__28__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__28__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__28__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__28__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__28__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__28__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__28__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__28__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__28__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__28__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__29__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__29__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__29__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__29__op = 0xdU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__29__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__29__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__29__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__29__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__29__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__29__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__29__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__29__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__29__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__29__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__29__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__30__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__30__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__30__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__30__op = 0xeU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__30__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__30__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__30__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__30__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__30__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__30__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__30__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__30__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__30__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__30__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__30__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__31__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__31__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__31__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__31__op = 0xfU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__31__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__31__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__31__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__31__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__31__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__31__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__31__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__31__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__31__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__31__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__31__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__32__expected = 0xfffffffeU;
    __Vtask_alu_tb__DOT__alu_auto__32__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__32__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__32__op = 0U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__32__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__32__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__32__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__32__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__32__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__32__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__32__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__32__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__32__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__32__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__32__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__33__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__33__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__33__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__33__op = 1U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__33__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__33__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__33__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__33__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__33__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__33__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__33__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__33__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__33__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__33__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__33__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__34__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__34__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__34__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__34__op = 2U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__34__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__34__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__34__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__34__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__34__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__34__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__34__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__34__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__34__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__34__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__34__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__35__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__35__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__35__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__35__op = 3U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__35__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__35__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__35__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__35__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__35__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__35__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__35__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__35__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__35__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__35__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__35__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__36__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__36__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__36__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__36__op = 4U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__36__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__36__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__36__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__36__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__36__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__36__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__36__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__36__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__36__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__36__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__36__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__37__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__37__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__37__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__37__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__37__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__37__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__37__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__37__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__37__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__37__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__37__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__37__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__37__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__37__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__37__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__38__expected = 1U;
    __Vtask_alu_tb__DOT__alu_auto__38__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__38__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__38__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__38__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__38__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__38__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__38__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__38__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__38__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__38__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__38__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__38__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__38__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__38__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__39__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__39__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__39__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__39__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__39__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__39__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__39__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__39__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__39__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__39__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__39__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__39__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__39__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__39__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__39__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__40__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__40__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__40__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__40__op = 8U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__40__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__40__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__40__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__40__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__40__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__40__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__40__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__40__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__40__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__40__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__40__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__41__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__41__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__41__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__41__op = 9U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__41__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__41__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__41__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__41__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__41__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__41__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__41__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__41__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__41__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__41__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__41__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__42__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__42__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__42__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__42__op = 0xaU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__42__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__42__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__42__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__42__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__42__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__42__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__42__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__42__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__42__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__42__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__42__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__43__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__43__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__43__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__43__op = 0xbU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__43__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__43__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__43__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__43__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__43__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__43__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__43__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__43__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__43__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__43__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__43__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__44__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__44__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__44__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__44__op = 0xcU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__44__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__44__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__44__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__44__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__44__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__44__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__44__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__44__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__44__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__44__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__44__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__45__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__45__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__45__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__45__op = 0xdU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__45__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__45__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__45__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__45__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__45__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__45__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__45__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__45__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__45__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__45__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__45__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__46__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__46__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__46__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__46__op = 0xeU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__46__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__46__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__46__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__46__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__46__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__46__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__46__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__46__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__46__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__46__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__46__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__47__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__47__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__47__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__47__op = 0xfU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__47__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__47__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__47__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__47__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__47__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__47__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__47__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__47__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__47__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__47__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__47__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__48__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__48__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__48__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__48__op = 0U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__48__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__48__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__48__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__48__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__48__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__48__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__48__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__48__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__48__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__48__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__48__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__49__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__49__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__49__a = 0U;
    __Vtask_alu_tb__DOT__alu_auto__49__op = 1U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__49__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__49__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__49__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__49__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__49__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__49__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__49__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__49__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__49__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__49__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__49__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__50__expected = 1U;
    __Vtask_alu_tb__DOT__alu_auto__50__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__50__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__50__op = 2U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__50__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__50__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__50__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__50__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__50__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__50__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__50__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__50__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__50__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__50__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__50__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__51__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__51__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__51__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__51__op = 3U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__51__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__51__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__51__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__51__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__51__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__51__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__51__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__51__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__51__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__51__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__51__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__52__expected = 0xfffffffeU;
    __Vtask_alu_tb__DOT__alu_auto__52__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__52__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__52__op = 4U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__52__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__52__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__52__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__52__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__52__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__52__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__52__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__52__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__52__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__52__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__52__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__53__expected = 0xfffffffeU;
    __Vtask_alu_tb__DOT__alu_auto__53__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__53__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__53__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__53__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__53__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__53__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__53__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__53__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__53__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__53__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__53__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__53__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__53__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__53__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__54__expected = 0x7fffffffU;
    __Vtask_alu_tb__DOT__alu_auto__54__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__54__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__54__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__54__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__54__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__54__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__54__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__54__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__54__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__54__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__54__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__54__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__54__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__54__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__55__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__55__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__55__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__55__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__55__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__55__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__55__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__55__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__55__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__55__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__55__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__55__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__55__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__55__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__55__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__56__expected = 1U;
    __Vtask_alu_tb__DOT__alu_auto__56__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__56__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__56__op = 8U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__56__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__56__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__56__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__56__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__56__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__56__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__56__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__56__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__56__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__56__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__56__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__57__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__57__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__57__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__57__op = 9U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__57__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__57__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__57__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__57__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__57__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__57__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__57__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__57__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__57__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__57__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__57__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__58__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__58__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__58__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__58__op = 0xaU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__58__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__58__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__58__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__58__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__58__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__58__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__58__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__58__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__58__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__58__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__58__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__59__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__59__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__59__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__59__op = 0xbU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__59__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__59__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__59__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__59__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__59__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__59__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__59__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__59__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__59__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__59__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__59__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__60__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__60__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__60__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__60__op = 0xcU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__60__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__60__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__60__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__60__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__60__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__60__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__60__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__60__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__60__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__60__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__60__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__61__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__61__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__61__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__61__op = 0xdU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__61__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__61__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__61__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__61__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__61__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__61__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__61__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__61__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__61__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__61__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__61__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__62__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__62__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__62__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__62__op = 0xeU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__62__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__62__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__62__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__62__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__62__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__62__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__62__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__62__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__62__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__62__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__62__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__63__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__63__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__63__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__63__op = 0xfU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__63__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__63__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__63__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__63__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__63__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__63__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__63__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__63__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__63__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__63__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__63__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__64__expected = 0xfffffffeU;
    __Vtask_alu_tb__DOT__alu_auto__64__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__64__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__64__op = 0U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__64__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__64__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__64__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__64__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__64__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__64__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__64__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__64__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__64__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__64__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__64__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__65__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__65__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__65__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__65__op = 1U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__65__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__65__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__65__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__65__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__65__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__65__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__65__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__65__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__65__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__65__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__65__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__66__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__66__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__66__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__66__op = 2U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__66__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__66__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__66__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__66__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__66__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__66__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__66__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__66__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__66__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__66__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__66__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__67__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__67__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__67__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__67__op = 3U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__67__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__67__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__67__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__67__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__67__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__67__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__67__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__67__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__67__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__67__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__67__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__68__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__68__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__68__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__68__op = 4U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__68__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__68__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__68__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__68__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__68__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__68__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__68__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__68__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__68__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__68__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__68__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__69__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__69__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__69__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__69__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__69__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__69__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__69__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__69__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__69__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__69__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__69__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__69__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__69__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__69__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__69__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__70__expected = 1U;
    __Vtask_alu_tb__DOT__alu_auto__70__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__70__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__70__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__70__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__70__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__70__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__70__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__70__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__70__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__70__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__70__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__70__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__70__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__70__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__71__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__71__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__71__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__71__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__71__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__71__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__71__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__71__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__71__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__71__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__71__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__71__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__71__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__71__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__71__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__72__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__72__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__72__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__72__op = 8U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__72__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__72__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__72__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__72__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__72__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__72__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__72__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__72__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__72__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__72__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__72__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__73__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__73__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__73__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__73__op = 9U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__73__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__73__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__73__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__73__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__73__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__73__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__73__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__73__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__73__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__73__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__73__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__74__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__74__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__74__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__74__op = 0xaU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__74__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__74__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__74__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__74__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__74__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__74__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__74__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__74__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__74__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__74__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__74__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__75__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__75__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__75__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__75__op = 0xbU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__75__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__75__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__75__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__75__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__75__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__75__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__75__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__75__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__75__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__75__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__75__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__76__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__76__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__76__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__76__op = 0xcU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__76__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__76__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__76__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__76__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__76__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__76__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__76__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__76__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__76__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__76__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__76__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__77__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__77__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__77__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__77__op = 0xdU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__77__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__77__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__77__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__77__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__77__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__77__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__77__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__77__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__77__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__77__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__77__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__78__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__78__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__78__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__78__op = 0xeU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__78__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__78__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__78__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__78__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__78__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__78__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__78__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__78__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__78__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__78__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__78__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__79__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__79__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__79__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__79__op = 0xfU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__79__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__79__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__79__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__79__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__79__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__79__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__79__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__79__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__79__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__79__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__79__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__80__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__80__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__80__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__80__op = 0U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__80__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__80__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__80__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__80__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__80__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__80__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__80__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__80__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__80__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__80__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__80__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__81__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__81__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__81__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__81__op = 1U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__81__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__81__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__81__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__81__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__81__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__81__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__81__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__81__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__81__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__81__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__81__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__82__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__82__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__82__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__82__op = 2U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__82__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__82__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__82__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__82__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__82__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__82__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__82__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__82__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__82__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__82__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__82__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__83__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__83__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__83__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__83__op = 3U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__83__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__83__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__83__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__83__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__83__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__83__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__83__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__83__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__83__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__83__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__83__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__84__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__84__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__84__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__84__op = 4U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__84__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__84__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__84__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__84__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__84__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__84__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__84__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__84__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__84__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__84__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__84__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__85__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__85__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__85__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__85__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__85__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__85__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__85__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__85__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__85__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__85__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__85__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__85__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__85__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__85__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__85__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__86__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__86__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__86__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__86__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__86__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__86__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__86__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__86__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__86__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__86__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__86__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__86__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__86__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__86__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__86__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__87__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__87__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__87__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__87__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__87__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__87__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__87__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__87__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__87__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__87__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__87__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__87__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__87__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__87__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__87__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__88__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__88__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__88__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__88__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__88__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__88__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__88__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__88__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__88__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__88__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__88__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__88__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__88__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__88__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__88__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__89__expected = 0x40000000U;
    __Vtask_alu_tb__DOT__alu_auto__89__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__89__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__89__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__89__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__89__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__89__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__89__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__89__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__89__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__89__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__89__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__89__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__89__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__89__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__90__expected = 0xc0000000U;
    __Vtask_alu_tb__DOT__alu_auto__90__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__90__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__90__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__90__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__90__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__90__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__90__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__90__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__90__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__90__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__90__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__90__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__90__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__90__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__91__expected = 1U;
    __Vtask_alu_tb__DOT__alu_auto__91__b = 0x1fU;
    __Vtask_alu_tb__DOT__alu_auto__91__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__91__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__91__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__91__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__91__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__91__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__91__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__91__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__91__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__91__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__91__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__91__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__91__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__92__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__92__b = 0x1fU;
    __Vtask_alu_tb__DOT__alu_auto__92__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__92__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__92__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__92__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__92__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__92__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__92__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__92__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__92__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__92__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__92__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__92__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__92__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__93__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__93__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__93__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__93__op = 8U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__93__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__93__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__93__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__93__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__93__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__93__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__93__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__93__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__93__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__93__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__93__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__94__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__94__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__94__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__94__op = 9U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__94__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__94__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__94__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__94__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__94__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__94__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__94__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__94__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__94__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__94__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__94__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__95__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__95__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__95__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__95__op = 0xaU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__95__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__95__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__95__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__95__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__95__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__95__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__95__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__95__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__95__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__95__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__95__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__96__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__96__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__96__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__96__op = 0xbU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__96__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__96__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__96__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__96__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__96__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__96__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__96__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__96__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__96__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__96__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__96__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__97__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__97__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__97__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__97__op = 0xcU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__97__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__97__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__97__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__97__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__97__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__97__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__97__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__97__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__97__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__97__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__97__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__98__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__98__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__98__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__98__op = 0xdU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__98__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__98__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__98__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__98__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__98__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__98__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__98__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__98__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__98__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__98__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__98__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__99__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__99__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__99__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__99__op = 0xeU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__99__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__99__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__99__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__99__result_out = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__99__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__99__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__99__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__99__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__99__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__99__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__99__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__100__expected = 0U;
    __Vtask_alu_tb__DOT__alu_auto__100__b = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__100__a = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__100__op = 0xfU;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__100__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__100__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__100__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__100__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__100__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__100__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__100__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__100__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__100__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__100__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__100__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfffffffeU;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x7fffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 1U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfffffffcU;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 2U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x3fffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 2U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 2U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfffffff8U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 3U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x1fffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 3U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 3U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfffffff0U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 4U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0xfffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 4U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 4U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xffffffe0U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 5U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x7ffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 5U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 5U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xffffffc0U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 6U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x3ffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 6U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 6U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xffffff80U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 7U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x1ffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 7U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 7U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xffffff00U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 8U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0xffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 8U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 8U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfffffe00U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 9U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x7fffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 9U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 9U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfffffc00U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0xaU;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x3fffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0xaU;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0xaU;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfffff800U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0xbU;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x1fffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0xbU;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0xbU;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfffff000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0xcU;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0xfffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0xcU;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0xcU;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xffffe000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0xdU;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x7ffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0xdU;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0xdU;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xffffc000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0xeU;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x3ffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0xeU;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0xeU;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xffff8000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0xfU;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x1ffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0xfU;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0xfU;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xffff0000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x10U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0xffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x10U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x10U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfffe0000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x11U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x7fffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x11U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x11U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfffc0000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x12U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x3fffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x12U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x12U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfff80000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x13U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x1fffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x13U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x13U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfff00000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x14U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0xfffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x14U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x14U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xffe00000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x15U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x7ffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x15U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x15U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xffc00000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x16U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x3ffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x16U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x16U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xff800000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x17U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x1ffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x17U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x17U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xff000000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x18U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0xffU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x18U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x18U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfe000000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x19U;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x7fU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x19U;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x19U;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xfc000000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x1aU;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x3fU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x1aU;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x1aU;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xf8000000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x1bU;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0x1fU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x1bU;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x1bU;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xf0000000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x1cU;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 0xfU;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x1cU;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x1cU;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xe0000000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x1dU;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 7U;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x1dU;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x1dU;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0xc0000000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x1eU;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 3U;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x1eU;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x1eU;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__101__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__alu_auto__101__b = 0x1fU;
    __Vtask_alu_tb__DOT__alu_auto__101__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__101__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__101__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__101__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__101__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__101__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__101__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__101__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__101__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__101__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__102__expected = 1U;
    __Vtask_alu_tb__DOT__alu_auto__102__b = 0x1fU;
    __Vtask_alu_tb__DOT__alu_auto__102__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__102__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__102__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__102__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__102__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__102__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__102__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__102__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__102__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__102__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__alu_auto__103__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__b = 0x1fU;
    __Vtask_alu_tb__DOT__alu_auto__103__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__alu_auto__103__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__alu_auto__103__op;
    vlSelfRef.alu_tb__DOT__operand_a = __Vtask_alu_tb__DOT__alu_auto__103__a;
    vlSelfRef.alu_tb__DOT__operand_b = __Vtask_alu_tb__DOT__alu_auto__103__b;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         28);
    __Vtask_alu_tb__DOT__alu_auto__103__result_out 
        = vlSelfRef.alu_tb__DOT__result;
    if (VL_UNLIKELY((__Vtask_alu_tb__DOT__alu_auto__103__result_out 
                     != __Vtask_alu_tb__DOT__alu_auto__103__expected))) {
        VL_WRITEF_NX("ALU Test Failed: alu_op=%b, operand_a=%x, operand_b=%x, expected_result=%x, got_result=%x\n",0,
                     4,__Vtask_alu_tb__DOT__alu_auto__103__op,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__a,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__b,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__expected,
                     32,__Vtask_alu_tb__DOT__alu_auto__103__result_out);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("pass count: %0d, fail count: %0d\n",0,
                 32,vlSelfRef.alu_tb__DOT__pass_count,
                 32,vlSelfRef.alu_tb__DOT__fail_count);
    if (VL_LIKELY((0U == vlSelfRef.alu_tb__DOT__fail_count))) {
        VL_FINISH_MT("tb/alu_tb.sv", 171, "");
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: alu_tb.sv:173: Assertion failed in %Nalu_tb.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/alu_tb.sv", 173, "", false);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_tb___024root___eval_triggers__act(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
