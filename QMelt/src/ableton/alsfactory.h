#pragma once

// ABLETON
#include "src/ableton/abletonobject.h"


M_FORWARD_ABLETON(AlsAbleton)


M_NAMESPACE_ABLETON_BEGIN


class AlsFactory : public AbletonObject
{
public:
  AlsFactory();
  ~AlsFactory();


  QSharedPointer<QObject> createAbleton();


  virtual void write(QSharedPointer<io::AlsFileStreamBase> p_fos_, int& r_indentLvl_);


  QSharedPointer<ableton::AlsAbleton> Ableton;
};


M_NAMESPACE_ABLETON_END