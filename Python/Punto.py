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
    
    def tradurcirAPolares(self,x,y):
        c1=math.sqrt(x*x+y*y)
        c2=0
        if x == 0:
            if y > 0:
                c2=90
            elif y < 0:
                c2=270
        elif x > 0:
            if y > 0:
                c2= math.atan(y/x)
            elif y < 0:
                c2=360-math.atan(y/x)
        else:
            if y > 0:
                c2= 180- math.atan(y/x)
            elif y < 0:
                c2=180+math.atan(y/x)
            else:
                c2=270
        return [c1,c2]