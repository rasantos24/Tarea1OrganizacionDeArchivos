#ifndef TAREA1_H
#define TAREA1_H

#include <QMainWindow>

namespace Ui {
class Tarea1;
}

class Tarea1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tarea1(QWidget *parent = 0);
    ~Tarea1();

private:
    Ui::Tarea1 *ui;
};

#endif // TAREA1_H
