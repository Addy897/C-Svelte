#include "main.h"
#include <stdlib.h>
#include <string.h>
char * indexH(Request * req){
    
    return render_template("./build/index.html");
}
char * about(Request * req){
    
    return render_template("./build/about.html");
}

int main(int argc, char const *argv[])
{
    
    int init=initializeSocket();
    if(init==-1){
        cleanupRoutes();
        return -1;
    }
    char path[100];
    
    setStaticPath("./build");
    addRoute("/",indexH);
    addRoute("/about",about);

    startServer("0.0.0.0",4444);
    cleanupRoutes();

}
