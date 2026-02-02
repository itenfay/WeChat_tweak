//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAApptaskPublicResLogic, WAJSCoreService, WAWebViewController;

@interface WAPreloadAppTask : NSObject
{
    WAApptaskPublicResLogic *_publicResLogic;
    WAWebViewController *_webView;
    WAJSCoreService *_appService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAJSCoreService *appService; // @synthesize appService=_appService;
@property(retain, nonatomic) WAWebViewController *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) WAApptaskPublicResLogic *publicResLogic; // @synthesize publicResLogic=_publicResLogic;
- (id)init;
- (void)dealloc;

@end

