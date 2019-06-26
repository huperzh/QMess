#ifndef CHATWINDOW_H
#define CHATWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QItemDelegate>
#include <QPainter>
#include "eventmessageprocessor.h"

namespace Ui {
class ChatWindow;
}

class ChatWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChatWindow(QWidget *parent = nullptr);
    ~ChatWindow();
private slots:
    void userStatusChangedSlot  ();
    void newMessageRecievedSlot ();
    void on_sendButton_clicked();
    void on_usersListWigdet_itemClicked(QListWidgetItem *item);

private:
    Ui::ChatWindow*             m_ui;
    EventMessageProcessor       m_EventProcessor;
};

#endif // CHATWINDOW_H
