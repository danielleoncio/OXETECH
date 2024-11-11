import pygame
from pygame.locals import *
from sys import exit
from random import randint

pygame.init()

# Set up variables
largura = 640
altura = 480
x = largura / 2
y = altura / 2
pontos = 0  # Initialize points
x_golden = randint(40, 600)
y_golden = randint(50, 420)

fonte = pygame.font.SysFont('bahnschrift', 20, False, False)
tela = pygame.display.set_mode((largura, altura))
pygame.display.set_caption('Atari')
relogio = pygame.time.Clock()

while True:
    relogio.tick(20)
    tela.fill((0, 0, 0))

    # Display points
    mensagem = fonte.render(f'Pontos: {pontos}', False, (255, 255, 255))
    tela.blit(mensagem, (10, 10))

    # Event handling
    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            exit()

    # Player movement
    keys = pygame.key.get_pressed()
    if keys[K_a] and x > 0:
        x -= 20
    if keys[K_d] and x < largura - 40:
        x += 20
    if keys[K_w] and y > 0:
        y -= 20
    if keys[K_s] and y < altura - 50:
        y += 20

    # Draw player
    ret_blue = pygame.draw.rect(tela, (255, 0, 0), (x, y, 40, 50))
    circle_golden = pygame.draw.circle(tela, (255, 215, 0), (x_golden, y_golden), 10)

    # Collision detection
    if ret_blue.colliderect(circle_golden):
    
        pontos += 1  # Increment points
        x_golden = randint(40, 600)  # Randomize new position
        y_golden = randint(50, 420)
    pygame.display.update()
