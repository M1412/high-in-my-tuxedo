#include <cstdio>
/**
 * @brief Enumerations fit more with switch for more effective code :P
 * 
 */
enum class Race { Dinan, Teklan, Ivyn, Moiran, Camite, Julian, Aidan };

int main() {
  Race race = Race::Teklan;
  printf("race = %f\n", race);

  switch (race) {
    case (Race::Dinan): {
      printf("You work hard.");
    } break;
    case (Race::Teklan): {
      printf("You are very strong.");
    } break;
    case (Race::Ivyn): {
      printf("You are a great leader.");
    } break;
    case (Race::Moiran): {
      printf("My, how verstile you are!");
    } break;
    case (Race::Camite): {
      printf("You're incredibly helpful.");
    } break;
    case (Race::Julian): {
      printf("Anything you want!");
    } break;
    case (Race::Aidan): {
      printf("What an enigma.");
    } break;
    default: {
      printf("Error: unknown race!");
    }
  }
}