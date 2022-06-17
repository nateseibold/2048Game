#include "gamegrid.h"
#include "ui_gamegrid.h"

GameGrid::GameGrid(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameGrid)
{
    ui->setupUi(this);
}

GameGrid::~GameGrid()
{
    delete ui;
}

void GameGrid::drawGrid()
{
    grid.clear();
    int rectSize = this->width() / size;
    pixelSize = rectSize;
    gridSize = size;

    for(int x = 0; x < rectSize * size; x += rectSize)
    {
        for(int y = 0; y < rectSize * size; y += rectSize)
        {
            grid.push_back(QRect(x, y, rectSize, rectSize));
        }
    }

    update();
}
