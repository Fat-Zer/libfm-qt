#ifndef FM2_FILECHANGEATTRJOB_H
#define FM2_FILECHANGEATTRJOB_H

#include "fileoperationjob.h"

namespace Fm2 {

class FileChangeAttrJob : public Fm2::FileOperationJob {
    Q_OBJECT
public:
    FileChangeAttrJob();
};

} // namespace Fm2

#endif // FM2_FILECHANGEATTRJOB_H
