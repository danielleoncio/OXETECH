import pygame
from pygame.locals import *
from sys import exit

pygame.init()

largura = 600
altura = 600
x = 1
y = 575

tela = pygame.display.set_mode((largura, altura))
pygame.display.set_caption("CHUVA")

while(True):
    tela.fill((0, 0, 0))

    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            exit()
    
    pygame.draw.rect(tela,(0,0,255), (10, y, x, 15))
    x += 1
    if x > 590:
        x = 1

    pygame.display.update()
