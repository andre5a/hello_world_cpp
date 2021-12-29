set(SOURCE Gpio.cpp)

idf_component_register(SRCS ${SOURCE}
                    INCLUDE_DIRS .
                    REQUIRES driver)