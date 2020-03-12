//
//  YYWebIMG_AESKEYTool.h
//  YYWebIMG
//
//  Created by Snack stops on 2020/3/12.
//  Copyright © 2020 YYWebIMG. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YYWebIMG_AESKEYTool : NSObject
//    NSString *AA = [YYWebIMG_AESKEYTool encryptStringWithString:@"2020-03-11 12:00:00" andKey:@"5e5dff5240595e0008ae736c"];
//    NSLog(@"%@",AA);
//NSString 加密
+ (NSString *)encryptStringWithString:(NSString *)string andKey:(NSString *)key;
//NSString 解密
+ (NSString *)decryptStringWithString:(NSString *)string andKey:(NSString *)key;
//对NSData 进行加密
+ (NSData *)encryptDataWithData:(NSData *)data Key:(NSString *)key;
// 解密
+ (NSData *)decryptDataWithData:(NSData *)data andKey:(NSString *)key;
@end

NS_ASSUME_NONNULL_END
