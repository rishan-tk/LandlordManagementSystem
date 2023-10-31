#pragma once

#include <QtWidgets/QMainWindow>
#include <qdatastream.h>
#include <qdebug.h>
#include <qfile.h>
#include <qdir.h>
#include <qfileinfo.h>
#include "ui_LandlordManagementSystem.h"

class LandlordManagementSystem : public QMainWindow
{
    Q_OBJECT

public:
    LandlordManagementSystem(QWidget *parent = nullptr);
    ~LandlordManagementSystem();
    
    void loadBusiness();

private:
    Ui::LMS ui;
    bool createFile(QString path);
    bool loadFile(QString path);

private slots:
    void on_nextPage_btn_clicked();

};
