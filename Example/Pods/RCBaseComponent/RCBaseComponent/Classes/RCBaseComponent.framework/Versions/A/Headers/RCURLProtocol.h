
/**
 *  URL类型1：http[s]:// 外部连接，使用浏览器直接打开，如：https://www.baidu.com
 *  URL类型2：rctp://h5##/url/##params 内部连接，使用浏览器打开，需要拼接URL，如：http://192.168.18.25/url/?param，其中拼接params时，需要判断URL中是否已经有参数
 *  URL类型3：rctp://ios##class##params iOS原生页面，其中class为controller类名，params为初始化controller类所需参数
 *  URL类型4：rctp://android##class##params android原生页面，其中class为controller类名，params为初始化controller类所需参数
 */

/* params 规则
 *
 * params：json字符串
 *
 * 1. 没有参数 rctp://ios##ClassName
 * 2. 基本类型 rctp://ios##ClassName##{"paramName1":"value1","paramName2":"value2"}
 * 3. 字典    rctp://ios##ClassName##{"paramName1":{"property1":"value1","property2":"value2"}}
 * 4. 模型    rctp://ios##ClassName##{"paramName1":{"ModelName":{"property1":"value1","property2":"value2"}}}
 * 5. 模型数组 rctp://ios##ClassName##{"paramName1":"value1","paramName2":{"ModelName":[{"property1":"value1","property2":"value2"},{"property1":"value1","property2":"value2"}]}}
 *
 */

#import <Foundation/Foundation.h>

@interface RCURLProtocol : NSObject

/**
 *  解析自定义URL
 *
 *  @param absoluteString URL绝对地址
 *  @param currentVC      当前控制器
 *  @param jumpVC         HTTP_URL跳转的含有UIWebView的控制器（只在WebView的代理外调用时传）
 *  @param jumpVC_setUrlstr  JumpVC中接受URL字符串的属性的 set方法        （只在WebView的代理外调用时传）
 *  @param webView        只在WebView的代理中调用传
 */
+ (BOOL)parseURLPath:(NSString *)absoluteString currentController:(UIViewController *)currentVC jumpVC:(UIViewController *)jumpVC jumpVC_setUrlstr:(SEL)jumpVC_setUrlstr  webView:(id)webView token:(NSString *)token;
@end
