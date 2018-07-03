#import <UIKit/UIKit.h>

//常量
UIKIT_EXTERN NSString *const RC_COLOR_MAIN;     // 主题颜色
UIKIT_EXTERN NSString *const RC_COLOR_AUX;      // 主题辅助色
UIKIT_EXTERN NSString *const RC_COLOR_SUB_AUX;  // 主题次辅助色

UIKIT_EXTERN NSString *const RC_COLOR_TEXT_3;   // 字体颜色
UIKIT_EXTERN NSString *const RC_COLOR_TEXT_6;
UIKIT_EXTERN NSString *const RC_COLOR_TEXT_9;

UIKIT_EXTERN NSString *const RC_COLOR_BTN_NORMAL;  // 正常按钮颜色
UIKIT_EXTERN NSString *const RC_COLOR_BTN_DISABLE; // 置灰按钮颜色
UIKIT_EXTERN CGFloat   const RC_BTN_RADIUS;        // 按钮圆角半径

UIKIT_EXTERN NSString *const RC_COLOR_LINE;        // 分割线颜色

UIKIT_EXTERN NSInteger const RCNavItemFontSize;    // 导航栏Item字号

UIKIT_EXTERN NSString *const P_VERSION;            //平台版本号
UIKIT_EXTERN NSString *const P_SDK_SECRET;         //平台SDK版本标识

#define WeakSelf __weak typeof(self) weakSelf = self;  // 弱引用

//获取屏幕宽/高
#define KSCREEN_WIDTH   [UIScreen mainScreen].bounds.size.width
#define KSCREEN_HEIGHT  [UIScreen mainScreen].bounds.size.height

//以750作为基准适配
#define SCALE(size) (size) * (KSCREEN_WIDTH/750.0)

//字符串非空判断
#define IsStrEmpty(_ref)  (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref)isEqualToString:@""]))

//RGB 颜色
#define RGBColor(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define RGBAColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(r)/255.0 blue:(r)/255.0 alpha:a]

//设备类型判断
#define UI_IS_IPHONE    ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone)
#define UI_IS_IPHONEX   (UI_IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 812.0)

#define KStatusBar_HEIGHT (UI_IS_IPHONEX ? 44 : 20)
#define KNavBar_HEIGHT (UI_IS_IPHONEX ? 88 : 64)
#define KBottomSafeAreaHeight (UI_IS_IPHONEX ? 34 : 0)

//设置rightBarItem
#define RCBarButtonItemWithSEL(SEL,title) self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:title style:UIBarButtonItemStylePlain target:self action:SEL];\
[self.navigationItem.rightBarButtonItem setTitleTextAttributes:[NSDictionary dictionaryWithObjectsAndKeys :[UIFont systemFontOfSize:14], NSFontAttributeName ,[UIColor blackColor], NSForegroundColorAttributeName ,nil ] forState:UIControlStateNormal];

