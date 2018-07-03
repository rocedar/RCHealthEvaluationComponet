//
//  RCHealthQuestionModel.h
//  RCBaseComponent
//
//  Created by wtw on 2018/6/26.
//

#import <Foundation/Foundation.h>

@class RCTopicModel, RCOptionModel;
@interface RCHealthQuestionModel : NSObject
/** 问卷ID */
@property (copy, nonatomic) NSString *questionnaire_id;
/** 开始ID */
@property (copy, nonatomic) NSString *start_topic_id;
/** 问卷名称 */
@property (copy, nonatomic) NSString *questionnaire_name;
/** 问卷描述 */
@property (copy, nonatomic) NSString *questionnaire_desc;
/** 问卷介绍页高度 */
@property (assign, nonatomic) CGFloat introHeight;
/** 当前题号 */
@property (assign, nonatomic) int index;

/** 问题集合 */
@property (strong, nonatomic) NSArray <RCTopicModel *> *topics;

- (instancetype)initWithDict:(NSDictionary *)dict;
@end

@interface RCTopicModel : NSObject

/** 问题ID */
@property (copy, nonatomic) NSString *topic_id;
/** 题号 */
@property (assign, nonatomic) int index;
/** 问题类型 = 1 单选; = 2 多选; = 3 数字填空; = 4 文字填空 */
@property (copy, nonatomic) NSString *type_id;
/** 问题名称 */
@property (copy, nonatomic) NSString *topic_name;
/** 默认值 */
@property (copy, nonatomic) NSString *default_value;
/** 答案 */
@property (copy, nonatomic) NSString *answerStr;

/** 问题选项 */
@property (strong, nonatomic) NSArray <RCOptionModel *> *options;

- (instancetype)initWithDict:(NSDictionary *)dict topicId:(NSString *)topicId;

@end

@interface RCOptionModel : NSObject

/** 选项ID */
@property (copy, nonatomic) NSString *option_id;
/** 选项名称 */
@property (copy, nonatomic) NSString *option_name;
/** 下一个问题 */
@property (copy, nonatomic) NSString *next_topic;
/** 选项类型 1 为互斥选项 */
@property (copy, nonatomic) NSString *exclusive;
/** 是否选中 */
@property (assign, nonatomic) BOOL isSelected;

@property (assign, nonatomic) CGFloat height;
/** 文案只有一行 */
@property (assign, nonatomic) BOOL isline;

@end
