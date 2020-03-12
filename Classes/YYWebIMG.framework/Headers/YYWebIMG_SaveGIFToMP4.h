//
//  YYWebIMG_SaveGIFToMP4.h
//  YYWebIMG
//
//  Created by Snack stops on 2020/3/6.
//  Copyright © 2020 YYWebIMG. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YYWebIMG_SaveGIFToMP4 : NSObject
+ (void)convertGifToMp4:(NSURL *)pathUrl completion:(void(^)(NSURL * _Nullable url))handler;
@end

NS_ASSUME_NONNULL_END
