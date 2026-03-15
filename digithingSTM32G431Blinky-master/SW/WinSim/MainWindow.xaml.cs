using MicroLibrary;
using System;
using System.Collections.Generic;
using System.IO.Ports;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Threading;

namespace WinSim {
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window {

        protected Thread EmbSimThread;

        public enum eDropDownTarget { C, H, A, M, P};
        public static bool[] ValueTargetDropDown = new bool[5];

        private MicroLibrary.MicroTimer _microTimer1;
        public MainWindow() {
            InitializeComponent();
            StartMicroTimer();
            StartEmbThread();  
        }

        private void StartMicroTimer() {
            const long interval = 5000;
            _microTimer1 = new MicroLibrary.MicroTimer();
            _microTimer1.MicroTimerElapsed +=
            new MicroLibrary.MicroTimer.MicroTimerElapsedEventHandler(Stm32SimulationEvent);
            _microTimer1.Interval = interval;
            _microTimer1.IgnoreEventIfLateBy = interval / 2;
            _microTimer1.Start();
        }

        private void StartEmbThread() {
                EmbSimThread = new Thread(EmbSimCallback);
                EmbSimThread.IsBackground = true;
                EmbSimThread.Start();
            }
        private unsafe void EmbSimCallback() {
            WrapperEmbMain.WrapperMain();
        }

        private void Stm32SimulationEvent(object sender, MicroLibrary.MicroTimerEventArgs timerEventArgs) {
            Gpio.GpioBMain();
            WrapperEmbSysTick.WrapperSysTickInt();
            this.Dispatcher.Invoke(new Action(() => { UpdateView(); }));
        }
        private void UpdateView() {
            if (UserLed.UserLedGetState() == UserLed.eUserLedState.USER_LED_ON) { 
                CheckBoxLed2.IsChecked = true; 
            }
            else {
                CheckBoxLed2.IsChecked = false;
            }

        }
        private void Window_Closing(object sender, System.ComponentModel.CancelEventArgs e) {
            
        }

        private void CheckBoxTarget_Click(object sender, RoutedEventArgs e) {
         CheckBox myCheckBox = (CheckBox)sender;
            int TargetIndex = 255;
            switch (myCheckBox.Name) {
                case "CheckBoxTargetDropDownC":
                    TargetIndex = (int)eDropDownTarget.C; break;
                case "CheckBoxTargetDropDownH":
                    TargetIndex = (int)eDropDownTarget.H; break;
                case "CheckBoxTargetDropDownA":
                    TargetIndex = (int)eDropDownTarget.A; break;
                case "CheckBoxTargetDropDownM":
                    TargetIndex = (int)eDropDownTarget.M; break;
                case "CheckBoxTargetDropDownP":
                    TargetIndex = (int)eDropDownTarget.P; break;
                default: break;
            }

            if (255 != TargetIndex) {
                if (true == myCheckBox.IsChecked) {
                    ValueTargetDropDown[TargetIndex] = true;
                }
                else {
                    ValueTargetDropDown[TargetIndex] = false;
                }
            }
        }
    }
}
