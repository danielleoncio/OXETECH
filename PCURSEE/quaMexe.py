import pygame
from pygame.locals import *
from sys import exit

pygame.init()

largura = 640
altura = 480
x = largura/2
y = 0


tela = pygame.display.set_mode((largura, altura))
pygame.display.set_caption('Atari')
relogio = pygame.time.Clock()


while True:
    relogio.tick(20)
    tela.fill((0,0,0))
    #aqui acontece o jogo
    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            exit()
        if pygame.key.get_pressed()[K_a]:
            x = x - 20
        if pygame.key.get_pressed()[K_d]:
            x = x + 20
        if pygame.key.get_pressed()[K_w]:
            y -= 20
        if pygame.key.get_pressed()[K_s]:
            y += 20
    pygame.draw.rect(tela, (255,0, 0),(x, y, 40, 50))

    pygame.display.update()