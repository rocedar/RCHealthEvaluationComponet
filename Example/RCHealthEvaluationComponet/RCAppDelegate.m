//
//  RCAppDelegate.m
//  RCHealthEvaluationComponet
//
//  Created by CoderTWWu on 07/02/2018.
//  Copyright (c) 2018 CoderTWWu. All rights reserved.
//

#import "RCAppDelegate.h"
#import <RCBaseComponent/RCSDK.h>


@implementation RCAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Override point for customization after application launch.
    //SDK 初始化
//    [RCSDK setDebug:YES];  //deug 模式下开启
    [[RCSDK shareSDK] initWithAppid:@"101"
                             appkey:@"bbd97dde455a76880c177b43"
                              token:@"a0c3e71f51301264dc67f20e8a59c9f3"
                     invalidHandler:^(RCErrorCode errorCode) {
                         //更新token
                         //[RCSDK setToken:@"a0c3e71f51301264dc67f20e8a59c9f3"];
                     }];
    //    RCBaseConfigInstance.rc_theme_deep_color = [UIColor redColor];  //颜色配置 其他配置类似
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
