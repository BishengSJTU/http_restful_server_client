#include "HttpServer.h"
#include <iostream>

int http_api_echo(HttpRequest* req, HttpResponse* res) {
    res->body = req->body;
    return 0;
}

int http_api_json(HttpRequest* req, HttpResponse* res) {
    std::cout << res->json;
    return 0;
}

int main() {
    HttpService service;
    service.base_url = "/api/v1";
    service.AddApi("/echo", HTTP_POST, http_api_echo);
    service.AddApi("/missions", HTTP_POST, http_api_json);

    http_server_t server;
    server.port = 8858;
    server.service = &service;
    http_server_run(&server);
    return 0;
}