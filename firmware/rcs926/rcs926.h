/*
 * Copyright 2012 Google Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Routines to Communicate with RC-S926 chip in RC-S801/RC-S802 Felica Plug
 *
 * http://www.sony.net/Products/felica/business/tech-support
 */

#ifndef __RCS926_H_
#define __RCS926

void rcs926_init(void);

void rcs926_process_command(uint8_t ndef[], uint16_t ndef_len,
                            bool *has_read_all);

#endif /* __RCS926 */
