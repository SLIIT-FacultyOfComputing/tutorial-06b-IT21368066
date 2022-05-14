#include "Box.h"

// Implement setters and getters
void setLength(int length )
{
  length=length;
}
void setWidth(int width)
{
  width=width;
}
void setHeight(int height)
{
  height=height;
}
int getLength()
{
  return length
}
int getWidth()
{
  return width;
}
int getHeight()
{
  return height;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
   return height*width*length;
}
