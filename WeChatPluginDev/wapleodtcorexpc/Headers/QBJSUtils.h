//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBJSUtils : NSObject
{
}

+ (id)WKGetBaseURLScript;
+ (id)WKFetchMinScript;
+ (id)WKFDataScript;
+ (id)WKJSErrorMonitorScript;
+ (id)WKSelectedStringScript;
+ (id)WKCookieFixScript;
+ (id)WKXhrPseScript;
+ (void)fetchJsUpdate;
+ (void)formDataJsUpdate;
+ (void)monitorErrorJsUpdate;
+ (void)cookieJsUpdate;
+ (void)postJsUpdate;
+ (void)monitorJSFile;

@end

