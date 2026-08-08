# Braço Robótico MyArm — Torre de Hanói

## Descrição do projeto

Braço robótico de **4 graus de liberdade** (garra, servo direita, servo esquerda e base), montado e programado individualmente, projetado para resolver fisicamente o jogo da **Torre de Hanói**.

O braço movimenta discos entre três pinos respeitando a regra fundamental do jogo: apenas um disco pode ser movido por vez, e um disco maior nunca pode ficar sobre um disco menor. Cada articulação é controlada por um servomotor independente, e o movimento é executado grau a grau para garantir um deslocamento suave e preciso o suficiente para pegar e soltar os discos nas posições corretas.

A sequência de resolução é implementada como uma série de rotinas de movimento (pegar em A, levar até B, mover de B para C, retornar ao início), cada uma com as posições angulares calibradas para a geometria física do braço e dos pinos.

## Vídeo de demonstração

https://www.youtube.com/watch?v=nb2hkiw5dbM

## Disciplina

Princípios de Robótica — PUCPR, 2025

## Tecnologias utilizadas

- C++
- Arduino
- Controle de servomotores (biblioteca `Servo.h`)

## Estrutura do repositório

- `braco_robotico.ino` — código de controle do braço robótico.

## Contexto acadêmico

Projeto desenvolvido por **Luan Alfredo Lugarini**, estudante de Engenharia da Computação na PUCPR.
