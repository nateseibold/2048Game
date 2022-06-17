#ifndef GAMEGRID_H
#define GAMEGRID_H

#include <QWidget>
using std::vector;

namespace Ui {
class GameGrid;
}

class GameGrid : public QWidget
{
    Q_OBJECT

public:
    explicit GameGrid(QWidget *parent = nullptr);
    ~GameGrid();
    void drawGrid();

private:
    Ui::GameGrid *ui;
    vector<QRect> grid;
    int pixelSize;
    int size;
    int gridSize;
};

#endif // GAMEGRID_H
