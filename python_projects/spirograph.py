#Creating Spirograph in python
import random
import turtle as t
rocky = t.Turtle()
t.colormode(255)

def random_color():
    r = random.randint(0, 255)
    g = random.randint(0, 255)
    b = random.randint(0, 255)
    color = (r, g, b)
    return color

rocky.speed("fastest")
rocky.pensize(3)

def spirograph(size):
    for _ in range(int(360 / size)):
        rocky.color(random_color())
        rocky.circle(100)
        rocky.setheading(rocky.heading() + size)
spirograph(5)
screen = t.Screen()
screen.exitonclick()