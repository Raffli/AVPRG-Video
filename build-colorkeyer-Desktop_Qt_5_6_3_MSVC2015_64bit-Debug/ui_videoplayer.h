/********************************************************************************
** Form generated from reading UI file 'videoplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPLAYER_H
#define UI_VIDEOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "videowidget.h"

QT_BEGIN_NAMESPACE

class Ui_VideoPlayer
{
public:
    QWidget *centralWidget;
    VideoWidget *inputFrame;
    QPushButton *openVideoFileButton;
    QPushButton *playButton;
    VideoWidget *processedFrame;
    QSlider *hueSlider;
    QLabel *label;
    QLabel *labelHue;
    QLabel *labelHueTolerance;
    QSlider *hueTolerance;
    QLabel *label_4;
    QSlider *saturationSlider;
    QLabel *label_5;
    QLabel *labelSaturation;

    void setupUi(QMainWindow *VideoPlayer)
    {
        if (VideoPlayer->objectName().isEmpty())
            VideoPlayer->setObjectName(QStringLiteral("VideoPlayer"));
        VideoPlayer->resize(639, 402);
        centralWidget = new QWidget(VideoPlayer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        inputFrame = new VideoWidget(centralWidget);
        inputFrame->setObjectName(QStringLiteral("inputFrame"));
        inputFrame->setGeometry(QRect(40, 30, 261, 171));
        inputFrame->setFrameShape(QFrame::Box);
        inputFrame->setScaledContents(false);
        inputFrame->setAlignment(Qt::AlignCenter);
        openVideoFileButton = new QPushButton(centralWidget);
        openVideoFileButton->setObjectName(QStringLiteral("openVideoFileButton"));
        openVideoFileButton->setGeometry(QRect(40, 230, 101, 23));
        playButton = new QPushButton(centralWidget);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setGeometry(QRect(230, 230, 75, 23));
        processedFrame = new VideoWidget(centralWidget);
        processedFrame->setObjectName(QStringLiteral("processedFrame"));
        processedFrame->setGeometry(QRect(350, 30, 261, 171));
        processedFrame->setFrameShape(QFrame::Box);
        processedFrame->setAlignment(Qt::AlignCenter);
        hueSlider = new QSlider(centralWidget);
        hueSlider->setObjectName(QStringLiteral("hueSlider"));
        hueSlider->setGeometry(QRect(420, 240, 160, 22));
        hueSlider->setMaximum(360);
        hueSlider->setValue(350);
        hueSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 240, 46, 13));
        labelHue = new QLabel(centralWidget);
        labelHue->setObjectName(QStringLiteral("labelHue"));
        labelHue->setGeometry(QRect(600, 240, 46, 13));
        labelHueTolerance = new QLabel(centralWidget);
        labelHueTolerance->setObjectName(QStringLiteral("labelHueTolerance"));
        labelHueTolerance->setGeometry(QRect(600, 280, 46, 13));
        hueTolerance = new QSlider(centralWidget);
        hueTolerance->setObjectName(QStringLiteral("hueTolerance"));
        hueTolerance->setGeometry(QRect(420, 280, 160, 22));
        hueTolerance->setMaximum(30);
        hueTolerance->setValue(3);
        hueTolerance->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 280, 46, 13));
        saturationSlider = new QSlider(centralWidget);
        saturationSlider->setObjectName(QStringLiteral("saturationSlider"));
        saturationSlider->setGeometry(QRect(420, 320, 160, 22));
        saturationSlider->setMaximum(255);
        saturationSlider->setValue(207);
        saturationSlider->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(360, 320, 46, 13));
        labelSaturation = new QLabel(centralWidget);
        labelSaturation->setObjectName(QStringLiteral("labelSaturation"));
        labelSaturation->setGeometry(QRect(600, 320, 46, 13));
        VideoPlayer->setCentralWidget(centralWidget);

        retranslateUi(VideoPlayer);

        QMetaObject::connectSlotsByName(VideoPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *VideoPlayer)
    {
        VideoPlayer->setWindowTitle(QApplication::translate("VideoPlayer", "VideoPlayer", Q_NULLPTR));
        inputFrame->setText(QString());
        openVideoFileButton->setText(QApplication::translate("VideoPlayer", "Open Video File...", Q_NULLPTR));
        playButton->setText(QApplication::translate("VideoPlayer", "Play", Q_NULLPTR));
        processedFrame->setText(QString());
        label->setText(QApplication::translate("VideoPlayer", "Hue", Q_NULLPTR));
        labelHue->setText(QApplication::translate("VideoPlayer", "0", Q_NULLPTR));
        labelHueTolerance->setText(QApplication::translate("VideoPlayer", "0", Q_NULLPTR));
        label_4->setText(QApplication::translate("VideoPlayer", "Tolerance", Q_NULLPTR));
        label_5->setText(QApplication::translate("VideoPlayer", "Saturation", Q_NULLPTR));
        labelSaturation->setText(QApplication::translate("VideoPlayer", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VideoPlayer: public Ui_VideoPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPLAYER_H
