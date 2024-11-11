import pygame
from pygame.locals import *
from sys import exit
import random

# Inicializa o Pygame
pygame.init()

# Define as dimensões da tela
largura = 640
altura = 480

# Cria a tela
tela = pygame.display.set_mode((largura, altura))
pygame.display.set_caption('Simulação de Chuva')
relogio = pygame.time.Clock()

# Função para desenhar e mover gotas
def mover_gota(x, y):
    pygame.draw.rect(tela, (0, 0, 255), (x, y, 5, 15))
    y += 20
    x += 10  # A cada atualização, a gota se move para baixo
    if y > altura:
        y = random.randint(-20, -1)  # Reinicia a gota acima da tela
        x = random.randint(0, largura)  # Move a gota para uma nova posição horizontal
    return x, y

# Gera gotas aleatórias
num_gotas = 20
gotas = [(random.randint(0, largura), random.randint(-altura, 0)) for _ in range(num_gotas)]

# Loop principal
while True:
    relogio.tick(20)
    tela.fill((0, 0, 0))  # Preenche a tela com preto

    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            exit()

    # Atualiza e desenha cada gota
    for i in range(num_gotas):
        x, y = gotas[i]
        gotas[i] = mover_gota(x, y)  # Move a gota

    # Desenha as gotas
    for x, y in gotas:
        pygame.draw.rect(tela, (0, 0, 255), (x, y, 5, 15))  # Desenha a gota

    pygame.display.update()
