#ifndef QFTPSERVERLIB_GLOBAL_H
#define QFTPSERVERLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QFTPSERVERLIB_LIBRARY)
#  define QFTPSERVERLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QFTPSERVERLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QFTPSERVERLIB_GLOBAL_H