//
//  UILabel+RCLabel.h
//  Pods-RCBaseComponent_Example
//
//  Created by wtw on 2018/6/19.
//

#import <UIKit/UIKit.h>

@interface UILabel (RCLabel)

+ (UILabel *)labelWithText:(NSString *)text
                 textColor:(UIColor *)color
                      font:(UIFont *)font
             textAlignment:(NSTextAlignment)alignment;
@end
