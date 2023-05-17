cmake_minimum_required(VERSION 2.7)
project(untitled13)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "C:/Qt/5.15.2/msvc2019_64/lib/cmake")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

set(SOURCE_LIB mainwindow/mainwindow.cpp src/Deposite.cpp
        depositewindow/depositewindow.cpp withdrawwindow/withdrawwindow.cpp paywindow/paywindow.cpp noyeswindow/YesWindow.cpp
        noyeswindow/nowindow.cpp )

set(HEADER_LIB mainwindow/mainwindow.hpp include/Terminale.hpp  include/Deposite.hpp
        depositewindow/depositewindow.hpp withdrawwindow/withdrawwindow.hpp  paywindow/paywindow.hpp noyeswindow/YesWindow.hpp
         noyeswindow/nowindow.hpp)

set(UI_LIB mainwindow/mainwindow.ui depositewindow/depositewindow.ui paywindow/paywindow.ui withdrawwindow/withdrawwindow.ui
        noyeswindow/yeswindow.ui noyeswindow/nowindow.ui)

add_executable(untitled13 main.cpp  ${SOURCE_LIB}   ${HEADER_LIB}  ${UI_LIB})

target_link_libraries(untitled13
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

if (WIN32)
    set(DEBUG_SUFFIX)
    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DEBUG_SUFFIX "d")
    endif ()
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()
    foreach (QT_LIB Core Gui Widgets)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt5${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()
