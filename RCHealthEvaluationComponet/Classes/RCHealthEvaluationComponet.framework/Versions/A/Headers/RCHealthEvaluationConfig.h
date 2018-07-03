//
//  RCHealthEvaluationConfig.h
//  AFNetworking
//
//  Created by wtw on 2018/6/26.
//

#import <Foundation/Foundation.h>

#define RCHealthEvaluationConfigInstance [RCHealthEvaluationConfig sharedConfig]

@interface RCHealthEvaluationConfig : NSObject
/** 下一步按钮正常状态 */
@property (nonatomic,strong) UIImage *evaluation_detail_nextBtn_normal_img;
/** 下一步按钮不可选状态 */
@property (nonatomic,strong) UIImage *evaluation_detail_nextBtn_disabled_img;
/** 家庭医生头像 */
@property (nonatomic,strong) UIImage *evaluation_result_server_family_doctor_img;
/** 家庭医生领取背景 */
@property (nonatomic,strong) UIImage *evaluation_result_server_receiveBtn_img;
/** 导航栏返回按钮 */
@property (nonatomic,strong) UIImage *evaluation_backBtn_img;
+ (instancetype)sharedConfig;
@end
