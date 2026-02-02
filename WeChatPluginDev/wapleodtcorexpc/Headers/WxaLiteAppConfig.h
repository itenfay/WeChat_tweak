//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WxaRouterConfig;

@interface WxaLiteAppConfig : NSObject
{
    WxaRouterConfig *_wxaRouterConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WxaRouterConfig *wxaRouterConfig; // @synthesize wxaRouterConfig=_wxaRouterConfig;
- (void)setup;
- (void)addFlutterPlugin:(id)arg1;
- (void)setReleaseDefaultEngineWhenEmptyView:(_Bool)arg1;
- (void)setAutoReleaseEngine:(_Bool)arg1;
- (void)setPreloadNextEngine:(_Bool)arg1;
- (void)setPreloadEngine:(_Bool)arg1;
- (void)setEntryPointArgs:(id)arg1;
- (void)setEntryPoint:(id)arg1;
- (id)init;

@end

