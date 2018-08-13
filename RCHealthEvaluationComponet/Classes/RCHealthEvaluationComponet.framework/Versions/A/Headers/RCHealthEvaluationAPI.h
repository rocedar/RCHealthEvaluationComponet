//
//  RCHealthEvaluationAPI.h
//  RCHealthEvaluationComponet
//
//  Created by wtw on 2018/6/25.
//

#import <Foundation/Foundation.h>

typedef void(^RCSuccessHandler)(id obj);
typedef void(^RCFailureHandler)(NSError *error);

@interface RCHealthEvaluationAPI : NSObject

/**
 查询测评列表
 
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)getQuestionListWithSuccessHandler:(RCSuccessHandler)successHandler
                             errorHandler:(RCFailureHandler)errorHandler;

/**
 测评问卷详情
 
 @param questionID 问卷id
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)getQuestionDetailWithQuestionnaireId:(NSString *)questionID
                              successHandler:(RCSuccessHandler)successHandler
                                errorHandler:(RCFailureHandler)errorHandler;

/**
 保存问卷结果
 
 @param questionnaireid 问题id
 @param answer 答案
 @param otherUser  xx
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)saveQuestionResultWithquestionnaireId:(NSString *)questionnaireid
                                       answer:(NSString *)answer
                                    otherUser:(NSString *)otherUser
                               successHandler:(RCSuccessHandler)successHandler
                                 errorHandler:(RCFailureHandler)errorHandler;

/**
 查询问卷结果
 
 @param questionnaireid 问题id
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)getQuestionResultWithQuestionnaireId:(NSString *)questionnaireid
                              successHandler:(RCSuccessHandler)successHandler
                                errorHandler:(RCFailureHandler)errorHandler;

/**
 家庭医生服务权限
 
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)fetchDocotrServeStatusWithDeviceNo:(NSString *)deviceNo
                            successHandler:(RCSuccessHandler)successHandler
                              errorHandler:(RCFailureHandler)errorHandler;
@end
