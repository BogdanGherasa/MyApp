#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QString>
#include <QList>
#include <QJsonObject>

struct User {
    QString username;
    QString password;
};

class DataManager {
public:
    static DataManager* instance();

    bool registerUser(const QString& username, const QString& password);
    bool loginUser(const QString& username, const QString& password);

private:
    DataManager();
    ~DataManager();
    static DataManager* m_instance;

    QList<User> m_users;
    void loadUsers();
    void saveUsers();
    const QString m_filePath = "users.json";
};

#endif // DATAMANAGER_H
