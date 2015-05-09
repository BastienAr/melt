#pragma once
#include "common.h"
#include "matchresult.h"

// QT
#include <QObject>
#include <QSharedPointer>
#include <QVector>

M_NAMESPACE_DIFF_BEGIN

class MatchEngine : public QObject
{
    Q_OBJECT
public:
    explicit MatchEngine(QObject *parent = 0);

    QSharedPointer<MatchResult> match(QVector<QSharedPointer<QObject>>& originObjects_,
                                      QVector<QSharedPointer<QObject>>& leftObjects_,
                                      QVector<QSharedPointer<QObject>>& rightObjects_);
signals:

public slots:
};


M_NAMESPACE_DIFF_END