#import <UIKit/UIKit.h>

#define RCBaseConfigInstance [RCBaseConfig sharedConfig]

NS_ASSUME_NONNULL_BEGIN

@interface RCBaseConfig : NSObject

/** 全局主题色深色 (按钮背景色) */
@property (nonatomic,strong) UIColor *rc_theme_deep_color;
 /** 全局主题色浅色 (各种边框进度条等) */
@property (nonatomic,strong) UIColor *rc_theme_light_color;
/** 全局按钮圆角半径 */
@property (nonatomic,assign) CGFloat rc_btn_radius;
/** 全局头像占位图片 */
@property (nonatomic,strong) UIImage *rc_icon_placeHolder_img;
/** 全局非头像占位图片 */
@property (nonatomic,strong) UIImage *rc_default_placeHolder_img;

/** 获取p_token */
@property (nonatomic, copy,readonly) NSString *p_token;
/** app-id */
@property (nonatomic,copy,readonly) NSString *app_id;
/** p_secret */
@property (nonatomic,copy,readonly) NSString *p_secret;

+ (instancetype)sharedConfig;

@end

#define RC_Log(format,...) CustomLog(__FUNCTION__,__LINE__,format,##__VA_ARGS__)

@interface RCSDK : NSObject

/** 创建单例 */
+ (instancetype)shareSDK;

/** 是否是 Debug 模式 */
+ (void)setDebug:(BOOL)debug;

/**
 SDK 初始化
 
 @param appid appid
 @param appkey appkey
 @param token token
 @param invalidHandler token 过期回调
 */
- (void)initWithAppid:(nonnull NSString *)appid
               appkey:(nonnull NSString *)appkey
                token:(NSString *)token
       invalidHandler:(void(^)(void))invalidHandler;

/** 设置token */
+ (void)setToken:(NSString *)token;

void CustomLog(const char *func, int lineNumber, NSString *format, ...);

/** 是否打印Log,默认为NO */
+ (void)setLogEnabled:(BOOL)value;

NS_ASSUME_NONNULL_END
@end
