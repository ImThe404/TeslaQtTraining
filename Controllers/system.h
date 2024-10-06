#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>

class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carLocked READ carLocked WRITE setCarLocked NOTIFY carLockedChanged)
    Q_PROPERTY(int outDoorTemp READ outDoorTemp WRITE setOutDoorTemp NOTIFY outDoorTempChanged)
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged)

public:
    explicit System(QObject *parent = nullptr);

    bool carLocked() const;
    int outDoorTemp() const;
    QString userName() const;

public slots:

    void setCarLocked(bool newCarLocked);
    void setOutDoorTemp(int newOutDoorTemp);
    void setUserName(const QString &newUserName);

signals:
    void carLockedChanged();

    void outDoorTempChanged();

    void userNameChanged();

private:
    bool m_carLocked;
    int m_outDoorTemp;
    QString m_userName;
};

#endif // SYSTEM_H
