#include "simcameramodel.h"

SimCameraModel::SimCameraModel()
{
}

void SimCameraModel::run()
{
    setChanged();
    notifyObservers();
}

void SimCameraModel::stop()
{
}

cloudPtrType SimCameraModel::getLastAcquisition()
{
    cloudPtrType cloud (new cloudType), cloud_f (new cloudType);
    std::string path = QDir::homePath().toStdString() + "/QRecog/scn.pcd";
    pcl::io::loadPCDFile(path, *cloud);
    return cloud;
}

bool SimCameraModel::isRunning()
{
    return false;
}
