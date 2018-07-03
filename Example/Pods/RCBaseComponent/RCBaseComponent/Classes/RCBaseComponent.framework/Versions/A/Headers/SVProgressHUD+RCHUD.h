//
//  SVProgressHUD+RCHUD.h
//  TestSVP
//
//  Created by wtw on 2018/6/10.
//  Copyright © 2018年 rocedar. All rights reserved.
//

#import "SVProgressHUD.h"

@interface SVProgressHUD (RCHUD)

+ (void)showGifHUD;
+ (void)dismissGifHUD;

+ (void)showHUDWithStatus:(NSString *)status;
+ (void)showSuccessHUDWithStatus:(NSString *)status;
+ (void)showErrorHUDWithStatus:(NSString *)status;
+ (void)showInfoHUDWithStatus:(NSString *)status;

@end

