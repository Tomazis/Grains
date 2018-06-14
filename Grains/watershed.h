#ifndef WATERSHED_H
#define WATERSHED_H

#include <QMainWindow>
#include <vector>

#define PIXEL_SIZE 0.265

void wshed(QString path,int color, int color_2, int& quantity, std::vector<double>& lenght, std::vector<double>& width, std::vector<double>& area);

#endif // WATERSHED_H
