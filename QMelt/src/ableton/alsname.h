#pragma once


// ABLETON

#include "src/ableton/abletonobject.h"


M_NAMESPACE_ABLETON_BEGIN


class AlsName:public AbletonObject
{
public:
  AlsName();
  ~AlsName();


  void write(QSharedPointer<io::AlsFileStreamBase> p_fos_, int &r_indentLvl_);


  /// <summary>
  /// Sets the effective name.
  /// </summary>
  /// <param name="value">The value.</param>
  void setEffectiveName(const QString &r_value_);


  /// <summary>
  /// Sets the name of the user.
  /// </summary>
  /// <param name="value">The value.</param>
  void setUserName(const QString &r_value_);


  /// <summary>
  /// Sets the annotation.
  /// </summary>
  /// <param name="value">The value.</param>
  void setAnnotation(const QString &r_value_);


private:
  QString _effectiveName;
  QString _userName;
  QString _annotation;
};


M_NAMESPACE_ABLETON_END