#include "acquisitionview.h"
#include "ui_acquisitionview.h"

AcquisitionView::AcquisitionView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AcquisitionView)
{
    ui->setupUi(this);

    ui->widget->setModelReference(Models::pcs);
}

AcquisitionView::~AcquisitionView()
{
    delete ui;
}
