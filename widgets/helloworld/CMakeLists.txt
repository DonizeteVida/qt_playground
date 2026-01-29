qt_add_executable(widgets_helloworld main.cpp)

target_link_libraries(
    widgets_helloworld
    PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets)