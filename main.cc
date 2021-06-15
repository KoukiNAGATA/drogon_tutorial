#include <drogon/drogon.h>
using namespace drogon; // namespace省略

int main()
{
    //Set HTTP listener address and port
    app().addListener("0.0.0.0", 80);
    //Load config file
    //app().loadConfigFile("../config.json");
    //Run HTTP framework,the method will block in the internal event loop
    app().run();
    return 0;
}
