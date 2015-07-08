/**
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 *
 */

#include "src/audit_log_writer_serial.h"

#include "src/audit_log.h"

namespace ModSecurity {


bool AuditLogWriterSerial::init() {
    return true;
}


bool AuditLogWriterSerial::close() {
    return true;
}


bool AuditLogWriterSerial::write(const std::string& log) {
    return true;
}

}  // namespace ModSecurity
