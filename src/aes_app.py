import sys
import time
import subprocess
from PyQt5.QtWidgets import QApplication, QMainWindow, QFileDialog, QListWidget, QListWidgetItem, QLabel 
from PyQt5.QtCore import pyqtSignal, pyqtSlot, QTimer
from aes_app_ui import Ui_MainWindow as Ui


class AesWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.ui = Ui()
        self.ui.setupUi(self)

        self.timer = QTimer()
        self.timer.setInterval(100)
        
        self.executable = "/Users/Cjame/Documents/ECE-1895-Junior-Design-Project/src/aes_cuda.exe" # path to executable predefined
        self.input_bmp = None # path to input image


        self.mode = None # selected encryption or decryption mode to be used
        self.encrypt = True # True if encryption False if decryption
        self.key_hex = None # key input by user
        self.iv_hex = None # initialization vector input by user
        self.elapsed_time = None
        
        self.timer.timeout.connect(self.update) # connect signals to slots
        self.ui.run_button.clicked.connect(self.run)
        self.ui.import_button.clicked.connect(self.handle_import_image)
        self.ui.select_mode_list.currentTextChanged.connect(self.handle_mode_selection)
        self.ui.e_or_d_confirm.clicked.connect(self.handle_encrypt_confirm)
        self.ui.key_confirm.clicked.connect(self.handle_key_confirm)
        self.ui.iv_confirm.clicked.connect(self.handle_iv_confirm)
        

        self.timer.start()

    @pyqtSlot()       
    def update(self):
        if self.elapsed_time != None:
            self.ui.value_label.setText(str(self.elapsed_time))
    
    @pyqtSlot()
    def handle_import_image(self):
        self.input_bmp, _ = QFileDialog.getOpenFileName(self, "Select BMP Image", "", "BMP File (*.bmp)")


    @pyqtSlot(str)
    def handle_mode_selection(self, mode):
        self.mode = mode

    @pyqtSlot()
    def handle_encrypt_confirm(self):
        if self.ui.e_or_d_box.currentIndex() == 0:
            self.encrypt = True
        else:
            self.encrypt = False
    
    @pyqtSlot()
    def handle_key_confirm(self):
        self.key_hex = self.ui.key_edit.text()

    @pyqtSlot()
    def handle_iv_confirm(self):
        self.iv_hex = self.ui.iv_edit.text()

    @pyqtSlot()
    def run(self):
        if self.executable != None and self.input_bmp != None and self.mode != None: 
            if self.key_hex == None or self.key_hex == "":
                key = "00000000000000000000000000000000"
            else:
                key = self.key_hex
            
            if self.iv_hex == None or self.iv_hex == "":
                iv = "00000000000000000000000000000000"
            else:
                iv = self.iv_hex


            output_bmp = "src/images/" + self.mode + "_encrypt.bmp" if self.encrypt else "src/images/" + self.mode + "_decrypt.bmp"
            encrypt_str = "encrypt" if self.encrypt else "decrypt"
            args = [self.executable, encrypt_str, self.input_bmp, output_bmp, key, self.mode, iv]

            start_time = time.time()
    
            result = subprocess.run(args, capture_output=True, text=True)

            end_time = time.time()

            self.elapsed_time = end_time - start_time

            # Check result
            print("STDOUT:\n", result.stdout)
            print("STDERR:\n", result.stderr)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    main_window = AesWindow()
    main_window.show()
    sys.exit(app.exec_())