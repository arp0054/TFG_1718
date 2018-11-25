{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 1,
   "metadata": {},
   "outputs": [],
   "source": [
    "import sys\n",
    "import math"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 2,
   "metadata": {},
   "outputs": [],
   "source": [
    "class Punto:\n",
    "    x=0.0\n",
    "    y=0.0\n",
    "    \n",
    "    def __init__(self,_x=0.0,_y=0.0):\n",
    "        x = _x\n",
    "        y = _y\n",
    "    \n",
    "    def getX(self):\n",
    "        return x\n",
    "    \n",
    "    def getY(self):\n",
    "        return y\n",
    "    \n",
    "    def setX(self,valX):\n",
    "        x=valX\n",
    "    \n",
    "    def setY(self,valY):\n",
    "        y=valY\n",
    "    \n",
    "    def tradurcirAPolares(self,valX,valY):\n",
    "        c1=math.sqrt(x*x+y*y)\n",
    "        c2=0\n",
    "\n",
    "        if x > 0:\n",
    "            if y >= 0:\n",
    "                c2=math.atan(y/x)\n",
    "            else:\n",
    "                c2=math.atan(y/x)+2*math.pi\n",
    "        elif x == 0:\n",
    "            if y > 0:\n",
    "                c2= math.pi/2\n",
    "            if y < 0:\n",
    "                c2= 3*math.pi/2\n",
    "            if y == 0:\n",
    "                c2=0\n",
    "        elif x < 0:\n",
    "            c2=math.atan(y/x)+math.pi\n",
    "        return [c1,c2]"
   ]
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.6.4"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 2
}
