/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "textedit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionNew_File;
    QAction *actionSave;
    QAction *actionIDE_Shell;
    QAction *actiondcrypt_Shell;
    QAction *actionnmap_ShellCode;
    QAction *actionfuzz3r;
    QAction *actionbin_sh_by_AFANX;
    QAction *actionbin_sh_by_zbt;
    QAction *actionReverse_Shell_by_RusselWills;
    QAction *actioncat_etc_password_by_AFANX;
    QAction *actionshutdown_by_Keyman;
    QAction *actionreboot_by_zbt;
    QAction *actionadd_user_with_pass_by_0_o;
    QAction *actionNOP_TRACE_DWORD;
    QAction *actionNULL_TRACE_DWORD;
    QAction *actionAbout_build;
    QAction *actionOpen_2;
    QAction *actionDecompile;
    QAction *actionShellcode2Bin;
    QAction *actionDecompile_2;
    QAction *actionOpen_File_to_Inject;
    QWidget *centralwidget;
    QGroupBox *craft_box;
    QVBoxLayout *verticalLayout_6;
    TextEdit *textEdit;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QTextEdit *textEdit_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *size;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_9;
    QPlainTextEdit *plainTextEdit_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *byte_2;
    QPushButton *byte_button;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *word;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_14;
    QPlainTextEdit *plainTextEdit_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logotype;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_20;
    QLabel *label_8;
    QListWidget *listWidget;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QMenuBar *menubar;
    QMenu *menuLinux_templates;
    QMenu *menuAbout;
    QMenu *menuFile;
    QMenu *menuTool;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1217, 822);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName(QStringLiteral("actionNew_File"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionIDE_Shell = new QAction(MainWindow);
        actionIDE_Shell->setObjectName(QStringLiteral("actionIDE_Shell"));
        actiondcrypt_Shell = new QAction(MainWindow);
        actiondcrypt_Shell->setObjectName(QStringLiteral("actiondcrypt_Shell"));
        actionnmap_ShellCode = new QAction(MainWindow);
        actionnmap_ShellCode->setObjectName(QStringLiteral("actionnmap_ShellCode"));
        actionfuzz3r = new QAction(MainWindow);
        actionfuzz3r->setObjectName(QStringLiteral("actionfuzz3r"));
        actionbin_sh_by_AFANX = new QAction(MainWindow);
        actionbin_sh_by_AFANX->setObjectName(QStringLiteral("actionbin_sh_by_AFANX"));
        actionbin_sh_by_zbt = new QAction(MainWindow);
        actionbin_sh_by_zbt->setObjectName(QStringLiteral("actionbin_sh_by_zbt"));
        actionReverse_Shell_by_RusselWills = new QAction(MainWindow);
        actionReverse_Shell_by_RusselWills->setObjectName(QStringLiteral("actionReverse_Shell_by_RusselWills"));
        actioncat_etc_password_by_AFANX = new QAction(MainWindow);
        actioncat_etc_password_by_AFANX->setObjectName(QStringLiteral("actioncat_etc_password_by_AFANX"));
        actionshutdown_by_Keyman = new QAction(MainWindow);
        actionshutdown_by_Keyman->setObjectName(QStringLiteral("actionshutdown_by_Keyman"));
        actionreboot_by_zbt = new QAction(MainWindow);
        actionreboot_by_zbt->setObjectName(QStringLiteral("actionreboot_by_zbt"));
        actionadd_user_with_pass_by_0_o = new QAction(MainWindow);
        actionadd_user_with_pass_by_0_o->setObjectName(QStringLiteral("actionadd_user_with_pass_by_0_o"));
        actionNOP_TRACE_DWORD = new QAction(MainWindow);
        actionNOP_TRACE_DWORD->setObjectName(QStringLiteral("actionNOP_TRACE_DWORD"));
        actionNULL_TRACE_DWORD = new QAction(MainWindow);
        actionNULL_TRACE_DWORD->setObjectName(QStringLiteral("actionNULL_TRACE_DWORD"));
        actionAbout_build = new QAction(MainWindow);
        actionAbout_build->setObjectName(QStringLiteral("actionAbout_build"));
        actionOpen_2 = new QAction(MainWindow);
        actionOpen_2->setObjectName(QStringLiteral("actionOpen_2"));
        actionDecompile = new QAction(MainWindow);
        actionDecompile->setObjectName(QStringLiteral("actionDecompile"));
        actionShellcode2Bin = new QAction(MainWindow);
        actionShellcode2Bin->setObjectName(QStringLiteral("actionShellcode2Bin"));
        actionDecompile_2 = new QAction(MainWindow);
        actionDecompile_2->setObjectName(QStringLiteral("actionDecompile_2"));
        actionOpen_File_to_Inject = new QAction(MainWindow);
        actionOpen_File_to_Inject->setObjectName(QStringLiteral("actionOpen_File_to_Inject"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        craft_box = new QGroupBox(centralwidget);
        craft_box->setObjectName(QStringLiteral("craft_box"));
        craft_box->setGeometry(QRect(200, -15, 1001, 101));
        verticalLayout_6 = new QVBoxLayout(craft_box);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        textEdit = new TextEdit(craft_box);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_6->addWidget(textEdit);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(200, 90, 1001, 611));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 20, 551, 161));
        verticalLayout_7 = new QVBoxLayout(groupBox_2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        textEdit_2 = new QTextEdit(groupBox_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setPlaceholderText(QStringLiteral("shellcode: \\x48\\x31\\xC0"));

        verticalLayout_7->addWidget(textEdit_2);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(570, 20, 421, 101));
        verticalLayout_10 = new QVBoxLayout(groupBox_3);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        lineEdit_4 = new QLineEdit(groupBox_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_7->addWidget(lineEdit_4);


        verticalLayout_10->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);

        lineEdit_5 = new QLineEdit(groupBox_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_8->addWidget(lineEdit_5);


        verticalLayout_10->addLayout(horizontalLayout_8);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 185, 551, 61));
        verticalLayout_8 = new QVBoxLayout(groupBox_5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(groupBox_5);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        size = new QLineEdit(groupBox_5);
        size->setObjectName(QStringLiteral("size"));

        horizontalLayout_3->addWidget(size);


        verticalLayout_8->addLayout(horizontalLayout_3);

        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 250, 551, 351));
        verticalLayout_12 = new QVBoxLayout(groupBox_6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        plainTextEdit_2 = new QPlainTextEdit(groupBox_6);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));

        verticalLayout_9->addWidget(plainTextEdit_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        lineEdit_3 = new QLineEdit(groupBox_6);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);


        verticalLayout_9->addLayout(horizontalLayout_5);


        verticalLayout_12->addLayout(verticalLayout_9);

        groupBox_7 = new QGroupBox(groupBox);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(570, 126, 421, 121));
        verticalLayout_13 = new QVBoxLayout(groupBox_7);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(groupBox_7);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        byte_2 = new QLineEdit(groupBox_7);
        byte_2->setObjectName(QStringLiteral("byte_2"));

        horizontalLayout_4->addWidget(byte_2);

        byte_button = new QPushButton(groupBox_7);
        byte_button->setObjectName(QStringLiteral("byte_button"));

        horizontalLayout_4->addWidget(byte_button);


        verticalLayout_11->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(groupBox_7);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        word = new QLineEdit(groupBox_7);
        word->setObjectName(QStringLiteral("word"));

        horizontalLayout_6->addWidget(word);

        pushButton = new QPushButton(groupBox_7);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout_11->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_7 = new QLabel(groupBox_7);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_9->addWidget(label_7);

        lineEdit_6 = new QLineEdit(groupBox_7);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_9->addWidget(lineEdit_6);

        pushButton_2 = new QPushButton(groupBox_7);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_9->addWidget(pushButton_2);


        verticalLayout_11->addLayout(horizontalLayout_9);


        verticalLayout_13->addLayout(verticalLayout_11);

        groupBox_9 = new QGroupBox(groupBox);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(570, 250, 421, 351));
        verticalLayout_14 = new QVBoxLayout(groupBox_9);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        plainTextEdit_3 = new QPlainTextEdit(groupBox_9);
        plainTextEdit_3->setObjectName(QStringLiteral("plainTextEdit_3"));
        plainTextEdit_3->setPlaceholderText(QStringLiteral("STACK"));

        verticalLayout_14->addWidget(plainTextEdit_3);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        logotype = new QLabel(centralwidget);
        logotype->setObjectName(QStringLiteral("logotype"));
        logotype->setGeometry(QRect(6, 20, 190, 41));
        logotype->setStyleSheet(QStringLiteral("font: 24pt \"Nekst\";"));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(7, 498, 183, 61));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        QFont font;
        font.setFamily(QStringLiteral("Courier New"));
        label_20->setFont(font);

        verticalLayout_3->addWidget(label_20);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(8, 560, 166, 131));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 710, 1191, 61));
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 250, 181, 54));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 86, 131, 21));
        label_9->setStyleSheet(QStringLiteral("font: 15pt \"Nekst\";"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 170, 151, 16));
        label_10->setStyleSheet(QStringLiteral("font: 15pt \"Nekst\";"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(5, 210, 191, 16));
        label_11->setStyleSheet(QStringLiteral("font: 14pt \"Nekst\";"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 130, 161, 21));
        label_12->setStyleSheet(QStringLiteral("font: 15pt \"Nekst\";"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 320, 171, 171));
        MainWindow->setCentralWidget(centralwidget);
        layoutWidget->raise();
        groupBox_4->raise();
        craft_box->raise();
        groupBox->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        logotype->raise();
        label_8->raise();
        listWidget->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1217, 20));
        menubar->setStyleSheet(QStringLiteral("background-color: rgb(218, 218, 218);"));
        menuLinux_templates = new QMenu(menubar);
        menuLinux_templates->setObjectName(QStringLiteral("menuLinux_templates"));
        menuLinux_templates->setStyleSheet(QStringLiteral("selection-background-color: rgb(85, 85, 255);"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuAbout->setStyleSheet(QStringLiteral("selection-background-color: rgb(85, 85, 255);"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setStyleSheet(QStringLiteral("selection-background-color: rgb(85, 85, 255);"));
        menuTool = new QMenu(menubar);
        menuTool->setObjectName(QStringLiteral("menuTool"));
        menuTool->setStyleSheet(QStringLiteral("selection-background-color: rgb(85, 85, 255);"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuTool->menuAction());
        menubar->addAction(menuLinux_templates->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuLinux_templates->addAction(actionbin_sh_by_zbt);
        menuLinux_templates->addAction(actionReverse_Shell_by_RusselWills);
        menuLinux_templates->addAction(actionshutdown_by_Keyman);
        menuLinux_templates->addAction(actionreboot_by_zbt);
        menuLinux_templates->addAction(actionadd_user_with_pass_by_0_o);
        menuAbout->addAction(actionAbout_build);
        menuFile->addAction(actionOpen_2);
        menuFile->addAction(actionOpen_File_to_Inject);
        menuTool->addAction(actionDecompile);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "KillerQueen by AP Security", 0));
#ifndef QT_NO_STATUSTIP
        MainWindow->setStatusTip(QApplication::translate("MainWindow", "KillerQueen build 16082023 by AP Security", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        MainWindow->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionNew_File->setText(QApplication::translate("MainWindow", "New File", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionIDE_Shell->setText(QApplication::translate("MainWindow", "IDE Shell", 0));
        actiondcrypt_Shell->setText(QApplication::translate("MainWindow", "asm/disasm ShellCode", 0));
        actionnmap_ShellCode->setText(QApplication::translate("MainWindow", "nmap ShellCode", 0));
        actionfuzz3r->setText(QApplication::translate("MainWindow", "fuzz3r", 0));
        actionbin_sh_by_AFANX->setText(QApplication::translate("MainWindow", "bin_sh by AFANX", 0));
        actionbin_sh_by_zbt->setText(QApplication::translate("MainWindow", "bin_sh shellcode", 0));
        actionReverse_Shell_by_RusselWills->setText(QApplication::translate("MainWindow", "Reverse Shell shellcode", 0));
        actioncat_etc_password_by_AFANX->setText(QApplication::translate("MainWindow", "cat_etc_password by AFANX", 0));
        actionshutdown_by_Keyman->setText(QApplication::translate("MainWindow", "shutdown shellcode", 0));
        actionreboot_by_zbt->setText(QApplication::translate("MainWindow", "reboot shellcode", 0));
        actionadd_user_with_pass_by_0_o->setText(QApplication::translate("MainWindow", "add user with pass shellcode", 0));
        actionNOP_TRACE_DWORD->setText(QApplication::translate("MainWindow", "NOP TRACE DWORD", 0));
        actionNULL_TRACE_DWORD->setText(QApplication::translate("MainWindow", "NULL TRACE DWORD", 0));
        actionAbout_build->setText(QApplication::translate("MainWindow", "About build", 0));
        actionOpen_2->setText(QApplication::translate("MainWindow", "Open", 0));
        actionDecompile->setText(QApplication::translate("MainWindow", "ELFInject", 0));
        actionShellcode2Bin->setText(QApplication::translate("MainWindow", "Shellcode2Bin", 0));
        actionDecompile_2->setText(QApplication::translate("MainWindow", "Decompile", 0));
        actionOpen_File_to_Inject->setText(QApplication::translate("MainWindow", "Open File to Inject ", 0));
        craft_box->setTitle(QString());
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", 0));
        textEdit->setPlaceholderText(QApplication::translate("MainWindow", "enter your bytes: 48 31 C0", 0));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
        label_5->setText(QApplication::translate("MainWindow", "little-endian", 0));
        label_6->setText(QApplication::translate("MainWindow", "big-endian", 0));
        groupBox_5->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "SIZE:", 0));
        groupBox_6->setTitle(QString());
        plainTextEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "FAIL-BYTES: 00 0A FF 0D", 0));
        label_3->setText(QApplication::translate("MainWindow", "FAIL-BYTES", 0));
        groupBox_7->setTitle(QString());
        label_2->setText(QApplication::translate("MainWindow", "BYTE", 0));
        byte_2->setText(QString());
        byte_2->setPlaceholderText(QApplication::translate("MainWindow", "00", 0));
        byte_button->setText(QApplication::translate("MainWindow", "ADD", 0));
        label_4->setText(QApplication::translate("MainWindow", "WORD", 0));
        word->setPlaceholderText(QApplication::translate("MainWindow", "00 00", 0));
        pushButton->setText(QApplication::translate("MainWindow", "ADD", 0));
        label_7->setText(QApplication::translate("MainWindow", "DWORD", 0));
        lineEdit_6->setPlaceholderText(QApplication::translate("MainWindow", "00 00 00 00", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "ADD", 0));
        groupBox_9->setTitle(QString());
        plainTextEdit_3->setPlainText(QString());
        logotype->setText(QApplication::translate("MainWindow", "AP Security", 0));
        groupBox_4->setTitle(QString());
        label_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"justify\"><span style=\" font-weight:600;\">it wasn't for nothing!</span></p></body></html>", 0));
        label_8->setText(QApplication::translate("MainWindow", "F1 - About\n"
"F2 - Add to stack Byte\n"
"F3 - Add to stack Word\n"
"F4 - Add to stack DWord\n"
"F6 - Add to stack ShellCode\n"
"F7 - Clean up Forms\n"
"F8 - Build ShellCode", 0));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Opened File", 0));
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "Inject File", 0));
        label_9->setText(QApplication::translate("MainWindow", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\270\321\217 ", 0));
        label_10->setText(QApplication::translate("MainWindow", "\321\202\320\265\321\205\320\275\320\276\320\273\320\276\320\263\320\270\320\271 \320\270", 0));
        label_11->setText(QApplication::translate("MainWindow", "\320\272\320\270\320\261\320\265\321\200\320\261\320\265\320\267\320\276\320\277\320\260\321\201\320\275\320\276\321\201\321\202\320\270", 0));
        label_12->setText(QApplication::translate("MainWindow", "\320\270\320\275\320\275\320\276\320\262\320\260\321\206\320\270\320\276\320\275\320\275\321\213\321\205", 0));
        label_13->setText(QApplication::translate("MainWindow", "apsec", 0));
        menuLinux_templates->setTitle(QApplication::translate("MainWindow", "Linux templates", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuTool->setTitle(QApplication::translate("MainWindow", "Tools", 0));
#ifndef QT_NO_STATUSTIP
        statusbar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
