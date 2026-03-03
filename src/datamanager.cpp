#include "datamanager.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

DataManager* DataManager::m_instance = nullptr;

DataManager::DataManager() {
    loadUsers();
}

DataManager::~DataManager() {
    saveUsers();
}

DataManager* DataManager::instance() {
    if (!m_instance) {
        m_instance = new DataManager();
    }
    return m_instance;
}

bool DataManager::registerUser(const QString& username, const QString& password) {
    for (const auto& user : m_users) {
        if (user.username == username) return false;
    }
    m_users.append({username, password});
    saveUsers();
    return true;
}

bool DataManager::loginUser(const QString& username, const QString& password) {
    for (const auto& user : m_users) {
        if (user.username == username && user.password == password) return true;
    }
    return false;
}

void DataManager::loadUsers() {
    QFile file(m_filePath);
    if (!file.open(QIODevice::ReadOnly)) return;

    QByteArray data = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonArray array = doc.array();

    m_users.clear();
    for (int i = 0; i < array.size(); ++i) {
        QJsonObject obj = array[i].toObject();
        m_users.append({obj["username"].toString(), obj["password"].toString()});
    }
}

void DataManager::saveUsers() {
    QJsonArray array;
    for (const auto& user : m_users) {
        QJsonObject obj;
        obj["username"] = user.username;
        obj["password"] = user.password;
        array.append(obj);
    }

    QJsonDocument doc(array);
    QFile file(m_filePath);
    if (file.open(QIODevice::WriteOnly)) {
        file.write(doc.toJson());
    }
}
