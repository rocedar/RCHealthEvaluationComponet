//
//  RCHTTPSessionConfig.h
//  Pods-RCNetWorkComponent_Example
//
//  Created by wtw on 2018/3/6.
//

#import <Foundation/Foundation.h>

#define RCHTTPConfigInstance [RCHTTPSessionConfig sharedConfig]

@interface RCHTTPSessionConfig : NSObject

/** baseUrl */
@property (nonatomic, strong,readonly) NSString *baseUrl;
/** 签名串 */
@property (nonatomic,copy,readonly) NSString *signString;
/** app_id */
@property (nonatomic,copy,readonly) NSString *appId;
/** user_id */
@property (nonatomic,copy,readonly) NSString *userId;
/** token */
@property (nonatomic,copy,readonly) NSString *token;
/** company_id */
@property (nonatomic,copy,readonly) NSString *companyId;
/** department_id */
@property (nonatomic,copy,readonly) NSString *departmentId;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

+ (RCHTTPSessionConfig *)sharedConfig;

- (void)setBaseUrl:(NSString *)baseUrl
        signString:(NSString *)signString
             appId:(NSString *)appId
            userId:(NSString *)userId
             token:(NSString *)token
         companyId:(NSString *)companyId
      departmentId:(NSString *)departmentId;

- (void)setToken:(NSString *)token;

@end
