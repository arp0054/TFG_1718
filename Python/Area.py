import sys
import math
from Punto import Punto

class Area:
    limites=list()
    def __init__(self):
        self.limites=list()
    
    def setLimites(self):
        i=1
        while(len(self.limites)<4):
            imput=Punto()
            intr=input('intriduce coordenada X e Y separadas por "," '+str(i)+':').split(',')
            if len(intr) != 2:
                print('Error al intriducir coordenadas')
                while (len(intr) != 2):
                    intr=input('intriduce coordenada X e Y separadas por "," '+str(i)+':').split(',')
            imput.setX(intr[0])
            imput.setY(intr[1])
            i=i+1
            self.limites.append(imput)
        print('\n')
    
    def getLimites(self):
        return self.limites
    
    def hayObjeto(self,puntos):
        cx=list()
        cy=list()
        for p in self.limites:
            cx.append(float(p.getX()))
            cy.append(float(p.getY()))
        for dato in puntos:
            if min(cx)<dato.getX() and dato.getX() < max(cx):
                if min(cy)<dato.getY() and dato.getY() < max(cy):
                    return True
                    break
        return False
                    