#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

int main()
{
  std::srand(std::time(0));
  
   std::vector<std::string> language = { "English", "Spanish", 
    "French", "Somali", "Russian", "Oromo", "Dari", "Arabic", 
        "Hindi", "Tagalog", "Swahili", "Bengali", "Bulgarian", 
          "Turkemi", "Cebuano"};

   std::vector<std::string> speciality = 
     {"Gynecologic oncology", "Anesthesiology","Neurology", 
       "Infectious disease", "Family Medicine", "Toxicology"};
  
   std::cout << "What language are you fluent in?" << std::endl;
    for (size_t i = 0; i < language.size(); i++ ) {
     std::cout << i + 1 << ": " << language[i] << std::endl;
      }
int languageChoice;
  std::cin >> languageChoice;
  std::cout << "You selected " << languageChoice << std::endl;

  if (languageChoice < 1 || languageChoice > language.size()) {
     std::cout << "Invalid choice. Please try again." << 
         std::endl;
    return 1;
  }
  
int specialityChoice;
  std::cout << "What is your speciality?" << std::endl;
    for (size_t i = 0; i < speciality.size(); i++) {
      std::cout << i +1 << ": " << speciality[i] << std::endl;
    }
  std::cin >> specialityChoice;
  std::cout << "You selected " << specialityChoice << std::endl;
  
     if (specialityChoice < 1 || specialityChoice > 
      speciality.size()) {
        std::cout << "Invalid choice. Please try again." << 
         std::endl;
    return 1;
}
  --languageChoice;
  --specialityChoice;
    const std::vector<std::string>countriesByLanguage [] = {
  {"Kenya", "Ethiopia", "Palestine", "Lebanon", "Philippines", 
    "India", "Ukraine", "Afghanistan", "El salvador", "Haiti"}, 
  {"Haiti", "El Salvador"},
  {"Haiti", "Lebanon", "Palestine"},
  {"Ethopia"},
  {"Ukraine"},
  {"Ethopia"},
  {"Afghanistan"},
  {"Lebanon", "Palestine"},
  {"India"},
  {"Philippines"},
  {"Kenya"},
  {"India"},
  {"Ukraine"},
  {"Afganistan"},
  {"Philippines"}
};
  int randomIndex = rand() % countriesByLanguage[languageChoice].size();

  std::cout << "You selected " << language[languageChoice] << " as the language you are fluent in, and " << speciality[specialityChoice] << " as your speciality. Based on your selection, Your selected country is " << countriesByLanguage[languageChoice][randomIndex] << "." << std::endl;

  std::cout << "The sample space is the amount of languages mutiplied by the number of specializations = 15 * 6 = " << language.size() * speciality.size() << "."<< std::endl;
  
  std::cout << "The probability of choosing one language and one occupation is 1/90 which is about 1.11% " << std::endl;
  
 return 0;
}