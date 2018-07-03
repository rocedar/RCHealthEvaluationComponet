//
//  RCAlertView.h
//  RCAlertControllerDemo
//
//  Created by tanyang on 15/9/7.
//  Copyright (c) 2015年 tanyang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, RCAlertActionStyle) {
    RCAlertActionStyleDefault,
    RCAlertActionStyleCancle,
    RCAlertActionStyleDestructive,
};

@interface RCAlertAction : NSObject <NSCopying>

+ (instancetype)actionWithTitle:(NSString *)title style:(RCAlertActionStyle)style handler:(void (^)(RCAlertAction *action))handler;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) RCAlertActionStyle style;
@property (nonatomic, getter=isEnabled) BOOL enabled;

@end


@interface RCAlertView : UIView

@property (nonatomic, weak, readonly) UILabel *titleLable;
@property (nonatomic, weak, readonly) UILabel *messageLabel;

@property (nonatomic, strong, readonly) NSArray *textFieldArray;

// default 280, if 0 don't add width constraint,
@property (nonatomic, assign) CGFloat alertViewWidth;

// contentView space custom
@property (nonatomic, assign) CGFloat contentViewSpace;

// textLabel custom
@property (nonatomic, assign) CGFloat textLabelSpace;
@property (nonatomic, assign) CGFloat textLabelContentViewEdge;

// button custom
@property (nonatomic, assign) CGFloat buttonHeight;
@property (nonatomic, assign) CGFloat buttonSpace;
@property (nonatomic, assign) CGFloat buttonContentViewEdge;
@property (nonatomic, assign) CGFloat buttonCornerRadius;
@property (nonatomic, strong) UIFont *buttonFont;
@property (nonatomic, strong) UIColor *buttonDefaultBgColor;
@property (nonatomic, strong) UIColor *buttonCancleBgColor;
@property (nonatomic, strong) UIColor *buttonDestructiveBgColor;

// textFeild custom
@property (nonatomic, strong) UIColor *textFieldBorderColor;
@property (nonatomic, strong) UIColor *textFieldBackgroudColor;
@property (nonatomic, strong) UIFont *textFieldFont;
@property (nonatomic, assign) CGFloat textFeildHeight;
@property (nonatomic, assign) CGFloat textFeildEdge;
@property (nonatomic, assign) CGFloat textFeildorderWidth;
@property (nonatomic, assign) CGFloat textFeildContentViewEdge;




+ (instancetype)alertViewWithTitle:(NSString *)title message:(NSString *)message;

- (void)addAction:(RCAlertAction *)action;

- (void)addTextFieldWithConfigurationHandler:(void (^)(UITextField *textField))configurationHandler;

@end
