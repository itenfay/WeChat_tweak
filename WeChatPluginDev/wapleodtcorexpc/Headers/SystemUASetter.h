//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WKWebView;

@interface SystemUASetter : NSObject
{
    WKWebView *_webview;
    NSString *_systemDefaultUA;
}

+ (id)deviceSystemDefaultUA;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *systemDefaultUA; // @synthesize systemDefaultUA=_systemDefaultUA;
@property(retain, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
- (id)getDefaultUserAgentWithWeixinVersion;
- (void)updateDefaultUserAgentWithoutOverwriteGlobalSetting:(CDUnknownBlockType)arg1;
- (void)updateDefaultUserAgent;
- (id)getMMUserAgentWithSystemDefaultUA:(id)arg1 detailInfo:(id)arg2;
- (id)getMMUserAgentWithSystemDefaultUA:(id)arg1;
- (id)getMMUserAgentWithDetailInfo:(id)arg1;
- (id)getMMUserAgent;
- (void)mainThread_asyncGetSystemDefaultUA:(CDUnknownBlockType)arg1;
- (void)asyncGenSystemDefaultUAWithSingletonReturnBlock:(CDUnknownBlockType)arg1;
- (id)syncGetSystemUAOrDefaultUAOnFail;
- (id)syncGetSystemDefaultUA;

@end

