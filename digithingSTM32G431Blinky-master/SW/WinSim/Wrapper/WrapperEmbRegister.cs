using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

namespace WinSim
{
    public class WrapperEmbRegister {
        public enum PeriperalRegister {
            GPIOB, SYSTICK, RCC, PERIPHERAL_REGISTER_COUNT
        };

        [DllImport("EmbSrc", SetLastError = true, CallingConvention = CallingConvention.Cdecl)]
        static public extern unsafe void WrapperRegisterWrite(WrapperEmbRegister.PeriperalRegister Peri, byte Offset, UInt32 Data);
        [DllImport("EmbSrc", SetLastError = true, CallingConvention = CallingConvention.Cdecl)]
        static public extern unsafe UInt32 WrapperRegisterRead(WrapperEmbRegister.PeriperalRegister Peri, byte Offset);
    }
}