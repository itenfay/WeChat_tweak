//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TingEmbedCallbackApi, UIViewController;

@interface TingEmbedApiPlugin : NSObject
{
    UIViewController *_currentViewController;
    TingEmbedCallbackApi *_callbackApi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingEmbedCallbackApi *callbackApi; // @synthesize callbackApi=_callbackApi;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void)onScrollViewDataCallbackOriginY30percent:(double)arg1;
- (void)onReloadPage:(unsigned long long)arg1;
- (void)openTingPageWithNewEngineRouteName:(id)arg1 params:(id)arg2 error:(id *)arg3;
- (void)openTingPagePageUrl:(id)arg1 pageParams:(id)arg2 error:(id *)arg3;
- (id)getFinderProfileDynamicReportParamsWithError:(id *)arg1;
- (void)openCategoryItemCategoryItem:(id)arg1 recommendBuffer:(id)arg2 scene:(long long)arg3 error:(id *)arg4;
- (void)openFinderDiscoverDiscoverLineData:(id)arg1 finderUsername:(id)arg2 sessionBuff:(id)arg3 error:(id *)arg4;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

