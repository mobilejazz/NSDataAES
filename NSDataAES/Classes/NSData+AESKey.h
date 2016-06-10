//
// Copyright 2016 Mobile Jazz SL
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import "NSData+AES.h"

/**
 * AES category on NSData to encrypt data using self as encryption key.
 **/
@interface NSData (AESKey)

/** *************************************************** **
 * @name Encrypt
 ** *************************************************** **/

- (NSData*)aes_encryptValue:(NSData*)value;
- (NSData*)aes_encryptValue:(NSData*)value usingPadding:(CCOptions)options;

/** *************************************************** **
 * @name Decrypt
 ** *************************************************** **/

- (NSData*)aes_decryptValue:(NSData*)value;
- (NSData*)aes_decryptValue:(NSData*)value usingPadding:(CCOptions)options;

@end
