//
//  NSObject+instance.h
//  Pods-RCBaseComponent_Example
//
//  Created by wtw on 2018/2/27.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSObject (instance)
+ (instancetype)instance;
@end

@interface UIView (instace)
+ (instancetype)instance:(CGRect)frame;
@end


