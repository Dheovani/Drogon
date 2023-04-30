#include <drogon/drogon.h>
#include "Database.h"

using drogon_model::postgres::Database;

int main() {
    drogon::app().addListener("localhost", 8080);

    // Inicializar a conexão com o banco
    Database::initialize();

    drogon::app().run();
    return 0;
}
