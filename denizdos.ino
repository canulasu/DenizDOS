#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void setup() {
  Serial.begin(9600);
  Serial.println("DenizDOS v 0.0.1");
  Serial.println("Copyright (c) 2024 Deniz canulasu");
  Serial.println(" ");
}

void loop() {

  Serial.print("ushell>>> ");
  while (Serial.available() == 0) {
  }

  String command = Serial.readStringUntil('\n');

  Serial.println(command);

  if (command == "pwd") {
    Serial.println("/Home");
  }

  if (command == "whoami") {
    Serial.println("DenizDOS v 0.0.1");
  }

  if (command == "exit") {
    Serial.println("System Has Shut Down");
    Serial.end();
  }

  if (command == "help") {
    Serial.println("DenizDOS Command Center");
    Serial.println("add, subtract, multiply");
    Serial.println("divide, pwd, whoami");
    Serial.println("exit, help");
  }

  if (command == "add") {
    Serial.print("add1>>> ");
    while (Serial.available() == 0) {
    }
    String add1 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.print("add2>>> ");
    while (Serial.available() == 0) {
    }
    String add2 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.println(add1.toInt()+add2.toInt());
  }

  if (command == "multiply") {
    Serial.print("multiply1>>> ");
    while (Serial.available() == 0) {
    }
    String add1 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.print("multiply2>>> ");
    while (Serial.available() == 0) {
    }
    String add2 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.println(add1.toInt()*add2.toInt());
  }

  if (command == "divide") {
    Serial.print("divide1>>> ");
    while (Serial.available() == 0) {
    }
    String add1 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.print("divide2>>> ");
    while (Serial.available() == 0) {
    }
    String add2 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.println(add1.toInt()/add2.toInt());
  }

  if (command == "subtract") {
    Serial.print("subtract1>>> ");
    while (Serial.available() == 0) {
    }
    String add1 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.print("subtract2>>> ");
    while (Serial.available() == 0) {
    }
    String add2 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.println(add1.toInt()/add2.toInt());
  }

  if (command == "random") {
    int randomint = rand();
    Serial.println(randomint);
  }

}
