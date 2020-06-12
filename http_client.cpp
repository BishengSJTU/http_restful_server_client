#include "http_client.h"
#include <iostream>
#include <exception>

int main(int argc, char* argv[]) {
    HttpRequest req1;
    req1.method = HTTP_POST;
    req1.url = "http://192.168.2.103:8858/api/v1/missions";
    req1.json = nlohmann::json{
            {"ref_uuid", ""},
            {"src", ""},
            {"description", ""},
            {"req_robot", 0},
            {"req_robgroups", ""},
            {"id",0},
            {"robot_id", 0},
            {"state",0},
            {"err_msg",""},
            {"steps", {{
                              {"map_name", "archive_xunjie"},
                              {"target_code", "A"},
                              {"action", "test"},
                              {"args", ""}
                      }}
            }
    };
    HttpResponse res1;
    http_client_send(&req1, &res1);
    int state_code = res1.status_code;
    std::cout << state_code << std::endl;

//    while(1) {
        // HttpRequest req2;
        // req2.method = HTTP_GET;
        // req2.url = "http://192.168.8.108:8858/api/v1/missions";
        // HttpResponse res2;
        // int ret2 = http_client_send(&req2, &res2);
        // string result(res2.body);
        // std::cout << result << std::endl;
//        try {
//            auto js = Json::parse(result);
//            int a = js["state"];
//            std::cout << a << std::endl;
//        } catch(std::exception &e) {
//            std::cout << e.what() << std::endl;
//        }
        // sleep(1);
//    }
}