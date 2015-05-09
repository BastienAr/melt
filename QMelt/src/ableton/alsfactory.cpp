// ABLETON
#include "src/ableton/alsableton.h"
#include "src/ableton/alsfactory.h"


M_NAMESPACE_ABLETON_BEGIN


AlsFactory::AlsFactory()
: Ableton(nullptr)
{
  _classManipulator = decltype(_classManipulator){
      { "Ableton", qMakePair(static_cast<CreateVarLambda>(&AlsFactory::createAbleton), nullptr) }
  };
}

QSharedPointer<QObject> AlsFactory::createAbleton()
{
  Ableton = QSharedPointer<AlsAbleton>(new AlsAbleton());
  return Ableton.staticCast<QObject>();
}

void AlsFactory::write(QSharedPointer<io::AlsFileStreamBase> p_fos_, int& r_indentLvl_)
{
  //TODO implements method write
}

AlsFactory::~AlsFactory()
{
  Ableton.clear();
}


M_NAMESPACE_ABLETON_END