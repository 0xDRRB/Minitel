/**
 * Exemple by Denis Bodor showing the new getMinitelInfo() method.
 *
 * Based on works by Jerome Saint-Clair aka 01010101
 */

#include <SoftwareSerial.h>
#include <Minitel.h>

Minitel m;

tminitel *monminitel;

void setup() {
  Serial.begin(115200);

  if(monminitel = m.getMinitelInfo()) {
    Serial.print("Modèle: ");
    Serial.println(monminitel->nom);
    Serial.print("Constructeur: ");
    Serial.println(monminitel->constructeur);
    Serial.print("Version: ");
    Serial.println(monminitel->version, DEC);
    Serial.print("Vitesse max: ");
    Serial.println(monminitel->vitesse);
    if(monminitel->retournable)
      Serial.println("Retournable");
    else
      Serial.println("Non retournable");
    if(monminitel->col80)
      Serial.println("Utilisable en 80 colonnes");
    else
      Serial.println("40 colonnes uniquement");
    if(monminitel->mcar)
      Serial.println("Caractères personnalisables");
    else
      Serial.println("Caracteres non personnalisables");
    if(monminitel->clavier == CLAV_NO)
      Serial.println("Pas de clavier");
    else if(monminitel->clavier == CLAV_AZERTY)
      Serial.println("Clavier AZERTY");
    else if(monminitel->clavier == CLAV_ABCD)
      Serial.println("Clavier ABCD");
    else
      Serial.println("Clavier inconnu");
  }
}

void loop() {
}
