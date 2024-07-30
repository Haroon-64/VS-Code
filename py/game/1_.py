<<<<<<< HEAD
import pygame as pg
import os
from sys import exit

pwd = os.getcwd()

pg.init()
screen = pg.display.set_mode((800,400))
clock = pg.time.Clock()
pg.display.set_caption('epic')
font = pg.font.Font(os.path.join(pwd +'/assets/font/Pixeltype.ttf'),50)

# col_surface = pg.Surface((100,200))
# col_surface.fill(color='cyan')
sky =  pg.image.load(os.path.join(pwd +'/assets/graphics/Sky.png')).convert()                # convert to more managable type
ground = pg.image.load(os.path.join(pwd +'/assets/graphics/ground.png')).convert()
score = font.render('0',False,[100,100,100])
score_rect = score.get_rect(topleft=[750,20])

snail = pg.image.load(os.path.join(pwd +'/assets/graphics/snail/snail1.png')).convert_alpha()       # keep transparency
snail_rect = snail.get_rect(midbottom=[600,300])

player = pg.image.load(os.path.join(pwd +'/assets/graphics/Player/player_stand.png')).convert_alpha()
player_rect = player.get_rect(midbottom=[80,300])   # create rectangle of player img size and place bottom of rect


while True:
    for event in pg.event.get():   
        if event.type == pg.QUIT:
            pg.quit()       # un-init
            exit()          # stragler code if quit 
        # if event.type == pg.MOUSEMOTION:
        #     print(event.pos)
        # if event.type == pg.MOUSEBUTTONUP:
        #     print('mouse button released')
        # if event.type == pg.MOUSEMOTION:
        #     if player_rect.collidepoint(event.pos): print('mouse collision with player')
        
    screen.blit(sky,dest=(0,0))           # block image transfer      place top left of col_surface on dest
    screen.blit(ground,(0,300))
    pg.draw.rect(screen,'#c0e8ec',score_rect)
    pg.draw.rect(screen,'#c0e8ec',score_rect,width=10)

    screen.blit(score,score_rect )
    
    snail_rect[0] -= 3
    if snail_rect.right <= 0: snail_rect.left = 800
    
    screen.blit(snail,snail_rect)
    screen.blit(player,player_rect)
    
   # if snail_rect.colliderect(player_rect): print('collsion')                                # check for collision
    
    # mouse_pos = pg.mouse.get_pos()
    # if player_rect.collidepoint(mouse_pos): 
    #     print(pg.mouse.get_pressed())
        
       
    pg.display.update()
    clock.tick(60)          # limit while loop
=======
import pygame as pg
from sys import exit
import os

pwd = os.getcwd()
pg.init()
screen = pg.display.set_mode((800,400))
clock = pg.time.Clock()
pg.display.set_caption('epic')
font = pg.font.Font(os.path.join(pwd +'/assets/font/Pixeltype.ttf'),50)

# col_surface = pg.Surface((100,200))
# col_surface.fill(color='cyan')
sky =  pg.image.load(os.path.join(pwd +'/assets/graphics/Sky.png')).convert()                # convert to more managable type
ground = pg.image.load(os.path.join(pwd +'/assets/graphics/ground.png')).convert()
score = font.render('0',False,[100,100,100])
score_rect = score.get_rect(topleft=[750,20])

snail = pg.image.load(os.path.join(pwd +'/assets/graphics/snail/snail1.png')).convert_alpha()       # keep transparency
snail_rect = snail.get_rect(midbottom=[600,300])

player = pg.image.load(os.path.join(pwd +'/assets/graphics/Player/player_stand.png')).convert_alpha()
player_rect = player.get_rect(midbottom=[80,300])   # create rectangle of player img size and place bottom of rect


while True:
    for event in pg.event.get():   
        if event.type == pg.QUIT:
            pg.quit()       # un-init
            exit()          # stragler code if quit 
        # if event.type == pg.MOUSEMOTION:
        #     print(event.pos)
        # if event.type == pg.MOUSEBUTTONUP:
        #     print('mouse button released')
        # if event.type == pg.MOUSEMOTION:
        #     if player_rect.collidepoint(event.pos): print('mouse collision with player')
        
    screen.blit(sky,dest=(0,0))           # block image transfer      place top left of col_surface on dest
    screen.blit(ground,(0,300))
    pg.draw.rect(screen,'#c0e8ec',score_rect)
    pg.draw.rect(screen,'#c0e8ec',score_rect,width=10)

    screen.blit(score,score_rect )
    
    snail_rect[0] -= 3
    if snail_rect.right <= 0: snail_rect.left = 800
    
    screen.blit(snail,snail_rect)
    screen.blit(player,player_rect)
    
   # if snail_rect.colliderect(player_rect): print('collsion')                                # check for collision
    
    # mouse_pos = pg.mouse.get_pos()
    # if player_rect.collidepoint(mouse_pos): 
    #     print(pg.mouse.get_pressed())
        
       
    pg.display.update()
    clock.tick(60)          # limit while loop
>>>>>>> 3d5d50da7c2758326022e84633f8a8f3750988a2
    