import pygame
from pygame.locals import *
from sys import exit

pygame.init()

largura = 640
altura = 480
x = 0
y = 0
z = 250
z1 = 0
i = 0
j = 0
aux = 0
n = 0
n1 = 500

tela = pygame.display.set_mode((largura, altura))
pygame.display.set_caption('Minha primeira primeira janelinha')
relogio = pygame.time.Clock()

while(True):
    relogio.tick(20)
    tela.fill((0, 0, 0))

    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            exit()


    pygame.draw.rect(tela,(0,0,255), (x,y,5,15))
    y += 3
    x += 1
    if y > altura:
        y = 0
        x += 0.5
    if x > largura:
        x = 0

    for i in range(10):
        pygame.draw.rect(tela,(0,0,255), (x,y,5,15))
        y += 3
        x += 0.5
        if y > altura:
            y = 0
            x += 0.5
        if x > largura:
            x = 0


    #pygame.draw.circle(tela, (80, 30, 10), (300,260), 40)
    #pygame.draw.line(tela, (255, 255,0) , (390,0), (390,600), 5)
    pygame.display.update()

