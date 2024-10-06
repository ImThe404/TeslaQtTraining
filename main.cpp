#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <Controllers/system.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    System m_systemHandler;

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("TeslaQtTraining", "Main");

    QQmlContext * context = engine.rootContext();
    context->setContextProperty("systemHandler", &m_systemHandler);

    return app.exec();
}
