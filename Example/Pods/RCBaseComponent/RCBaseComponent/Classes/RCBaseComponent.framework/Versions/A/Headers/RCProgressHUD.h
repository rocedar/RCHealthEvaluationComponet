//
//  RCProgressHUD.h
//  RCBaseComponent
//
//  Created by wtw on 2018/7/17.
//

#import <Foundation/Foundation.h>

@interface RCProgressHUD : NSObject

+ (void)showGifHUD;
+ (void)dismissGifHUD;

+ (void)showHUDWithStatus:(NSString *)status;
+ (void)showSuccessHUDWithStatus:(NSString *)status;
+ (void)showErrorHUDWithStatus:(NSString *)status;
+ (void)showInfoHUDWithStatus:(NSString *)status;

@end
