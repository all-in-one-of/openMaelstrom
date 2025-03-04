#pragma once
#include <utility/macro.h>
#if defined(_MSC_VER) || !defined(__CUDA_ARCH__)
#define FAP_0(...) 
#define FAP_1(WHAT,data, P, X)       WHAT(0, data, P, X)
#define FAP_2(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_1(WHAT, data, X, __VA_ARGS__))
#define FAP_3(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_2(WHAT, data, X, __VA_ARGS__))
#define FAP_4(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_3(WHAT, data, X, __VA_ARGS__))
#define FAP_5(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  EXPAND( FAP_4(WHAT, data, X, __VA_ARGS__))
#define FAP_6(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_5(WHAT, data, X, __VA_ARGS__))
#define FAP_7(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_6(WHAT, data, X, __VA_ARGS__))
#define FAP_8(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_7(WHAT, data, X, __VA_ARGS__))
#define FAP_9(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_8(WHAT, data, X, __VA_ARGS__))

#define FAP_10(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_9(WHAT, data, X, __VA_ARGS__))
#define FAP_11(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_10(WHAT, data, X, __VA_ARGS__))
#define FAP_12(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_11(WHAT, data, X, __VA_ARGS__))
#define FAP_13(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_12(WHAT, data, X, __VA_ARGS__))
#define FAP_14(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_13(WHAT, data, X, __VA_ARGS__))
#define FAP_15(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  EXPAND( FAP_14(WHAT, data, X, __VA_ARGS__))
#define FAP_16(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_15(WHAT, data, X, __VA_ARGS__))
#define FAP_17(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_16(WHAT, data, X, __VA_ARGS__))
#define FAP_18(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_17(WHAT, data, X, __VA_ARGS__))
#define FAP_19(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_18(WHAT, data, X, __VA_ARGS__))

#define FAP_20(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_19(WHAT, data, X, __VA_ARGS__))
#define FAP_21(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_20(WHAT, data, X, __VA_ARGS__))
#define FAP_22(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_21(WHAT, data, X, __VA_ARGS__))
#define FAP_23(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_22(WHAT, data, X, __VA_ARGS__))
#define FAP_24(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_23(WHAT, data, X, __VA_ARGS__))
#define FAP_25(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  EXPAND( FAP_24(WHAT, data, X, __VA_ARGS__))
#define FAP_26(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_25(WHAT, data, X, __VA_ARGS__))
#define FAP_27(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_26(WHAT, data, X, __VA_ARGS__))
#define FAP_28(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_27(WHAT, data, X, __VA_ARGS__))
#define FAP_29(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_28(WHAT, data, X, __VA_ARGS__))

#define FAP_30(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_29(WHAT, data, X, __VA_ARGS__))
#define FAP_31(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_30(WHAT, data, X, __VA_ARGS__))
#define FAP_32(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_31(WHAT, data, X, __VA_ARGS__))
#define FAP_33(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_32(WHAT, data, X, __VA_ARGS__))
#define FAP_34(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_33(WHAT, data, X, __VA_ARGS__))
#define FAP_35(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  EXPAND( FAP_34(WHAT, data, X, __VA_ARGS__))
#define FAP_36(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_35(WHAT, data, X, __VA_ARGS__))
#define FAP_37(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_36(WHAT, data, X, __VA_ARGS__))
#define FAP_38(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_37(WHAT, data, X, __VA_ARGS__))
#define FAP_39(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_38(WHAT, data, X, __VA_ARGS__))

#define FAP_40(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_39(WHAT, data, X, __VA_ARGS__))
#define FAP_41(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_40(WHAT, data, X, __VA_ARGS__))
#define FAP_42(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_41(WHAT, data, X, __VA_ARGS__))
#define FAP_43(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_42(WHAT, data, X, __VA_ARGS__))
#define FAP_44(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_43(WHAT, data, X, __VA_ARGS__))
#define FAP_45(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  EXPAND( FAP_44(WHAT, data, X, __VA_ARGS__))
#define FAP_46(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_45(WHAT, data, X, __VA_ARGS__))
#define FAP_47(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_46(WHAT, data, X, __VA_ARGS__))
#define FAP_48(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_47(WHAT, data, X, __VA_ARGS__))
#define FAP_49(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_48(WHAT, data, X, __VA_ARGS__))

#define FAP_50(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_49(WHAT, data, X, __VA_ARGS__))
#define FAP_51(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_50(WHAT, data, X, __VA_ARGS__))
#define FAP_52(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_51(WHAT, data, X, __VA_ARGS__))
#define FAP_53(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_52(WHAT, data, X, __VA_ARGS__))
#define FAP_54(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_53(WHAT, data, X, __VA_ARGS__))
#define FAP_55(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  EXPAND( FAP_54(WHAT, data, X, __VA_ARGS__))
#define FAP_56(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_55(WHAT, data, X, __VA_ARGS__))
#define FAP_57(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_56(WHAT, data, X, __VA_ARGS__))
#define FAP_58(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_57(WHAT, data, X, __VA_ARGS__))
#define FAP_59(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_58(WHAT, data, X, __VA_ARGS__))

#define FAP_60(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_59(WHAT, data, X, __VA_ARGS__))
#define FAP_61(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_60(WHAT, data, X, __VA_ARGS__))
#define FAP_62(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_61(WHAT, data, X, __VA_ARGS__))
#define FAP_63(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_62(WHAT, data, X, __VA_ARGS__))
#define FAP_64(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_63(WHAT, data, X, __VA_ARGS__))
#define FAP_65(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  EXPAND( FAP_64(WHAT, data, X, __VA_ARGS__))
#define FAP_66(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_65(WHAT, data, X, __VA_ARGS__))
#define FAP_67(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  EXPAND( FAP_66(WHAT, data, X, __VA_ARGS__))
#define FAP_68(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  EXPAND( FAP_67(WHAT, data, X, __VA_ARGS__))
#define FAP_69(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  EXPAND( FAP_68(WHAT, data, X, __VA_ARGS__))
#else
#define FAP_0(...) 
#define FAP_1(WHAT,data, P, X)       WHAT(0, data, P, X)
#define FAP_2(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_1(WHAT, data, X, __VA_ARGS__)
#define FAP_3(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_2(WHAT, data, X, __VA_ARGS__)
#define FAP_4(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_3(WHAT, data, X, __VA_ARGS__)
#define FAP_5(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  FAP_4(WHAT, data, X, __VA_ARGS__)
#define FAP_6(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_5(WHAT, data, X, __VA_ARGS__)
#define FAP_7(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_6(WHAT, data, X, __VA_ARGS__)
#define FAP_8(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_7(WHAT, data, X, __VA_ARGS__)
#define FAP_9(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_8(WHAT, data, X, __VA_ARGS__)

#define FAP_10(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_9(WHAT, data, X, __VA_ARGS__)
#define FAP_11(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_10(WHAT, data, X, __VA_ARGS__)
#define FAP_12(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_11(WHAT, data, X, __VA_ARGS__)
#define FAP_13(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_12(WHAT, data, X, __VA_ARGS__)
#define FAP_14(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_13(WHAT, data, X, __VA_ARGS__)
#define FAP_15(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  FAP_14(WHAT, data, X, __VA_ARGS__)
#define FAP_16(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_15(WHAT, data, X, __VA_ARGS__)
#define FAP_17(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_16(WHAT, data, X, __VA_ARGS__)
#define FAP_18(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_17(WHAT, data, X, __VA_ARGS__)
#define FAP_19(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_18(WHAT, data, X, __VA_ARGS__)

#define FAP_20(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_19(WHAT, data, X, __VA_ARGS__)
#define FAP_21(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_20(WHAT, data, X, __VA_ARGS__)
#define FAP_22(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_21(WHAT, data, X, __VA_ARGS__)
#define FAP_23(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_22(WHAT, data, X, __VA_ARGS__)
#define FAP_24(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_23(WHAT, data, X, __VA_ARGS__)
#define FAP_25(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  FAP_24(WHAT, data, X, __VA_ARGS__)
#define FAP_26(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_25(WHAT, data, X, __VA_ARGS__)
#define FAP_27(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_26(WHAT, data, X, __VA_ARGS__)
#define FAP_28(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_27(WHAT, data, X, __VA_ARGS__)
#define FAP_29(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_28(WHAT, data, X, __VA_ARGS__)

#define FAP_30(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_29(WHAT, data, X, __VA_ARGS__)
#define FAP_31(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_30(WHAT, data, X, __VA_ARGS__)
#define FAP_32(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_31(WHAT, data, X, __VA_ARGS__)
#define FAP_33(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_32(WHAT, data, X, __VA_ARGS__)
#define FAP_34(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_33(WHAT, data, X, __VA_ARGS__)
#define FAP_35(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  FAP_34(WHAT, data, X, __VA_ARGS__)
#define FAP_36(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_35(WHAT, data, X, __VA_ARGS__)
#define FAP_37(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_36(WHAT, data, X, __VA_ARGS__)
#define FAP_38(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_37(WHAT, data, X, __VA_ARGS__)
#define FAP_39(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_38(WHAT, data, X, __VA_ARGS__)

#define FAP_40(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_39(WHAT, data, X, __VA_ARGS__)
#define FAP_41(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_40(WHAT, data, X, __VA_ARGS__)
#define FAP_42(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_41(WHAT, data, X, __VA_ARGS__)
#define FAP_43(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_42(WHAT, data, X, __VA_ARGS__)
#define FAP_44(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_43(WHAT, data, X, __VA_ARGS__)
#define FAP_45(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  FAP_44(WHAT, data, X, __VA_ARGS__)
#define FAP_46(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_45(WHAT, data, X, __VA_ARGS__)
#define FAP_47(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_46(WHAT, data, X, __VA_ARGS__)
#define FAP_48(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_47(WHAT, data, X, __VA_ARGS__)
#define FAP_49(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_48(WHAT, data, X, __VA_ARGS__)

#define FAP_50(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_49(WHAT, data, X, __VA_ARGS__)
#define FAP_51(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_50(WHAT, data, X, __VA_ARGS__)
#define FAP_52(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_51(WHAT, data, X, __VA_ARGS__)
#define FAP_53(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_52(WHAT, data, X, __VA_ARGS__)
#define FAP_54(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_53(WHAT, data, X, __VA_ARGS__)
#define FAP_55(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  FAP_54(WHAT, data, X, __VA_ARGS__)
#define FAP_56(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_55(WHAT, data, X, __VA_ARGS__)
#define FAP_57(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_56(WHAT, data, X, __VA_ARGS__)
#define FAP_58(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_57(WHAT, data, X, __VA_ARGS__)
#define FAP_59(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_58(WHAT, data, X, __VA_ARGS__)

#define FAP_60(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_59(WHAT, data, X, __VA_ARGS__)
#define FAP_61(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_60(WHAT, data, X, __VA_ARGS__)
#define FAP_62(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_61(WHAT, data, X, __VA_ARGS__)
#define FAP_63(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_62(WHAT, data, X, __VA_ARGS__)
#define FAP_64(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_63(WHAT, data, X, __VA_ARGS__)
#define FAP_65(WHAT,data, P, X, ...)  WHAT( 4, data, P, X)  FAP_64(WHAT, data, X, __VA_ARGS__)
#define FAP_66(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_65(WHAT, data, X, __VA_ARGS__)
#define FAP_67(WHAT,data, P, X, ...)  WHAT( 1, data, P, X)  FAP_66(WHAT, data, X, __VA_ARGS__)
#define FAP_68(WHAT,data, P, X, ...)  WHAT( 2, data, P, X)  FAP_67(WHAT, data, X, __VA_ARGS__)
#define FAP_69(WHAT,data, P, X, ...)  WHAT( 3, data, P, X)  FAP_68(WHAT, data, X, __VA_ARGS__)
#endif
