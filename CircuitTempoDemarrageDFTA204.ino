  // ####################################################################################################################################################################################
  //                                                            CLAUDE DUFOURMONT Tempo ATtiny85
  // ####################################################################################################################################################################################          
  // Aprés la mise sous tension de l'ATtiny85 sa sortie PB0 passe à HIGH 5 secondes aprés permettant d'actionner un HIGH-SIDE-SWITCH
  // Vidéo DFT_#A204 https://youtu.be/wj5tpPyDu7A
  // GitHub correspondant : https://github.com/claudiusmarius/ALIMENTATION-TEMPORISEE-PAR-ATTINY85-DFTA204
  // https://github.com/claudiusmarius
  // https://www.youtube.com/c/ClaudeDufourmont
  // #####################################################################################################################################################################################
  //
  //-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  // 
  // Ici le code a été considéré comme du setup,  (un seul démarrage, pas de bouclage)
  // 
  //-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  #define PinSortieTempo PB0  // Affectation PB0 à PinSortieTempo

  void setup() 
  {
  pinMode(PinSortieTempo, OUTPUT);  // Configuration PinSortieTempo en mode sortie
  delay (5);
  digitalWrite(PinSortieTempo, LOW);  // Initialisation PinSortieTempo à l'état LOW
  delay(5000);  // Attendre 5 secondes
  digitalWrite(PinSortieTempo, HIGH);  // Mettre PinSortieTempo à HIGH
  }

  void loop() {
  // Aucun code dans la boucle tout se passe au moment du setup
  }








