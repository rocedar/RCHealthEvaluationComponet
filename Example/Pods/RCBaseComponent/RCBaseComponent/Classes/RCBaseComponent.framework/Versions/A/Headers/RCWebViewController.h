
#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    HTML_Activity,          //活动H5页面
    HTML_Mall,              //商城H5页面
    HTML_Scan,              //扫一扫H5页面
    HTML_Banner,            //banner广告H5页面
    HTML_Healthinfo,        //健康小助手H5页面
    HTML_Healthserver,      //健康服务H5页面
    HTML_Channelagency,     //免费体检
    HTML_Other              //其它
} HTML_Type;


@interface RCWebViewController : UIViewController
/** url */
@property(nonatomic,copy)NSString *urlStr;
/**H5类型*/
@property (nonatomic,assign)HTML_Type htmlType;
/**H5类型字符串 推送用*/
@property (nonatomic,copy)NSString *htmlTypeString;

@end
