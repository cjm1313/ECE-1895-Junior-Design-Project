import sys
import os
from pathlib import Path
from PyQt5.QtWidgets import QApplication, QMainWindow, QFileDialog, QListWidget, QListWidgetItem, QLabel 
from PyQt5.QtCore import pyqtSignal, pyqtSlot, QTimer
from aes_app_ui import Ui_MainWindow as Ui


class AesWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.ui = Ui()
        self.ui.setupUi(self)




if __name__ == "__main__":
    app = QApplication(sys.argv)
    main_window = AesWindow()
    main_window.show()
    sys.exit(app.exec_())