set(SOURCE ./src/main.cpp)

idf_component_register(SRCS ${SOURCE}
                    INCLUDE_DIRS "include"
                    REQUIRES freertos esp_common spi_flash)

                    
