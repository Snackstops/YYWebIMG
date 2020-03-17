//
//  YYWebIMG_Encryption.h
//  YYWebIMG
//
//  Created by admin on 2020/3/17.
//  Copyright © 2020 YYWebIMG. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YYWebIMG_Encryption : NSObject

//NSString 加密
+ (NSString *)EncryptionWithNDay:(NSInteger)n WithAESWithKey:(NSString *)key;

+ (NSString *)EncryptionWithGetNDay:(NSInteger)n WithAESWithKey:(NSString *)key;

//NSString 解密
+ (NSString *)DecryptWithString:(NSString *)string WithTYPE:(NSInteger)TYPE;

+ (NSString *)DecryptStringWithString:(NSString *)string andKey:(NSString *)key;


@end

NS_ASSUME_NONNULL_END
