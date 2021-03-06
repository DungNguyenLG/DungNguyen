#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>
#include <QString>
#include <QFile>
#include <QDebug>
#include <QWidgetList>
#include <QThread>

class Receiver : public QThread
{
    Q_OBJECT
public:
    Receiver();
    virtual ~Receiver();

signals:
    void sendToQml(int count);
    void playState(const QString &mgs);
    void openFile(const QString &mgs);
    void playFile(const QString &mgs);
    void seekForward(const QString &mgs);
    void seekBackward(const QString &mgs);
    void previous(const QString &mgs);
    void next(const QString &mgs);
    void maxVolum(const QString &mgs);
    void seekVolum(const QString &mgs);
    void addFile(const QString &mgs);
    void clearFile(const QString &mgs);
    void removeFile(const QString &mgs);



public slots:

};

#endif // RECEIVER_H
