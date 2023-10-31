#include "LandlordManagementSystem.h"
#include <iostream>

LandlordManagementSystem::LandlordManagementSystem(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    loadBusiness();
}

LandlordManagementSystem::~LandlordManagementSystem()
{
}

//Function to load an existing business or create a new one
void LandlordManagementSystem::loadBusiness()
{
    QString path = QDir::currentPath() + QDir::separator() + "lmsdata.txt";
    
    // If file cannot be loaded or created then exit
    if (!loadFile(path)) {
        std::cout << "File could not be loaded or created" << std::endl;
        return;
    }
}

//Function to be used if no existing file
bool LandlordManagementSystem::createFile(QString path)
{
    QFile file(path);
    if (!file.open(QIODevice::WriteOnly)) {
        qWarning() << file.errorString();
        return false;
    }

    //File is open
    QDataStream stream(&file);

    //Write new data to file

    file.close();
    return true;
}

bool LandlordManagementSystem::loadFile(QString path)
{
    if (!QFile::exists(path))
        createFile(path);

    return true;
}

void LandlordManagementSystem::on_nextPage_btn_clicked() {

}
