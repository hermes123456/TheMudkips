#ifndef NBATEAMS_H
#define NBATEAMS_H

#include <QWidget>

namespace Ui {
class nbaTeams;
}

class nbaTeams : public QWidget
{
    Q_OBJECT

public:
    explicit nbaTeams(QWidget *parent = nullptr);

    ~nbaTeams();

private slots:

    void on_EasternComboBox_activated(const QString &arg1);

    void on_westernComboBox_activated(const QString &arg1);

private:
    Ui::nbaTeams *ui;
};

#endif // NBATEAMS_H
