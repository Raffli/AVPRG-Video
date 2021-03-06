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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "videowidget.h"

QT_BEGIN_NAMESPACE

class Ui_VideoPlayer
{
public:
    QAction *actionVideodatei_ffnen;
    QAction *actionKamera_ffnen;
    QAction *actionPlay;
    QWidget *centralWidget;
    VideoWidget *inputFrame;
    VideoWidget *processedFrame;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QMenu *menuVideo;
    QMenu *menuPlay;

    void setupUi(QMainWindow *VideoPlayer)
    {
        if (VideoPlayer->objectName().isEmpty())
            VideoPlayer->setObjectName(QStringLiteral("VideoPlayer"));
        VideoPlayer->resize(644, 336);
        actionVideodatei_ffnen = new QAction(VideoPlayer);
        actionVideodatei_ffnen->setObjectName(QStringLiteral("actionVideodatei_ffnen"));
        actionKamera_ffnen = new QAction(VideoPlayer);
        actionKamera_ffnen->setObjectName(QStringLiteral("actionKamera_ffnen"));
        actionPlay = new QAction(VideoPlayer);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        centralWidget = new QWidget(VideoPlayer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        inputFrame = new VideoWidget(centralWidget);
        inputFrame->setObjectName(QStringLiteral("inputFrame"));
        inputFrame->setGeometry(QRect(20, 20, 301, 221));
        inputFrame->setFrameShape(QFrame::Box);
        inputFrame->setScaledContents(false);
        inputFrame->setAlignment(Qt::AlignCenter);
        processedFrame = new VideoWidget(centralWidget);
        processedFrame->setObjectName(QStringLiteral("processedFrame"));
        processedFrame->setGeometry(QRect(330, 20, 301, 221));
        processedFrame->setFrameShape(QFrame::Box);
        processedFrame->setScaledContents(false);
        processedFrame->setAlignment(Qt::AlignCenter);
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(120, 260, 391, 22));
        horizontalSlider->setMaximum(400);
        horizontalSlider->setOrientation(Qt::Horizontal);
        VideoPlayer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VideoPlayer);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 644, 21));
        menuVideo = new QMenu(menuBar);
        menuVideo->setObjectName(QStringLiteral("menuVideo"));
        menuPlay = new QMenu(menuBar);
        menuPlay->setObjectName(QStringLiteral("menuPlay"));
        VideoPlayer->setMenuBar(menuBar);

        menuBar->addAction(menuVideo->menuAction());
        menuBar->addAction(menuPlay->menuAction());
        menuVideo->addAction(actionVideodatei_ffnen);
        menuVideo->addAction(actionKamera_ffnen);
        menuPlay->addAction(actionPlay);

        retranslateUi(VideoPlayer);

        QMetaObject::connectSlotsByName(VideoPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *VideoPlayer)
    {
        VideoPlayer->setWindowTitle(QApplication::translate("VideoPlayer", "VideoPlayer", Q_NULLPTR));
        actionVideodatei_ffnen->setText(QApplication::translate("VideoPlayer", "Videodatei \303\226ffnen ...", Q_NULLPTR));
        actionKamera_ffnen->setText(QApplication::translate("VideoPlayer", "Kamera \303\226ffnen", Q_NULLPTR));
        actionPlay->setText(QApplication::translate("VideoPlayer", "Play", Q_NULLPTR));
        inputFrame->setText(QString());
        processedFrame->setText(QString());
        menuVideo->setTitle(QApplication::translate("VideoPlayer", "Video", Q_NULLPTR));
        menuPlay->setTitle(QApplication::translate("VideoPlayer", "Play", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VideoPlayer: public Ui_VideoPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPLAYER_H
