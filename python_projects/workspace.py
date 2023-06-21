from turtle import Turtle, Screen
import time

screen = Screen()
screen.setup(width=600, height=600)
screen.bgcolor("black")
screen.title("SNAKE GAME")
screen.tracer(0)

# create snake body
segment_positions = [(0, 0), (-20, 0), (-40, 0)]
segments = []
for position in segment_positions:
    new_segment = Turtle("square")
    new_segment.color("white")
    new_segment.penup()
    new_segment.goto(position)
    segments.append(new_segment)

game_is_on = True
while game_is_on:
    screen.update()
    time.sleep(0.1)
    #moving segments: [3]->[2]->[1]
    for seg_num in range(len(segments)-1, 0, -1):
        new_x = segments[seg_num - 1].xcor()
        new_y = segments[seg_num - 1].ycor()
        segments[seg_num].goto(new_x, new_y)
    segments[0].forward(20)
    

screen.exitonclick() 
