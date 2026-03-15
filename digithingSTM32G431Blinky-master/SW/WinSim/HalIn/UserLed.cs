using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WinSim {
    public class UserLed {
        const UInt32 USER_LED_BIT_MASK = 0x00000100;
        public enum eUserLedState { USER_LED_OFF, USER_LED_ON };

        public static eUserLedState UserLedGetState() {
            eUserLedState ret;
            if ((Gpio.GpioBOdr & USER_LED_BIT_MASK) == USER_LED_BIT_MASK) {
                ret = eUserLedState.USER_LED_ON;
            }
            else {
                ret = eUserLedState.USER_LED_OFF;
            }
            return ret;
        }
    }
}
