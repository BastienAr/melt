#pragma once
#include "src/common/common.h"


// QT
#include <QObject>
#include <QSharedPointer>
#include <QString>


M_FORWARD_ABLETON(AlsAbleton)


M_NAMESPACE_IO_BEGIN


  /*!
 * \brief The AlsFilesystem class
 */
class AlsFilesystem : public QObject
{
  Q_OBJECT
public:
  /*!
   * \brief Destructor
   */
  virtual ~AlsFilesystem() {}

  /*!
   * \brief Load an unzipped ALS file
   * \param filePath_ Path to the XML file
   * \param r_ableton_ The output object, must be null
   * \return true if the file is loaded properly
   */
  static bool load(const QString &filePath_,
                   QSharedPointer<ableton::AlsAbleton> &r_ableton_);

  /*!
   * \brief Load a zipped ALS file
   * \param filePath_ Path to the XML file
   * \return pointer to the ableton live set
   */
  static QSharedPointer<ableton::AlsAbleton> loadAls(const QString &filePath_);

  /*!
   * \brief Save an unzipped ALS file
   * \param filePath_ Path where the XML file will be saved
   * \param alsAbleton_ The input object, mustn't be null
   * \return true if the file is saved properly
   */
  static bool save(const QString &filePath_,
                   const QSharedPointer<ableton::AlsAbleton> &r_ableton_);


private:
  /*!
   * \brief Private constructor
   * \param parent
   */
  AlsFilesystem(QObject *parent = 0) : QObject(parent) {}
};


M_NAMESPACE_IO_END
