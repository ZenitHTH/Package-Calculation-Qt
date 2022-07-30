#ifndef PACKAGECALCULATION_H
#define PACKAGECALCULATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PackageCalculation; }
QT_END_NAMESPACE

class PackageCalculation : public QMainWindow
{
    Q_OBJECT

public:
    PackageCalculation(QWidget *parent = nullptr);
    ~PackageCalculation();

private slots:
    void on_SG_Submit_clicked();

    void on_SG_Reset_clicked();

    void on_OXA_Submit_clicked();

    void on_OXA_Reset_clicked();

private:
    Ui::PackageCalculation *ui;
};
#endif // PACKAGECALCULATION_H
