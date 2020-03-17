//
//  YYWebIMG_AlertView.h
//  YYWebIMG
//
//  Created by Snack stops on 2020/3/11.
//  Copyright © 2020 YYWebIMG. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    // 从中间弹出
    YYWebIMG_AlertViewTypeDef,
    // 从底部弹出
    YYWebIMG_AlertViewTypeBottom
} YYWebIMG_AlertViewType;


@protocol YYWebIMG_AlertViewDelegate <NSObject>
@optional
- (void)YYWebIMG_LISTIMAGEARRAY:(NSMutableArray *)LISTIMAGEARRAY;
@end



@interface YYWebIMG_AlertView : UIView
@property (nonatomic, weak) id <YYWebIMG_AlertViewDelegate> delegate;
@property (nonatomic, assign) YYWebIMG_AlertViewType type;
@property (nonatomic, strong) UIView *contentView;

// 点击背景时候隐藏alert
@property (nonatomic, assign) BOOL hiddenWhenTapBG;

// Show the alert view in current window
- (void)show;
// Hide the alert view
- (void)hide;


- (instancetype)initWithDelegate:(id)Delegate;
// 点击背景时候隐藏alert
-(void)setVal:(NSString *)Value;
- (void)showIMG;

- (void)dismissWithTime:(NSInteger)Time;
@end

NS_ASSUME_NONNULL_END
