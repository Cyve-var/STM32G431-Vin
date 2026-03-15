using System;
using static WinSim.MainWindow;


namespace WinSim {


    public class Gpio {
        public static UInt32 GpioBOdr = 0;
        public static UInt32 GpioBIdr = 0;
        public static void GpioBMain() {
            UInt32 GpioBBsrr;
            UInt32 GpioBIdr;
            GpioBBsrr = WrapperEmbRegister.WrapperRegisterRead(WrapperEmbRegister.PeriperalRegister.GPIOB, 0x18);
            GpioBOdr |= (GpioBBsrr & 0x0000FFFF);
            GpioBOdr &= ~(GpioBBsrr >> 16);
            WrapperEmbRegister.WrapperRegisterWrite(WrapperEmbRegister.PeriperalRegister.GPIOB, 0x14, GpioBOdr);
            GpioBBsrr = 0; // todo

            GpioBIdr = WrapperEmbRegister.WrapperRegisterRead(WrapperEmbRegister.PeriperalRegister.GPIOB, 0x10);
            if (true == MainWindow.ValueTargetDropDown[(int)eDropDownTarget.C]) {
                GpioBIdr |= 0x00000001;
            }
            else {
                GpioBIdr &= ~0x00000001u;
            }
            WrapperEmbRegister.WrapperRegisterWrite(WrapperEmbRegister.PeriperalRegister.GPIOB, 0x10, GpioBIdr);
        }

    }
}