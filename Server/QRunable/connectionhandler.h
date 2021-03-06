#ifndef CONNECTIONHANDLER_H
#define CONNECTIONHANDLER_H

#include <QObject>
#include <QRunnable>

#include "models.h"

class ConnectionHandler : public QObject, public QRunnable
{
    Q_OBJECT
public:
    explicit ConnectionHandler(QObject *parent = nullptr);
protected:
    void run() override;
signals:
    void finish(QByteArray data);
    void userFound
    (int      m_userId,
    QString     m_userName,
    bool        m_isOnline);
public slots:
};

#endif // CONNECTIONHANDLER_H
