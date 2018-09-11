//
//  RCHTTPSessionManager.h
//  RCDeviceManager
//
//  Created by wtw on 17/2/14.
//  Copyright © 2017年 rocedar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

typedef void(^RCHTTPSessionSuccessHandler)(NSURLSessionDataTask *task,id responseObject);
typedef void(^RCHTTPSessionFailureHandler)(NSURLSessionDataTask *task,  NSError *error);

@interface RCHTTPSessionManager : NSObject

/**
 *  GET请求
 *
 *  @param path         请求路径，例如：/action/coachjson/coachAccount.jsp
 *  @param subParameter 请求参数
 *  @param append       是否拼接基本参数
 *  @param sign         是否签名
 *  @param print        是否打印日志
 *  @param success      请求成功回调
 *  @param failure      请求失败回调
 */
+ (void)GETWithPath:(NSString *)path
         parameters:(NSDictionary *)subParameter
appendBaseParameters:(BOOL)append
               sign:(BOOL)sign
           printLog:(BOOL)print
            success:(RCHTTPSessionSuccessHandler)success
            failure:(RCHTTPSessionFailureHandler)failure;

/**
 *  POST请求
 *
 *  @param path         请求路径，例如：/action/coachjson/coachAccount.jsp
 *  @param subParameter 请求参数
 *  @param append       是否拼接基本参数
 *  @param sign         是否签名
 *  @param print        是否打印日志
 *  @param success      请求成功回调
 *  @param failure      请求失败回调
 */
+ (void)POSTWithPath:(NSString *)path
          parameters:(NSDictionary *)subParameter
appendBaseParameters:(BOOL)append
                sign:(BOOL)sign
            printLog:(BOOL)print
             success:(RCHTTPSessionSuccessHandler)success
             failure:(RCHTTPSessionFailureHandler)failure;

/**
 *  PUT请求
 *
 *  @param path         请求路径，例如：/action/coachjson/coachAccount.jsp
 *  @param subParameter 请求参数
 *  @param append       是否拼接基本参数
 *  @param sign         是否签名
 *  @param print        是否打印日志
 *  @param success      请求成功回调
 *  @param failure      请求失败回调
 */
+ (void)PUTWithPath:(NSString *)path
         parameters:(NSDictionary *)subParameter
appendBaseParameters:(BOOL)append
               sign:(BOOL)sign
           printLog:(BOOL)print
            success:(RCHTTPSessionSuccessHandler)success
            failure:(RCHTTPSessionFailureHandler)failure;

/**
 *  DELETE请求
 *
 *  @param path         请求路径，例如：/action/coachjson/coachAccount.jsp
 *  @param subParameter 请求参数
 *  @param append       是否拼接基本参数
 *  @param sign         是否签名
 *  @param print        是否打印日志
 *  @param success      请求成功回调
 *  @param failure      请求失败回调
 */
+ (void)DELETEWithPath:(NSString *)path
            parameters:(NSDictionary *)subParameter
  appendBaseParameters:(BOOL)append
                  sign:(BOOL)sign
              printLog:(BOOL)print
               success:(RCHTTPSessionSuccessHandler)success
               failure:(RCHTTPSessionFailureHandler)failure;

@end

@interface RCNetWorkManager : AFHTTPSessionManager
@end

