//
//  RCHealthEvaluationListModel.h
//  RCBaseComponent
//
//  Created by wtw on 2018/6/25.
//

#import <Foundation/Foundation.h>

@interface RCHealthEvaluationListModel : NSObject
/** 1,已填写；0，去填写 */
@property (assign, nonatomic) int fill_in;
/** 问卷图标 */
@property (copy, nonatomic) NSString *thumbnail;
/** 必要参数 */
@property (copy, nonatomic) NSString *miss_params;
/** 问卷名称 */
@property (copy, nonatomic) NSString *questionnaire_name;
/** 问卷id */
@property (copy, nonatomic)  NSString *questionnaire_id;
/** 问卷描述 */
@property (copy, nonatomic) NSString *questionnaire_desc;
/** 问卷url */
@property (copy, nonatomic) NSString *questionnaire_url;
@end
