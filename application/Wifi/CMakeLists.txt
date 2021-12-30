set(SOURCE Wifi.cpp)

idf_component_register(SRCS ${SOURCE}
                    INCLUDE_DIRS .
                    REQUIRES esp_wifi nvs_flash esp_event esp_netif lwip)