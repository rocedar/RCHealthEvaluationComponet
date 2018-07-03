//
//  UIBarButtonItem+RCCategory.h
//  Pods-RCBaseComponent_Example
//
//  Created by wtw on 2018/2/27.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (RCCategory)

+ (instancetype)itemWithImage:(NSString *)image highImage:(NSString *)highImge target:(id)target action:(SEL)action;
+ (instancetype)itemWithtitle:(NSString *)title target:(id)target action:(SEL)action;

@end
