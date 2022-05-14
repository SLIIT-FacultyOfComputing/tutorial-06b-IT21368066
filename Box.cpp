#include "Box.h"

// Implement setters and getters
void Box::setLength(int length )
{
  len=length;
}
void Box::setWidth(int width)
{
  wid=width;
}
void Box::setHeight(int height)
{
  hei=height;
}
int Box::getLength()
{
  return len;
}
int Box::getWidth()
{
  return wid;
}
int Box::getHeight()
{
  return hei;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
   return hei*wid*len;
}
