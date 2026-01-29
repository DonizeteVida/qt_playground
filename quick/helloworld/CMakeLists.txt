# Check https://doc.qt.io/qt-6/qt-cmake-policy-qtp0001.html
qt_policy(SET QTP0001 NEW)

qt_add_executable(
    quick_helloworld
    main.cpp)

qt_add_qml_module(
    quick_helloworld
    URI QMLApp
    VERSION 1.0
    QML_FILES
        Main.qml)

target_link_libraries(
    quick_helloworld
    PRIVATE
    Qt${QT_VERSION_MAJOR}::Quick)