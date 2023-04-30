#include "Database.h"
#include <fstream>

using drogon_model::postgres::Database;

drogon::orm::DbClientPtr Database::client;

void Database::generateConnection() {
    // Arquivo de configuracao deve ficar no diretorio out/build/x64-RelWithDebInfo
    std::ifstream dbconf("dbconf.json");

    if (!dbconf) {
        throw std::invalid_argument("Nao foi possivel encontrar o arquivo de configuracao da conexao com o banco de dados");
    }

    Json::Value connData;
    dbconf >> connData;

    const std::string dbType = connData["dbType"].asString();
    const std::string host = connData["host"].asString();
    const unsigned short port = connData["port"].asInt();
    const std::string databaseName = connData["databaseName"].asString();
    const std::string userName = connData["userName"].asString();
    const std::string password = connData["password"].asString();

    drogon::app().createDbClient(
        dbType,
        host,
        port,
        databaseName,
        userName,
        password
    );
}

void Database::initialize() {
    generateConnection();

    // Singleton simples pra manter sempre a mesma inst�ncia de conex�o com o banco de dados
    if (Database::client == NULL) {
        Database::client = drogon::app().getDbClient();
    }
}

drogon::orm::DbClientPtr Database::getDbClient() {
    if (Database::client == NULL) {
        initialize();
    }
        
    return Database::client;
}
