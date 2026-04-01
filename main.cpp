#include "utils.h"
#include <iostream>
#include <stdexcept>

int main(int argc, char* argv[]) {
    try {
        std::cout << "--- Filmora Pro Bootstrapper v3.4.1 ---\n";
        
        std::string configPath = (argc > 1) ? argv[1] : "config.json";
        
        CoreActivator::AutomationEngine engine(configPath);
        engine.activateProFeatures();

        std::cout << "[INFO] Agent shutdown. Ready to edit.\n";
    } 
    catch (const std::exception& e) {
        std::cerr << "[FATAL] Initialization crashed: " << e.what() << "\n";
        return 1;
    }
    
    return 0;
}
