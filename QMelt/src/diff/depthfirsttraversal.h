#pragma once
#include "common.h"


// QT
#include <QObject>
#include <QSharedPointer>
#include <QVector>

M_NAMESPACE_DIFF_BEGIN

class DepthFirstTraversal : public QObject
{
    Q_OBJECT
public:
    explicit DepthFirstTraversal(QObject *parent = 0);
    QVector<QSharedPointer<QObject>> traverse(QSharedPointer<QObject>& rootObject);
signals:

public slots:
};


M_NAMESPACE_DIFF_END