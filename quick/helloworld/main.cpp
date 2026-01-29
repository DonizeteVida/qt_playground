#include <QGuiApplication>
#include <QQmlApplicationEngine>

static inline void exitOnObjectCreationFailed()
{
    QCoreApplication::exit(-1);
}

int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        &exitOnObjectCreationFailed,
        Qt::QueuedConnection);

    engine.loadFromModule("QMLApp", "Main");

    return app.exec();
}