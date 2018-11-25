{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 9,
   "metadata": {},
   "outputs": [],
   "source": [
    "import sys\n",
    "import math\n",
    "import Punto"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 11,
   "metadata": {},
   "outputs": [
    {
     "ename": "TypeError",
     "evalue": "'module' object is not callable",
     "output_type": "error",
     "traceback": [
      "\u001b[1;31m---------------------------------------------------------------------------\u001b[0m",
      "\u001b[1;31mTypeError\u001b[0m                                 Traceback (most recent call last)",
      "\u001b[1;32m<ipython-input-11-1e0c9af3e96c>\u001b[0m in \u001b[0;36m<module>\u001b[1;34m()\u001b[0m\n\u001b[1;32m----> 1\u001b[1;33m \u001b[1;32mclass\u001b[0m \u001b[0mArea\u001b[0m\u001b[1;33m:\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n\u001b[0m\u001b[0;32m      2\u001b[0m     \u001b[0mlimites\u001b[0m\u001b[1;33m=\u001b[0m \u001b[0mPunto\u001b[0m\u001b[1;33m(\u001b[0m\u001b[1;33m)\u001b[0m\u001b[1;33m[\u001b[0m\u001b[1;36m4\u001b[0m\u001b[1;33m]\u001b[0m\u001b[1;33m;\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n\u001b[0;32m      3\u001b[0m     \u001b[1;32mdef\u001b[0m \u001b[0m__init__\u001b[0m\u001b[1;33m(\u001b[0m\u001b[0mself\u001b[0m\u001b[1;33m,\u001b[0m\u001b[0mvertices\u001b[0m\u001b[1;33m=\u001b[0m \u001b[0mPunto\u001b[0m\u001b[1;33m(\u001b[0m\u001b[1;33m)\u001b[0m\u001b[1;33m[\u001b[0m\u001b[1;36m4\u001b[0m\u001b[1;33m]\u001b[0m\u001b[1;33m)\u001b[0m\u001b[1;33m:\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n\u001b[0;32m      4\u001b[0m         \u001b[0mlimites\u001b[0m\u001b[1;33m=\u001b[0m\u001b[0mvertices\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n\u001b[0;32m      5\u001b[0m \u001b[1;33m\u001b[0m\u001b[0m\n",
      "\u001b[1;32m<ipython-input-11-1e0c9af3e96c>\u001b[0m in \u001b[0;36mArea\u001b[1;34m()\u001b[0m\n\u001b[0;32m      1\u001b[0m \u001b[1;32mclass\u001b[0m \u001b[0mArea\u001b[0m\u001b[1;33m:\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n\u001b[1;32m----> 2\u001b[1;33m     \u001b[0mlimites\u001b[0m\u001b[1;33m=\u001b[0m \u001b[0mPunto\u001b[0m\u001b[1;33m(\u001b[0m\u001b[1;33m)\u001b[0m\u001b[1;33m[\u001b[0m\u001b[1;36m4\u001b[0m\u001b[1;33m]\u001b[0m\u001b[1;33m;\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n\u001b[0m\u001b[0;32m      3\u001b[0m     \u001b[1;32mdef\u001b[0m \u001b[0m__init__\u001b[0m\u001b[1;33m(\u001b[0m\u001b[0mself\u001b[0m\u001b[1;33m,\u001b[0m\u001b[0mvertices\u001b[0m\u001b[1;33m=\u001b[0m \u001b[0mPunto\u001b[0m\u001b[1;33m(\u001b[0m\u001b[1;33m)\u001b[0m\u001b[1;33m[\u001b[0m\u001b[1;36m4\u001b[0m\u001b[1;33m]\u001b[0m\u001b[1;33m)\u001b[0m\u001b[1;33m:\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n\u001b[0;32m      4\u001b[0m         \u001b[0mlimites\u001b[0m\u001b[1;33m=\u001b[0m\u001b[0mvertices\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n\u001b[0;32m      5\u001b[0m \u001b[1;33m\u001b[0m\u001b[0m\n",
      "\u001b[1;31mTypeError\u001b[0m: 'module' object is not callable"
     ]
    }
   ],
   "source": [
    "class Area:\n",
    "    limites= Punto()[4];\n",
    "    def __init__(self,vertices= Punto()[4]):\n",
    "        for \n",
    "        limites=vertices\n",
    "    \n",
    "    def setLimites():\n",
    "        user_input = list()\n",
    "        i=1\n",
    "        while(len(user_input)<4):\n",
    "            imput=Punto()\n",
    "            intr=input('intriduce coordenada X e Y separadas por \",\" '+str(i)+':').split(',')\n",
    "            if len(intr) != 2:\n",
    "                print('Error al intriducir coordenadas')\n",
    "                while (len(intr) != 2):\n",
    "                    intr=input('intriduce coordenada X e Y separadas por \",\" '+str(i)+':').split(',')\n",
    "            imput.setX(intr[0])\n",
    "            imput.setY(intr[1])\n",
    "            i=i+1\n",
    "            user_input.append(imput)\n",
    "        print('\\n')\n",
    "    \n",
    "    def getLimites(self):\n",
    "        return limites"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": []
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
