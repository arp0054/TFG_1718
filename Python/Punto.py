import sys
import math

class Punto:
    x=0
    y=0
    
    def __init__(self,_x=0.0,_y=0.0):
        self.x = _x
        self.y = _y
    
    def getX(self):
        return self.x
    
    def getY(self):
        return self.y
    
    def setX(self,valX):
        self.x=valX
    
    def setY(self,valY):
        self.y=valY
    
    def tradurcirAPolares(self,valX,valY):
        c1=math.sqrt(x*x+y*y)
        c2=0
        if x > 0:
            if y >= 0:
                c2=math.atan(y/x)
            else:
                c2=math.atan(y/x)+2*math.pi
        elif x == 0:
            if y > 0:
                c2= math.pi/2
            if y < 0:
                c2= 3*math.pi/2
            if y == 0:
                c2=0
        elif x < 0:
            c2=math.atan(y/x)+math.pi
        return [c1,c2]