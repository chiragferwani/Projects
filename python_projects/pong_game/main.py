from turtle import Screen, Turtle
from paddle import Paddle
from ball import Ball
from scoreboard import Scoreboard
import time

screen = Screen()
screen.bgcolor("black")
screen.setup(width=800, height=600)
screen.title("PONG")
screen.tracer(0)        #to close animation

r_paddle = Paddle((350, 0))     #right paddle
l_paddle = Paddle((-350, 0))    #left paddle
ball = Ball()                   #ball object
scoreboard = Scoreboard()       #scoreboard object

#screen functions
screen.listen()
screen.onkey(r_paddle.go_up, "Up")
screen.onkey(r_paddle.go_down, "Down")
screen.onkey(l_paddle.go_up, "w")
screen.onkey(l_paddle.go_down, "s")

game_is_on = True
while game_is_on:
    time.sleep(ball.move_speed)
    screen.update()
    ball.move()

    #detect collision with top and bottom wall
    if ball.ycor() > 280 or ball.ycor() < -280:
        #ball needs to bouce of the wall
        ball.bounce_y()
    
    #detect collision with paddle
    if ball.distance(r_paddle) < 50 and ball.xcor() > 320 or ball.distance(l_paddle) < 50 and ball.xcor() < -320:
        ball.bounce_x()
    
    #detect when paddle misses the paddle
    #reset the ball's position to the centre of the screen and the ball should start moving to the other player

    #detect when right paddle misses the ball
    if ball.xcor() > 380:
        ball.reset_position()
        scoreboard.l_point()
    
    #detect when left paddle misses the ball
    if ball.xcor() < -380:
        ball.reset_position()
        scoreboard.r_point()


screen.exitonclick()