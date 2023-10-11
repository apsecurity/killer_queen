/********************************************************************************
** Form generated from reading UI file 'about_build.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_BUILD_H
#define UI_ABOUT_BUILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_about_build
{
public:
    QLabel *logotype;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QTextBrowser *textBrowser_2;
    QLabel *label_4;

    void setupUi(QDialog *about_build)
    {
        if (about_build->objectName().isEmpty())
            about_build->setObjectName(QStringLiteral("about_build"));
        about_build->resize(439, 582);
        about_build->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        logotype = new QLabel(about_build);
        logotype->setObjectName(QStringLiteral("logotype"));
        logotype->setGeometry(QRect(30, 10, 371, 131));
        label = new QLabel(about_build);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 182, 291, 20));
        QFont font;
        font.setFamily(QStringLiteral("Nekst"));
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("font: 15pt \"Nekst\";"));
        textBrowser = new QTextBrowser(about_build);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 240, 421, 192));
        QFont font1;
        font1.setFamily(QStringLiteral("Montserrat"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        textBrowser->setFont(font1);
        textBrowser->setStyleSheet(QStringLiteral("font: 75 9pt \"Montserrat\";"));
        label_3 = new QLabel(about_build);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(11, 217, 121, 17));
        QFont font2;
        font2.setFamily(QStringLiteral("Nekst"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("font: 12pt \"Nekst\";"));
        textBrowser_2 = new QTextBrowser(about_build);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 460, 421, 111));
        QFont font3;
        font3.setFamily(QStringLiteral("Courier New"));
        textBrowser_2->setFont(font3);
        label_4 = new QLabel(about_build);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(12, 440, 111, 17));
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("font: 12pt \"Nekst\";"));

        retranslateUi(about_build);

        QMetaObject::connectSlotsByName(about_build);
    } // setupUi

    void retranslateUi(QDialog *about_build)
    {
        about_build->setWindowTitle(QApplication::translate("about_build", "About", 0));
        logotype->setText(QString());
        label->setText(QApplication::translate("about_build", "KillerQueen build 16082023", 0));
        textBrowser->setHtml(QApplication::translate("about_build", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Montserrat'; font-size:9pt; font-weight:72; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:7.8pt; font-weight:400;\">This program is designed for shellcode construction. To build a shellcode it is enough to have bytes of the compiled program written in Assembler language. </span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New'; font-size:7.8pt; font-weight:400;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:"
                        "0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:7.8pt; font-weight:400;\">This program will give you the shellcode if you gave bytes. The result will show the length of the shellcode, the wrong bytes, their position and the number of fail bytes. If a string was fed, it will give you the result in little-end and big-end format. There is also a field for payload construct. You can also put BYTE, WORD, DWORD in the payload. </span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New'; font-size:7.8pt; font-weight:400;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:7.8pt; font-weight:400;\">In KillerQueen, you can write shellcodes in "
                        "Assembly language and the result will be a HEX string that can be translated into shellcode. There is also a reverse operation. If you have a shellcode, you can translate it into Assembler language.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New'; font-size:7.8pt; font-weight:400;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:7.8pt; font-weight:400;\">KillerQueen has a small database of ready-made shellcodes for Linux.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New'; font-size:7.8pt; font-weight:400;\"><br /></p>\n"
"<p align=\"justify\" style=\" "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:7.8pt; font-weight:400;\">KillerQueen can inject shellcode into binary.</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("about_build", "About program", 0));
        textBrowser_2->setHtml(QApplication::translate("about_build", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier New'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">- The hotkeys work</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">- Shellcode construction is working</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">- Field with erroneous bytes</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">- Translation in little-end and big-end works</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">- Working fields for BYTE, WORD, DWORD</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">-   Stack is working with some bugs</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">-   Opening compiled files with shellcodes</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">-   Inject shellcode into bin"
                        "ary</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("about_build", "About build", 0));
    } // retranslateUi

};

namespace Ui {
    class about_build: public Ui_about_build {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_BUILD_H
