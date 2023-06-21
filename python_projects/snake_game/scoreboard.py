from turtle import Turtle
ALIGNMENT = "center"
FONT = ("Roboto Mono", 20, "normal")


class Scoreboard(Turtle):

    def __init__(self):
        super().__init__()   #super class call
        self.score = 0
        self.color("white")
        self.penup()
        self.goto(0, 270)    #coordinates
        self.hideturtle()    
        self.update_scoreboard()

    def update_scoreboard(self):
        self.write(f"Score: {self.score}", align=ALIGNMENT, font=FONT)

    def game_over(self):
        self.goto(0, 0)
        self.write("GAME OVER", align=ALIGNMENT, font=FONT)

    def increase_score(self):
        self.score += 1
        self.clear()     #so that score does not overlap
        self.update_scoreboard()
