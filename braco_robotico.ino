#include <Servo.h>
Servo servo1; // garra
Servo servo2; // direita
Servo servo3; // esquerda
Servo servo4; // base

int velocidadePadrao = 60;

void moverServo(Servo& servo, int posicao_alvo) {
  int posicao_atual = servo.read();


  if (posicao_atual < posicao_alvo) {
    // Move para CIMA (ex: de 20 para 50)
    for (int posicao = posicao_atual; posicao <= posicao_alvo; posicao++) {
      servo.write(posicao);
      delay(velocidadePadrao);
    }
  } else {
    // Move para BAIXO (ex: de 115 para 100)
    for (int posicao = posicao_atual; posicao >= posicao_alvo; posicao--) {
      servo.write(posicao);
      delay(velocidadePadrao);
    }
  }
}

void pegar_objeto_em_a() {
  moverServo(servo3, 50);
  moverServo(servo2, 115);
  moverServo(servo1, 60);
  moverServo(servo3, 60);
  moverServo(servo2, 100);
  moverServo(servo3, 100);
}


void levar_objeto_ate_B() {
  moverServo(servo4, 71);
  moverServo(servo2, 120);
  moverServo(servo3, 90);
  moverServo(servo1, 0);
  moverServo(servo2, 100);
}


void recomecar_e_pegar_b() {
  moverServo(servo4, 165);
  moverServo(servo3, 20);
  moverServo(servo2, 130);
  moverServo(servo3, 30);
  moverServo(servo1, 60);
}

void levantar_objeto_maior_a() {
  moverServo(servo3, 40);
  moverServo(servo2, 120);
  moverServo(servo3, 50);
  moverServo(servo2, 110);
  moverServo(servo3, 60);
  moverServo(servo2, 100);
  moverServo(servo3, 100);
}

void levar_objeto_ate_C() {
  moverServo(servo4, 6);
  moverServo(servo2, 100);
  moverServo(servo3, 85);
  moverServo(servo1, 0);
  moverServo(servo2, 90);
}

void levantar_objeto_menor_b() {
  moverServo(servo4, 75);
  moverServo(servo3, 50);
  moverServo(servo2, 145);
  moverServo(servo1, 60);
}

void objeto_b_para_c() {
  moverServo(servo3, 60);
  moverServo(servo2, 130);
  moverServo(servo3, 70);
  moverServo(servo2, 120);
  moverServo(servo3, 90);
  moverServo(servo2, 90);
  moverServo(servo3, 100);
  moverServo(servo4, 6);
  moverServo(servo2, 100);
  moverServo(servo3, 80);
  moverServo(servo1, 0);
}

void retornar_ao_inicio() {
  moverServo(servo4, 162);
  moverServo(servo3, 20);
  moverServo(servo2, 100);
  moverServo(servo1, 0);
  delay(2000);
}

void setup() {
  Serial.begin(9600);

  servo1.attach(2); // garra
  servo2.attach(4); // direita
  servo3.attach(6); // esquerda
  servo4.attach(7); // base

  servo1.write(0);
  servo2.write(100);
  servo3.write(20);
  servo4.write(163);

  delay(1000);
}

void loop() {
  pegar_objeto_em_a();
  levar_objeto_ate_B();
  recomecar_e_pegar_b();
  levantar_objeto_maior_a();
  levar_objeto_ate_C();
  levantar_objeto_menor_b();
  objeto_b_para_c();
  retornar_ao_inicio();
}
